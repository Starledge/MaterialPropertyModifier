// Fill out your copyright notice in the Description page of Project Settings.


#include "MaterialEditingLibrary.h"
#include "BPL_MaterialPropertyModifier.h"


void UBPL_MaterialPropertyModifier::EditUseWith(UMaterial* Material,UsedTypes Type,bool Value)
{
	if (Material)
	{
		switch (Type)
		{
		case SkeletalMesh:Material->bUsedWithSkeletalMesh = Value;	
			break;
		case EditorCompositing:Material->bUsedWithEditorCompositing = Value;
			break;
		case ParticleSprites:Material->bUsedWithParticleSprites = Value;
			break;
		case BeamTrail:Material->bUsedWithBeamTrails = Value;
			break;
		case MeshParticles:Material->bUsedWithMeshParticles = Value;
			break;
		case NiagraSprites:Material->bUsedWithNiagaraSprites = Value;
			break;
		case NiagraRibbons:Material->bUsedWithNiagaraRibbons = Value;
			break;
		case NiagraMeshParticles:Material->bUsedWithNiagaraMeshParticles = Value;
			break;
		case GeometryCache:Material->bUsedWithGeometryCache = Value;
			break;
		case StaticLighting:Material->bUsedWithStaticLighting = Value;
			break;
		case MorphTargets:Material->bUsedWithMorphTargets = Value;
			break;
		case SplineMeshes:Material->bUsedWithSplineMeshes = Value;
			break;
		case InstancedStaticMesh:Material->bUsedWithInstancedStaticMeshes = Value;
			break;
		case GeometryCollection:Material->bUsedWithGeometryCollections = Value;
			break;
		case Clothing:Material->bUsedWithClothing = Value;
			break;
		case Water:Material->bUsedWithWater = Value;
			break;
		case HairStrands:Material->bUsedWithHairStrands = Value;
			break;
		case LidarPointCloud:Material->bUsedWithLidarPointCloud = Value;
			break;
		case VirtualHeightfieldMesh:Material->bUsedWithVirtualHeightfieldMesh = Value;
			break;
		case Nanites:Material->bUsedWithNanite = Value;
			break;
		}
	}
}

void UBPL_MaterialPropertyModifier::SetMaterialDomain(UMaterial* Material,EMaterialDomain Domain)
{
	Material->MaterialDomain = Domain;
}

void UBPL_MaterialPropertyModifier::SetShandingModel(UMaterial* Material, EMaterialShadingModel ShadingModel)
{
	Material->SetShadingModel(ShadingModel);
}

void UBPL_MaterialPropertyModifier::SetTwoSided(UMaterial* Material, bool Value)
{
	Material->TwoSided = Value;
}

void UBPL_MaterialPropertyModifier::ShouldUseMaterialAttribute(UMaterial* Material, bool Value)
{
	Material->bUseMaterialAttributes = Value;
}

void UBPL_MaterialPropertyModifier::ShouldCastRayTracedShadow(UMaterial* Material, bool Value)
{
	Material->bCastRayTracedShadows=Value;
}

void UBPL_MaterialPropertyModifier::CompileMaterialProperties(UMaterial* Material)
{
	UMaterialEditingLibrary::RecompileMaterial(Material);
}
