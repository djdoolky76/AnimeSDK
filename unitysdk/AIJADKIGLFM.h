#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FontAssetConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine { class Material; }

#define AIJADKIGLFM_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xEBAD370)
#define AIJADKIGLFM_AKKJNAGLOCB_OFFSET UNITYSDK_OFFSET(0xEBACB20)
#define AIJADKIGLFM_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0xEBAD1E0)
#define AIJADKIGLFM_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBAD780)
#define AIJADKIGLFM_CHLOLNMMOEL_OFFSET UNITYSDK_OFFSET(0xEBAC860)
#define AIJADKIGLFM_GBIGAIDNPDM_OFFSET UNITYSDK_OFFSET(0xEBACD70)
#define AIJADKIGLFM_MKGNPNPJNNJ_OFFSET UNITYSDK_OFFSET(0xEBACF20)
#define AIJADKIGLFM_NLGPNKOMKGA_OFFSET UNITYSDK_OFFSET(0xEBACFC0)
#define AIJADKIGLFM_POHJFDLMOMM_OFFSET UNITYSDK_OFFSET(0xEBAD5A0)

inline static constexpr unsigned int AIJADKIGLFM_TypeDefinitionIndex = 72527;

	class AIJADKIGLFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::TMPro::TMP_FontAsset*, ::System::Int32>** StaticGet_PMEMCMCAOPC()
		{
			return (::System::Collections::Generic::Dictionary_2<::TMPro::TMP_FontAsset*, ::System::Int32>**)UnitySDK::FromName("", "AIJADKIGLFM")->GetStaticField(0x58910);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::FontAssetConfig*, ::TMPro::TMP_FontAsset*>** StaticGet_MMHNLDCEDNO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::FontAssetConfig*, ::TMPro::TMP_FontAsset*>**)UnitySDK::FromName("", "AIJADKIGLFM")->GetStaticField(0x58918);
		}

		static ::System::Boolean* StaticGet_JLPIKFOJPBJ()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AIJADKIGLFM")->GetStaticField(0x13860);
		}

		static ::System::Boolean* StaticGet_ECFACLNOKFG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AIJADKIGLFM")->GetStaticField(0x13861);
		}

		// static const ::System::String* NFNCFMABGCC; // 0x0
		// static const ::System::String* IINJBIGPJDL; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIJADKIGLFM_CCTOR_OFFSET))();
		}

		static ::System::Void CHLOLNMMOEL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIJADKIGLFM_CHLOLNMMOEL_OFFSET))();
		}

		static ::TMPro::TMP_FontAsset* AKKJNAGLOCB(::RPG::Client::FontAssetConfig* a1)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::RPG::Client::FontAssetConfig*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_AKKJNAGLOCB_OFFSET))(a1);
		}

		static ::System::Void MKGNPNPJNNJ(::TMPro::TMP_FontAsset* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*, ::System::String*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_MKGNPNPJNNJ_OFFSET))(a1, a2);
		}

		static ::System::Void BGOMKDMBLKK(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_BGOMKDMBLKK_OFFSET))(a1);
		}

		static ::System::Void ABKBOGIGAEH(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_ABKBOGIGAEH_OFFSET))(a1);
		}

		static ::System::Void POHJFDLMOMM(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_POHJFDLMOMM_OFFSET))(a1);
		}

		static ::System::Void GBIGAIDNPDM(::TMPro::TMP_FontAsset* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_GBIGAIDNPDM_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::UInt32>* NLGPNKOMKGA(::System::String* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_NLGPNKOMKGA_OFFSET))(a1);
		}

	};
