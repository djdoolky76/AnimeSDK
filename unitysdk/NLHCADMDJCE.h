#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLHCADMDJCE_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0xBC6BCA0)
#define NLHCADMDJCE_ALPLJIKFHNG_OFFSET UNITYSDK_OFFSET(0xBC6CE60)
#define NLHCADMDJCE_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC6EA30)
#define NLHCADMDJCE_CLMNCCIFCKO_OFFSET UNITYSDK_OFFSET(0xBC6CBD0)
#define NLHCADMDJCE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6E9F0)
#define NLHCADMDJCE_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xBC6BC50)
#define NLHCADMDJCE_DGOJLNIMBAJ_OFFSET UNITYSDK_OFFSET(0xBC6E2B0)
#define NLHCADMDJCE_FBHFHGNIADO_OFFSET UNITYSDK_OFFSET(0xBC6E8B0)
#define NLHCADMDJCE_FDOANDJINAP_OFFSET UNITYSDK_OFFSET(0xBC6D150)
#define NLHCADMDJCE_FJDHOILAIPD_OFFSET UNITYSDK_OFFSET(0xBC6CA20)
#define NLHCADMDJCE_FMFOIPIOLGA_OFFSET UNITYSDK_OFFSET(0xBC6D100)
#define NLHCADMDJCE_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0xBC6C220)
#define NLHCADMDJCE_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xBC6BEE0)
#define NLHCADMDJCE_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0xBC6C9D0)
#define NLHCADMDJCE_IABALBFLNLK_OFFSET UNITYSDK_OFFSET(0xBC6C7F0)
#define NLHCADMDJCE_IAKOJHAHFEF_OFFSET UNITYSDK_OFFSET(0xBC6C4D0)
#define NLHCADMDJCE_JDLOFFAPPEI_OFFSET UNITYSDK_OFFSET(0xBC6E770)
#define NLHCADMDJCE_JPNDHOGIDAK_OFFSET UNITYSDK_OFFSET(0xBC6D1A0)
#define NLHCADMDJCE_LDEPDNGMAJP_OFFSET UNITYSDK_OFFSET(0xBC6CEC0)
#define NLHCADMDJCE_MAADHCNDNKD_OFFSET UNITYSDK_OFFSET(0xBC6DF00)
#define NLHCADMDJCE_MNMJLGNFIJE_OFFSET UNITYSDK_OFFSET(0xBC6D210)
#define NLHCADMDJCE_NONMPLMPIIP_OFFSET UNITYSDK_OFFSET(0xBC6E260)
#define NLHCADMDJCE_OAECLAGHPEH_OFFSET UNITYSDK_OFFSET(0xBC6DD70)
#define NLHCADMDJCE_PFOJGFJCJFA_OFFSET UNITYSDK_OFFSET(0xBC6E4E0)
#define NLHCADMDJCE_PMCCDJDILCI_OFFSET UNITYSDK_OFFSET(0xBC6CAC0)

inline static constexpr unsigned int NLHCADMDJCE_TypeDefinitionIndex = 59722;

	class NLHCADMDJCE : public ::LJKHPOHKIIF
	{
	public:
		::RPG::GameCore::GameEntity* IEBGADKLMGE; // 0x20
		::RPG::GameCore::GameEntity* DLJDHBEBELG; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* CCMIEEEPJMD; // 0x30
		::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* OPCBNEKJFDG; // 0x38
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x40
		::System::Boolean HHKBAICBONF; // 0x48
		::System::Boolean LJFMCLGOHPK; // 0x49
		::System::Boolean ECBLGEHOANJ; // 0x4A
		static ::System::Single* StaticGet_PDBCNLMIGIG()
		{
			return (::System::Single*)UnitySDK::FromName("", "NLHCADMDJCE")->GetStaticField(0x11910);
		}

		static ::System::Single* StaticGet_ANFMFBDEIAO()
		{
			return (::System::Single*)UnitySDK::FromName("", "NLHCADMDJCE")->GetStaticField(0x11914);
		}

		static ::System::Boolean* StaticGet_AGJJDFLICLH()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NLHCADMDJCE")->GetStaticField(0x11918);
		}

		static ::System::Single* StaticGet_KHJOHLDIHOD()
		{
			return (::System::Single*)UnitySDK::FromName("", "NLHCADMDJCE")->GetStaticField(0x1191C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLHCADMDJCE_CCTOR_OFFSET))();
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void IAKOJHAHFEF(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLHCADMDJCE_IAKOJHAHFEF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PMCCDJDILCI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_PMCCDJDILCI_OFFSET))(this, a1);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void CLMNCCIFCKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_CLMNCCIFCKO_OFFSET))(this);
		}

		::System::Void ALPLJIKFHNG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_ALPLJIKFHNG_OFFSET))(this, a1);
		}

		::System::Void FMFOIPIOLGA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_FMFOIPIOLGA_OFFSET))(this, a1);
		}

		::System::Void FDOANDJINAP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_FDOANDJINAP_OFFSET))(this, a1);
		}

		::System::Void FJDHOILAIPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_FJDHOILAIPD_OFFSET))(this);
		}

		::System::Collections::IEnumerator* JPNDHOGIDAK()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_JPNDHOGIDAK_OFFSET))(this);
		}

		::System::Void MNMJLGNFIJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_MNMJLGNFIJE_OFFSET))(this);
		}

		::System::Void LDEPDNGMAJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_LDEPDNGMAJP_OFFSET))(this);
		}

		::System::Void IABALBFLNLK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_IABALBFLNLK_OFFSET))(this, a1);
		}

		::System::Void OAECLAGHPEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_OAECLAGHPEH_OFFSET))(this);
		}

		::System::Void MAADHCNDNKD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_MAADHCNDNKD_OFFSET))(this, a1);
		}

		::System::Void NONMPLMPIIP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_NONMPLMPIIP_OFFSET))(this, a1);
		}

		::System::Void DGOJLNIMBAJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_DGOJLNIMBAJ_OFFSET))(this, a1);
		}

		::System::Void PFOJGFJCJFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_PFOJGFJCJFA_OFFSET))(this, a1);
		}

		::System::Void JDLOFFAPPEI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_JDLOFFAPPEI_OFFSET))(this, a1);
		}

		::System::Void FBHFHGNIADO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_FBHFHGNIADO_OFFSET))(this, a1);
		}

	};
