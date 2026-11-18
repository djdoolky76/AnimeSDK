#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/TestLyraSectorLoader_DistanceFieldVisualizeMode.h"
#include "unitysdk/TestLyraSectorLoader_SceneVoxelVisualizeMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class TestLyraSectorLoader_ClipmapLoaderData;
class TestLyraSectorLoader_KeyToPackedAssetDict;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define TESTLYRASECTORLOADER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CA3EEC0)
#define TESTLYRASECTORLOADER_CLEARASSETVISITSTAUS_OFFSET UNITYSDK_OFFSET(0x1CA3F640)
#define TESTLYRASECTORLOADER_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1CA3F8B0)
#define TESTLYRASECTORLOADER_CLEARSERIALIZEDASSETREFERENCEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1CA3EF60)
#define TESTLYRASECTORLOADER_GETDFASSETPATHFORMAT_OFFSET UNITYSDK_OFFSET(0x1CA3EFF0)
#define TESTLYRASECTORLOADER_GETPACKEDASSETPATHFORMAT_OFFSET UNITYSDK_OFFSET(0x1CA3F0D0)
#define TESTLYRASECTORLOADER_GETSVASSETPATHFORMAT_OFFSET UNITYSDK_OFFSET(0x1CA3F060)
#define TESTLYRASECTORLOADER_HASASSETREFERENCE_OFFSET UNITYSDK_OFFSET(0x1CA3EF00)
#define TESTLYRASECTORLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CA3F860)
#define TESTLYRASECTORLOADER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CA3FC50)
#define TESTLYRASECTORLOADER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1CA3FCA0)
#define TESTLYRASECTORLOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CA3F6D0)
#define TESTLYRASECTORLOADER_RECORDENABLE_OFFSET UNITYSDK_OFFSET(0x1CA3F140)
#define TESTLYRASECTORLOADER_RECORDTYRLOAD_OFFSET UNITYSDK_OFFSET(0x1CA3F190)
#define TESTLYRASECTORLOADER_SETSHOULDRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x1CA40050)
#define TESTLYRASECTORLOADER_START_OFFSET UNITYSDK_OFFSET(0x1CA3F690)
#define TESTLYRASECTORLOADER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CA3FCE0)
#define TESTLYRASECTORLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA40090)

inline static constexpr unsigned int TestLyraSectorLoader_TypeDefinitionIndex = 27095;

class TestLyraSectorLoader : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* SDF_ASSET_NAME; // 0x0
	// static const ::System::String* VOXEL_ASSET_NAME; // 0x0
	// static const ::System::String* LYRAGI_FOLDER_NAME; // 0x0
	// static const ::System::String* LYRA_SCENE_ASSET_NAME; // 0x0
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::LyraSector::LyraSectorCoord, ::System::Boolean>*>* coordDataVisitStatus; // 0x18
	::TestLyraSectorLoader_ClipmapLoaderData* m_DistanceFieldLoaderData; // 0x20
	::TestLyraSectorLoader_ClipmapLoaderData* m_SceneVoxelLoaderData; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* m_LoadedPackedAssetsRequests; // 0x30
	::System::Boolean forceEnableSDFAndVoxel; // 0x38
	::System::Boolean m_ShouldReloadAssets; // 0x39
	::System::Byte _padding0[0x6];
	::System::String* m_LyraAssetDir; // 0x40
	::System::Boolean m_UseReplacedSceneName; // 0x48
	::System::Boolean m_EnableDistanceField; // 0x49
	::System::Boolean m_EnableSceneVoxel; // 0x4A
	::System::Boolean m_EnableDebugView; // 0x4B
	::TestLyraSectorLoader_DistanceFieldVisualizeMode m_DistanceFieldVisualizeMode; // 0x4C
	::System::Boolean m_DistaneFieldForceFullUpdate; // 0x50
	::System::Byte _padding1[0x3];
	::TestLyraSectorLoader_SceneVoxelVisualizeMode m_SceneVoxelVisualizeMode; // 0x54
	::System::Boolean m_SceneVoxelForceFullUpdate; // 0x58
	::System::Byte _padding2[0x7];
	::TestLyraSectorLoader_KeyToPackedAssetDict* m_PackedAssets; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_AWAKE_OFFSET))(this);
	}

	::System::Boolean HasAssetReference()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_HASASSETREFERENCE_OFFSET))(this);
	}

	::System::Boolean ClearSerializedAssetReferenceIfNeeded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLEARSERIALIZEDASSETREFERENCEIFNEEDED_OFFSET))(this);
	}

	static ::System::String* GetDFAssetPathFormat(::System::String* lyraAssetDir)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_GETDFASSETPATHFORMAT_OFFSET))(lyraAssetDir);
	}

	static ::System::String* GetSVAssetPathFormat(::System::String* lyraAssetDir)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_GETSVASSETPATHFORMAT_OFFSET))(lyraAssetDir);
	}

	static ::System::String* GetPackedAssetPathFormat(::System::String* lyraAssetDir)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_GETPACKEDASSETPATHFORMAT_OFFSET))(lyraAssetDir);
	}

	::System::Void RecordEnable(::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_RECORDENABLE_OFFSET))(this, enable);
	}

	::System::Void RecordTyrLoad(::LyraSector::LyraSectorCoord coord, ::System::Boolean isForDistance, ::System::Boolean assetExist)
	{
		return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSectorCoord, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_RECORDTYRLOAD_OFFSET))(this, coord, isForDistance, assetExist);
	}

	::System::Void ClearAssetVisitStaus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLEARASSETVISITSTAUS_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_ONDESTROY_OFFSET))(this);
	}

	::System::Void ClearData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLEARDATA_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDrawGizmos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_ONDRAWGIZMOS_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_UPDATE_OFFSET))(this);
	}

	::System::Void SetShouldReloadAssets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_SETSHOULDRELOADASSETS_OFFSET))(this);
	}
};
