#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJCHNLINLMK;
class OPKFBCJBJLH;
class PNDFLJFPBBE;
namespace RPG::Client { class OnSceneOperationDelegate; }
namespace System { class String; }

#define RPG_CLIENT_ASSETLOADER_CANCELAYSCLOADSCENE_OFFSET UNITYSDK_OFFSET(0xC697250)
#define RPG_CLIENT_ASSETLOADER_CHECKASSETIFINSTARTSUBPAK_OFFSET UNITYSDK_OFFSET(0xC697330)
#define RPG_CLIENT_ASSETLOADER_CHECKDESIGNDATAIFINSTARTSUBPAK_OFFSET UNITYSDK_OFFSET(0xC696480)
#define RPG_CLIENT_ASSETLOADER_CHECKIFASSETNULLPATH_OFFSET UNITYSDK_OFFSET(0xC697370)
#define RPG_CLIENT_ASSETLOADER_CHECKMULTIINSTANCE_OFFSET UNITYSDK_OFFSET(0xC696860)
#define RPG_CLIENT_ASSETLOADER_EXISTLUA_OFFSET UNITYSDK_OFFSET(0xC696D10)
#define RPG_CLIENT_ASSETLOADER_EXISTSDESIGNDATA_OFFSET UNITYSDK_OFFSET(0xC696C70)
#define RPG_CLIENT_ASSETLOADER_EXISTS_OFFSET UNITYSDK_OFFSET(0xC696BA0)
#define RPG_CLIENT_ASSETLOADER_GETASSETLOADINGINFO_OFFSET UNITYSDK_OFFSET(0xC697550)
#define RPG_CLIENT_ASSETLOADER_GETASSETOBJECTLOADSTATISTICALSUMMARYV1_OFFSET UNITYSDK_OFFSET(0xC697460)
#define RPG_CLIENT_ASSETLOADER_GET_S_CONFIGFILEROOT_OFFSET UNITYSDK_OFFSET(0xC696ED0)
#define RPG_CLIENT_ASSETLOADER_LOADBINARYFROMFILE_OFFSET UNITYSDK_OFFSET(0xC6964C0)
#define RPG_CLIENT_ASSETLOADER_LOADLUABINARYFROMFILE_OFFSET UNITYSDK_OFFSET(0xC696340)
#define RPG_CLIENT_ASSETLOADER_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0xC696FF0)
#define RPG_CLIENT_ASSETLOADER_LOADSCENE_OFFSET UNITYSDK_OFFSET(0xC696F50)
#define RPG_CLIENT_ASSETLOADER_LOADTEXTFROMFILE_OFFSET UNITYSDK_OFFSET(0xC696650)
#define RPG_CLIENT_ASSETLOADER_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0xC6970E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssetLoader_TypeDefinitionIndex = 59430;

	class AssetLoader : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_USE_ASYNC_INSTANTIATE()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "AssetLoader")->GetStaticField(0xEBC0);
		}

		static ::Il2CppArray<::System::Byte>* LoadLuaBinaryFromFile(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_LOADLUABINARYFROMFILE_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* LoadBinaryFromFile(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_LOADBINARYFROMFILE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* LoadTextFromFile(::System::String* a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_LOADTEXTFROMFILE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CheckMultiInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_CHECKMULTIINSTANCE_OFFSET))();
		}

		static ::System::Boolean Exists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_EXISTS_OFFSET))(a1);
		}

		static ::System::Boolean ExistsDesignData(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_EXISTSDESIGNDATA_OFFSET))(a1);
		}

		static ::System::Boolean ExistLua(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_EXISTLUA_OFFSET))(a1);
		}

		static ::System::String* get_s_ConfigFileRoot()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_GET_S_CONFIGFILEROOT_OFFSET))();
		}

		static ::NJCHNLINLMK* LoadScene(::System::String* a1, ::System::Boolean a2)
		{
			return ((::NJCHNLINLMK*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_LOADSCENE_OFFSET))(a1, a2);
		}

		static ::NJCHNLINLMK* LoadSceneAsync(::System::String* a1, ::RPG::Client::OnSceneOperationDelegate* a2, ::RPG::Client::OnSceneOperationDelegate* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Single a6)
		{
			return ((::NJCHNLINLMK*(*)(::System::String*, ::RPG::Client::OnSceneOperationDelegate*, ::RPG::Client::OnSceneOperationDelegate*, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_LOADSCENEASYNC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void UnLoadScene(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_UNLOADSCENE_OFFSET))(a1, a2);
		}

		static ::System::Void CancelAyscLoadScene(::NJCHNLINLMK* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::NJCHNLINLMK*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_CANCELAYSCLOADSCENE_OFFSET))(a1, a2);
		}

		static ::System::Void CheckAssetIfInStartSubPak(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_CHECKASSETIFINSTARTSUBPAK_OFFSET))(a1);
		}

		static ::System::Void CheckDesignDataIfInStartSubPak(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_CHECKDESIGNDATAIFINSTARTSUBPAK_OFFSET))(a1);
		}

		static ::System::Void CheckIfAssetNullPath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_CHECKIFASSETNULLPATH_OFFSET))(a1);
		}

		static ::PNDFLJFPBBE* GetAssetObjectLoadStatisticalSummaryV1()
		{
			return ((::PNDFLJFPBBE*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_GETASSETOBJECTLOADSTATISTICALSUMMARYV1_OFFSET))();
		}

		static ::OPKFBCJBJLH* GetAssetLoadingInfo(::System::String* a1)
		{
			return ((::OPKFBCJBJLH*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETLOADER_GETASSETLOADINGINFO_OFFSET))(a1);
		}

	};
}
