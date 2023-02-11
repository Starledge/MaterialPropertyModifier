// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPL_MaterialPropertyModifier.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum UsedTypes
{
	SkeletalMesh,
	EditorCompositing,
	ParticleSprites,
	BeamTrail,
	MeshParticles,
	NiagraSprites,
	NiagraRibbons,
	NiagraMeshParticles,
	GeometryCache,
	StaticLighting,
	MorphTargets,
	SplineMeshes,
	InstancedStaticMesh,
	GeometryCollection,
	Clothing,
	Water,
	HairStrands,
	LidarPointCloud,
	VirtualHeightfieldMesh,
	Nanites
};

UCLASS()
class MATERIALPROPERTYMODIFIER_API UBPL_MaterialPropertyModifier : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Material Property Editor")
		static void EditUseWith(UMaterial* Material,UsedTypes Type, bool Value);
	UFUNCTION(BlueprintCallable, Category = "Material Property Editor")
		static void SetMaterialDomain(UMaterial* Material, EMaterialDomain Domain);
	UFUNCTION(BlueprintCallable, Category = "Material Property Editor")
		static void SetShandingModel(UMaterial* Material, EMaterialShadingModel ShadingModel);
	UFUNCTION(BlueprintCallable, Category = "Material Property Editor")
		static void SetTwoSided(UMaterial* Material, bool Value);
	UFUNCTION(BlueprintCallable, Category = "Material Property Editor")
		static void ShouldUseMaterialAttribute(UMaterial* Material, bool Value);
	UFUNCTION(BlueprintCallable, Category = "Material Property Editor")
		static void ShouldCastRayTracedShadow(UMaterial* Material, bool Value);
	UFUNCTION(BlueprintCallable, Category = "Material Property Editor")
		static void CompileMaterialProperties(UMaterial* Material);
};
