#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetLog_LogItem; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define FOUNDATION_ASSETLOG_APPENDLOG_OFFSET UNITYSDK_OFFSET(0x1E083430)
#define FOUNDATION_ASSETLOG_COMPARESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1E081E70)
#define FOUNDATION_ASSETLOG_DESTROYPOOLASSET_OFFSET UNITYSDK_OFFSET(0x1E084010)
#define FOUNDATION_ASSETLOG_ENDCOLLECTRUNTIMEASSETLOAD_OFFSET UNITYSDK_OFFSET(0x1E081290)
#define FOUNDATION_ASSETLOG_FORCEUNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1E083A50)
#define FOUNDATION_ASSETLOG_GETCALLSTACK_OFFSET UNITYSDK_OFFSET(0x1E083380)
#define FOUNDATION_ASSETLOG_GETLOGDIR_OFFSET UNITYSDK_OFFSET(0x1E081FF0)
#define FOUNDATION_ASSETLOG_INSTANTIATEPOOLASSET_OFFSET UNITYSDK_OFFSET(0x1E083E40)
#define FOUNDATION_ASSETLOG_LOADASSET_OFFSET UNITYSDK_OFFSET(0x1E083BE0)
#define FOUNDATION_ASSETLOG_LOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1E084370)
#define FOUNDATION_ASSETLOG_LOADSCENE_OFFSET UNITYSDK_OFFSET(0x1E083660)
#define FOUNDATION_ASSETLOG_LOADVIDEO_OFFSET UNITYSDK_OFFSET(0x1E0846D0)
#define FOUNDATION_ASSETLOG_LODADDEDFILE_OFFSET UNITYSDK_OFFSET(0x1E0820E0)
#define FOUNDATION_ASSETLOG_LOG_OFFSET UNITYSDK_OFFSET(0x1E082490)
#define FOUNDATION_ASSETLOG_ONREQUESTASSETCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E081310)
#define FOUNDATION_ASSETLOG_SAVEFILE_OFFSET UNITYSDK_OFFSET(0x1E0825B0)
#define FOUNDATION_ASSETLOG_SAVEINFOTOFILE_OFFSET UNITYSDK_OFFSET(0x1E082E80)
#define FOUNDATION_ASSETLOG_SAVELOGTOFILE_1_OFFSET UNITYSDK_OFFSET(0x1E082A30)
#define FOUNDATION_ASSETLOG_SAVELOGTOFILE_OFFSET UNITYSDK_OFFSET(0x1E082730)
#define FOUNDATION_ASSETLOG_STARTCOLLECTRUNTIMEASSETLOAD_OFFSET UNITYSDK_OFFSET(0x1E0811E0)
#define FOUNDATION_ASSETLOG_TAKESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1E081390)
#define FOUNDATION_ASSETLOG_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x1E0841E0)
#define FOUNDATION_ASSETLOG_UNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1E084540)
#define FOUNDATION_ASSETLOG_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1E0838C0)
#define FOUNDATION_ASSETLOG_UPLOADASSETLOADSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x1E081350)
#define FOUNDATION_ASSETLOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E084A20)

namespace Foundation
{
	inline static constexpr unsigned int AssetLog_TypeDefinitionIndex = 8397;

	class AssetLog : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_FullLogs()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x71F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_TmpSceneLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x71F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_TmpInstantiateLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7200);
		}
		static ::System::Action_1<::System::String*>** StaticGet_onRequestAsset()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7208);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_BundleLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7210);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_TmpAssetLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7218);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_TmpBundleLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7220);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_SceneLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7228);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_TmpVideoLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7230);
		}
		static ::System::Action_1<::System::String*>** StaticGet_autoTestPathRecord()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7238);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_AssetLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7240);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_InstantiateLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7248);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_VideoLogDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x7250);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x3830);
		}
		static ::System::Int32* StaticGet_COLLECT_ASSET_TYPE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AssetLog_TypeDefinitionIndex)->GetStaticField(0x3834);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG__CCTOR_OFFSET))();
		}

		static ::System::Void StartCollectRuntimeAssetLoad(::System::Int32 dataType)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_STARTCOLLECTRUNTIMEASSETLOAD_OFFSET))(dataType);
		}

		static ::System::Void EndCollectRuntimeAssetLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_ENDCOLLECTRUNTIMEASSETLOAD_OFFSET))();
		}

		static ::System::Void OnRequestAssetCallback(::System::String* assetPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_ONREQUESTASSETCALLBACK_OFFSET))(assetPath);
		}

		static ::System::Void UploadAssetLoadStacktrace(::System::String* assetPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_UPLOADASSETLOADSTACKTRACE_OFFSET))(assetPath);
		}

		static ::System::Void TakeSnapshot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_TAKESNAPSHOT_OFFSET))();
		}

		static ::System::Void CompareSnapshot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_COMPARESNAPSHOT_OFFSET))();
		}

		static ::System::Void LodAddedFile(::System::String* logDir, ::System::String* key, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* dict, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* tmp)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LODADDEDFILE_OFFSET))(logDir, key, dict, tmp);
		}

		static ::System::String* GetLogDir()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_GETLOGDIR_OFFSET))();
		}

		static ::System::Void SaveFile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_SAVEFILE_OFFSET))();
		}

		static ::System::Void SaveInfoToFile(::System::String* text, ::System::String* fileName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_SAVEINFOTOFILE_OFFSET))(text, fileName);
		}

		static ::System::Void SaveLogToFile(::System::String* logDir, ::System::String* key, ::System::Collections::Generic::List_1<::System::Object*>* collection)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_SAVELOGTOFILE_OFFSET))(logDir, key, collection);
		}

		static ::System::Void SaveLogToFile_1(::System::String* logDir, ::System::String* key, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* collection)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_SAVELOGTOFILE_1_OFFSET))(logDir, key, collection);
		}

		static ::System::Void Log(::System::IO::StreamWriter* file, ::Foundation::AssetLog_LogItem* logItem)
		{
			return ((::System::Void(*)(::System::IO::StreamWriter*, ::Foundation::AssetLog_LogItem*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LOG_OFFSET))(file, logItem);
		}

		static ::System::String* GetCallStack()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_GETCALLSTACK_OFFSET))();
		}

		static ::Foundation::AssetLog_LogItem* AppendLog(::System::String* typeInfo, ::System::String* path)
		{
			return ((::Foundation::AssetLog_LogItem*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_APPENDLOG_OFFSET))(typeInfo, path);
		}

		static ::System::Void LoadScene(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LOADSCENE_OFFSET))(path);
		}

		static ::System::Void UnloadScene(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_UNLOADSCENE_OFFSET))(path);
		}

		static ::System::Void ForceUnloadScene(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_FORCEUNLOADSCENE_OFFSET))(path);
		}

		static ::System::Void LoadAsset(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LOADASSET_OFFSET))(path);
		}

		static ::System::Void InstantiatePoolAsset(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_INSTANTIATEPOOLASSET_OFFSET))(path);
		}

		static ::System::Void DestroyPoolAsset(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_DESTROYPOOLASSET_OFFSET))(path);
		}

		static ::System::Void UnloadAsset(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_UNLOADASSET_OFFSET))(path);
		}

		static ::System::Void LoadBundle(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LOADBUNDLE_OFFSET))(path);
		}

		static ::System::Void UnloadBundle(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_UNLOADBUNDLE_OFFSET))(path);
		}

		static ::System::Void LoadVideo(::System::String* path, ::System::String* quality)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOG_LOADVIDEO_OFFSET))(path, quality);
		}
	};
}
