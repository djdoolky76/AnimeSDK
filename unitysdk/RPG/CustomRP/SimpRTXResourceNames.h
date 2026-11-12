#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SIMPRTXRESOURCENAMES_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1FE70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SimpRTXResourceNames_TypeDefinitionIndex = 38804;

	class SimpRTXResourceNames : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_IDVoxelIrradianceNormalOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DB0);
		}

		static ::System::Int32* StaticGet_IDBakedSH1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DB4);
		}

		static ::System::Int32* StaticGet_IDBlasOffsets8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DB8);
		}

		static ::System::Int32* StaticGet_IDBVHNodes()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DBC);
		}

		static ::System::Int32* StaticGet_IDSimpRTXIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DC0);
		}

		static ::System::Int32* StaticGet_IDUVs()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DC4);
		}

		static ::System::Int32* StaticGet_IDRendererIndex8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DC8);
		}

		static ::System::Int32* StaticGet_IDSpatialHashOffsetTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DCC);
		}

		static ::System::Int32* StaticGet_IDSurfaceCardAtlasArray()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DD0);
		}

		static ::System::Int32* StaticGet_IDBakedSH2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DD4);
		}

		static ::System::Int32* StaticGet_IDBVHMaxDepth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DD8);
		}

		static ::System::Int32* StaticGet_IDIndices()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DDC);
		}

		static ::System::Int32* StaticGet_IDCardBoundsExpand()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DE0);
		}

		static ::System::Int32* StaticGet_IDObjectCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DE4);
		}

		static ::System::Int32* StaticGet_IDWorldToLocals()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DE8);
		}

		static ::System::Int32* StaticGet_IDSpatialHashOffsetTableSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DEC);
		}

		static ::System::Int32* StaticGet_IDBakedSH0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DF0);
		}

		static ::System::Int32* StaticGet_IDVoxelIrradianceRoughnessBias()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DF4);
		}

		static ::System::Int32* StaticGet_IDNormalTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DF8);
		}

		static ::System::Int32* StaticGet_IDSimpRTXCylinderGroupCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9DFC);
		}

		static ::System::Int32* StaticGet_IDBakedSH3()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E00);
		}

		static ::System::Int32* StaticGet_IDSurfaceCardInfoArray()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E04);
		}

		static ::System::Int32* StaticGet_IDSimpRTXDatas()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E08);
		}

		static ::System::Int32* StaticGet_IDBVHNodes8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E0C);
		}

		static ::System::Int32* StaticGet_IDPositions()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E10);
		}

		static ::System::Int32* StaticGet_IDSDFAtlasArray()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E14);
		}

		static ::System::Int32* StaticGet_IDNormals()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E18);
		}

		static ::System::Int32* StaticGet_IDSpatialHashValidMaskTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E1C);
		}

		static ::System::Int32* StaticGet_IDInvValidMaskIdExtents()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E20);
		}

		static ::System::Int32* StaticGet_IDObjectData()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E24);
		}

		static ::System::Int32* StaticGet_IDFallbackVoxelIndexMapping()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E28);
		}

		static ::System::Int32* StaticGet_IDMaxCardsPerDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E2C);
		}

		static ::System::Int32* StaticGet_IDSimpRTXAtlas()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E30);
		}

		static ::System::Int32* StaticGet_IDAlbedoTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E34);
		}

		static ::System::Int32* StaticGet_IDTriangleIndex8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E38);
		}

		static ::System::Int32* StaticGet_IDTriangle8()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E3C);
		}

		static ::System::Int32* StaticGet_IDMaterials()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E40);
		}

		static ::System::Int32* StaticGet_IDBVHNodeCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E44);
		}

		static ::System::Int32* StaticGet_IDTangents()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E48);
		}

		static ::System::Int32* StaticGet_IDSimpRTXAtlasDimension()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E4C);
		}

		static ::System::Int32* StaticGet_IDVoxelIndexMappingParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E50);
		}

		static ::System::Int32* StaticGet_IDSimpRTXQuadGroupCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E54);
		}

		static ::System::Int32* StaticGet_IDBlasIndex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E58);
		}

		static ::System::Int32* StaticGet_IDVoxelLightStrength()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E5C);
		}

		static ::System::Int32* StaticGet_IDLocalToWorlds()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "SimpRTXResourceNames")->GetStaticField(0x9E60);
		}

		// static const ::System::String* NameObjectData; // 0x0
		// static const ::System::String* NameBVHNodes; // 0x0
		// static const ::System::String* NameSDFAtlasArray; // 0x0
		// static const ::System::String* NameObjectCount; // 0x0
		// static const ::System::String* NameBVHNodeCount; // 0x0
		// static const ::System::String* NameBVHMaxDepth; // 0x0
		// static const ::System::String* NameSurfaceCardInfoArray; // 0x0
		// static const ::System::String* NameSurfaceCardAtlasArray; // 0x0
		// static const ::System::String* NameMaxCardsPerDirection; // 0x0
		// static const ::System::String* NameCardBoundsExpand; // 0x0
		// static const ::System::String* NameSimpRTXAtlas; // 0x0
		// static const ::System::String* NameSimpRTXDatas; // 0x0
		// static const ::System::String* NameSimpRTXAtlasDimension; // 0x0
		// static const ::System::String* NameSimpRTXQuadGroupCount; // 0x0
		// static const ::System::String* NameSimpRTXCylinderGroupCount; // 0x0
		// static const ::System::String* NameSimpRTXIntensity; // 0x0
		// static const ::System::String* NameBakedSH0; // 0x0
		// static const ::System::String* NameBakedSH1; // 0x0
		// static const ::System::String* NameBakedSH2; // 0x0
		// static const ::System::String* NameBakedSH3; // 0x0
		// static const ::System::String* NameSpatialHashOffsetTexture; // 0x0
		// static const ::System::String* NameSpatialHashValidMaskTex; // 0x0
		// static const ::System::String* NameVoxelIndexMappingParams; // 0x0
		// static const ::System::String* NameSpatialHashOffsetTableSize; // 0x0
		// static const ::System::String* NameFallbackVoxelIndexMapping; // 0x0
		// static const ::System::String* NameInvValidMaskIdExtents; // 0x0
		// static const ::System::String* NameVoxelIrradianceRoughnessBias; // 0x0
		// static const ::System::String* NameVoxelLightStrength; // 0x0
		// static const ::System::String* NameVoxelIrradianceNormalOffset; // 0x0
		// static const ::System::String* NameIndices; // 0x0
		// static const ::System::String* NamePositions; // 0x0
		// static const ::System::String* NameNormals; // 0x0
		// static const ::System::String* NameTangents; // 0x0
		// static const ::System::String* NameUVs; // 0x0
		// static const ::System::String* NameBVHNodes8; // 0x0
		// static const ::System::String* NameTriangleIndex8; // 0x0
		// static const ::System::String* NameTriangle8; // 0x0
		// static const ::System::String* NameBlasOffsets8; // 0x0
		// static const ::System::String* NameRendererIndex8; // 0x0
		// static const ::System::String* NameBlasIndex; // 0x0
		// static const ::System::String* NameMaterials; // 0x0
		// static const ::System::String* NameLocalToWorlds; // 0x0
		// static const ::System::String* NameWorldToLocals; // 0x0
		// static const ::System::String* NameAlbedoTex; // 0x0
		// static const ::System::String* NameNormalTex; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SIMPRTXRESOURCENAMES_CCTOR_OFFSET))();
		}

	};
}
