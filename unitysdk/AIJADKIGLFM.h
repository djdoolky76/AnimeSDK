#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class FontAssetConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace TMPro { class TMP_FontAsset; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Material; }

#define AIJADKIGLFM_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x19D21580)
#define AIJADKIGLFM_AGICDAAMNLA_OFFSET UNITYSDK_OFFSET(0x19D20D70)
#define AIJADKIGLFM_AKKJNAGLOCB_1_OFFSET UNITYSDK_OFFSET(0x19D20070)
#define AIJADKIGLFM_AKKJNAGLOCB_OFFSET UNITYSDK_OFFSET(0x19D1FFA0)
#define AIJADKIGLFM_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0x19D21160)
#define AIJADKIGLFM_BOJMICJOPED_OFFSET UNITYSDK_OFFSET(0x19D217A0)
#define AIJADKIGLFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x19D22190)
#define AIJADKIGLFM_CHLOLNMMOEL_OFFSET UNITYSDK_OFFSET(0x19D1FCE0)
#define AIJADKIGLFM_GBIGAIDNPDM_OFFSET UNITYSDK_OFFSET(0x19D202E0)
#define AIJADKIGLFM_ICHMPCOCBHK_OFFSET UNITYSDK_OFFSET(0x19D207B0)
#define AIJADKIGLFM_JFILHKLKEJP_OFFSET UNITYSDK_OFFSET(0x19D21B70)
#define AIJADKIGLFM_JMMCOIFDCGA_OFFSET UNITYSDK_OFFSET(0x19D212F0)
#define AIJADKIGLFM_KHABCFBKOLI_OFFSET UNITYSDK_OFFSET(0x19D20FD0)
#define AIJADKIGLFM_LIGOINPBPLC_OFFSET UNITYSDK_OFFSET(0x19D22070)
#define AIJADKIGLFM_LNIAFJHIEDB_OFFSET UNITYSDK_OFFSET(0x19D209C0)
#define AIJADKIGLFM_MKGNPNPJNNJ_OFFSET UNITYSDK_OFFSET(0x19D204C0)
#define AIJADKIGLFM_NLGPNKOMKGA_OFFSET UNITYSDK_OFFSET(0x19D20590)
#define AIJADKIGLFM_OHHICNGNPCN_OFFSET UNITYSDK_OFFSET(0x19D21C70)
#define AIJADKIGLFM_POHJFDLMOMM_OFFSET UNITYSDK_OFFSET(0x19D21960)

inline static constexpr unsigned int AIJADKIGLFM_TypeDefinitionIndex = 74605;

	class AIJADKIGLFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Font*>** StaticGet_ACFNBIIHKIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Font*>**)UnitySDK::FromName("", "AIJADKIGLFM")->GetStaticField(0x58430);
		}

		static ::System::Collections::Generic::Dictionary_2<::TMPro::TMP_FontAsset*, ::System::Int32>** StaticGet_PMEMCMCAOPC()
		{
			return (::System::Collections::Generic::Dictionary_2<::TMPro::TMP_FontAsset*, ::System::Int32>**)UnitySDK::FromName("", "AIJADKIGLFM")->GetStaticField(0x58438);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MPIEKAPCOPN()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AIJADKIGLFM")->GetStaticField(0x58440);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::FontAssetConfig*, ::UnityEngine::Font*>, ::TMPro::TMP_FontAsset*>** StaticGet_MMHNLDCEDNO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::FontAssetConfig*, ::UnityEngine::Font*>, ::TMPro::TMP_FontAsset*>**)UnitySDK::FromName("", "AIJADKIGLFM")->GetStaticField(0x58448);
		}

		static ::System::Boolean* StaticGet_ECFACLNOKFG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AIJADKIGLFM")->GetStaticField(0x12C20);
		}

		static ::System::Boolean* StaticGet_JLPIKFOJPBJ()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AIJADKIGLFM")->GetStaticField(0x12C21);
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

		static ::TMPro::TMP_FontAsset* AKKJNAGLOCB_1(::RPG::Client::FontAssetConfig* a1, ::UnityEngine::Font* a2)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::RPG::Client::FontAssetConfig*, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_AKKJNAGLOCB_1_OFFSET))(a1, a2);
		}

		static ::System::Void MKGNPNPJNNJ(::RPG::Client::FontAssetConfig* a1, ::TMPro::TMP_FontAsset* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::Client::FontAssetConfig*, ::TMPro::TMP_FontAsset*, ::System::String*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_MKGNPNPJNNJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ICHMPCOCBHK(::TMPro::TMP_FontAsset* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::TMPro::TMP_FontAsset*, ::Il2CppArray<::System::UInt32>*, ::System::Object*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_ICHMPCOCBHK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LNIAFJHIEDB(::RPG::Client::FontAssetConfig* a1, ::TMPro::TMP_FontAsset* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::RPG::Client::FontAssetConfig*, ::TMPro::TMP_FontAsset*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_LNIAFJHIEDB_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean KHABCFBKOLI(::TMPro::TMP_FontAsset* a1, ::TMPro::TMP_FontAsset* a2)
		{
			return ((::System::Boolean(*)(::TMPro::TMP_FontAsset*, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_KHABCFBKOLI_OFFSET))(a1, a2);
		}

		static ::System::Boolean JMMCOIFDCGA(::TMPro::TMP_FontAsset* a1, ::TMPro::TMP_FontAsset* a2, ::System::Collections::Generic::HashSet_1<::TMPro::TMP_FontAsset*>* a3)
		{
			return ((::System::Boolean(*)(::TMPro::TMP_FontAsset*, ::TMPro::TMP_FontAsset*, ::System::Collections::Generic::HashSet_1<::TMPro::TMP_FontAsset*>*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_JMMCOIFDCGA_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Font* AGICDAAMNLA(::System::String* a1)
		{
			return ((::UnityEngine::Font*(*)(::System::String*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_AGICDAAMNLA_OFFSET))(a1);
		}

		static ::System::Void BGOMKDMBLKK(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_BGOMKDMBLKK_OFFSET))(a1);
		}

		static ::System::Void ABKBOGIGAEH(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_ABKBOGIGAEH_OFFSET))(a1);
		}

		static ::System::Void BOJMICJOPED(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_BOJMICJOPED_OFFSET))(a1);
		}

		static ::System::Void JFILHKLKEJP(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_JFILHKLKEJP_OFFSET))(a1);
		}

		static ::System::Void OHHICNGNPCN(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Font*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_OHHICNGNPCN_OFFSET))(a1);
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

		static ::System::String* LIGOINPBPLC(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + AIJADKIGLFM_LIGOINPBPLC_OFFSET))(a1);
		}

	};
