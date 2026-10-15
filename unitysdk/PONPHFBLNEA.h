#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/RPG/GameCore/SpecialVisionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SpecialVisionConfig; }
namespace System { class String; }

#define PONPHFBLNEA_AIMKGPGKMLL_OFFSET UNITYSDK_OFFSET(0xC372370)
#define PONPHFBLNEA_CAGCHKJHMPD_OFFSET UNITYSDK_OFFSET(0xC372280)
#define PONPHFBLNEA_CTOR_OFFSET UNITYSDK_OFFSET(0xC3742F0)
#define PONPHFBLNEA_EMDGFDONNOA_OFFSET UNITYSDK_OFFSET(0xC372DC0)
#define PONPHFBLNEA_FFIMALEOMON_OFFSET UNITYSDK_OFFSET(0xC373B60)
#define PONPHFBLNEA_FICIPDCOPJD_OFFSET UNITYSDK_OFFSET(0xC373600)
#define PONPHFBLNEA_FNOIFEOMICD_OFFSET UNITYSDK_OFFSET(0xC3738F0)
#define PONPHFBLNEA_GHEKJHDHJAI_OFFSET UNITYSDK_OFFSET(0xC3723E0)
#define PONPHFBLNEA_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xC372D10)
#define PONPHFBLNEA_GMHEIAJPJDP_OFFSET UNITYSDK_OFFSET(0xC372BA0)
#define PONPHFBLNEA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC374120)
#define PONPHFBLNEA_JFPNMIKHICM_OFFSET UNITYSDK_OFFSET(0xC373270)
#define PONPHFBLNEA_KGPHHBJFPPP_OFFSET UNITYSDK_OFFSET(0xC373EF0)
#define PONPHFBLNEA_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xC3716A0)
#define PONPHFBLNEA_NLAOMKHAOJG_OFFSET UNITYSDK_OFFSET(0xC373150)
#define PONPHFBLNEA_OFMJKNEIGHF_OFFSET UNITYSDK_OFFSET(0xC3722C0)
#define PONPHFBLNEA_OOEIJOOGBDC_OFFSET UNITYSDK_OFFSET(0xC372C20)
#define PONPHFBLNEA_PCBHFNLBPDH_OFFSET UNITYSDK_OFFSET(0xC371720)
#define PONPHFBLNEA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC371F10)
#define PONPHFBLNEA___LOADNEWSPECIALVISIONEFFECT_B__7_0_OFFSET UNITYSDK_OFFSET(0xC374370)

inline static constexpr unsigned int PONPHFBLNEA_TypeDefinitionIndex = 60949;

	class PONPHFBLNEA : public ::System::Object
	{
	public:
		::System::String* BCGLJEMFDNH; // 0x10
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x18
		::EAPGFKLGCDH NFPPGEKLENM; // 0x20
		::EAPGFKLGCDH ONODNENPMNH; // 0x30
		::System::String* MNDJFCFHPKF; // 0x40
		::System::String* KMBINKJKEAG; // 0x48
		::RPG::GameCore::GameEntity* OFJOOHGNLFK; // 0x50
		::System::Int32 LBACAJMNOBH; // 0x58
		::RPG::GameCore::SpecialVisionType GCHAHMOLNDA; // 0x5C
		::System::Int32 CJKGFKMAHGE; // 0x60
		::System::Int32 LLLGCPINNHL; // 0x64
		::System::Boolean FMNEEONAMNO; // 0x68
		::System::Boolean HKJMCJJLLKN; // 0x69
		::System::Byte _padding0[0x2];
		::System::Int32 NNONPFALDGK; // 0x6C
		static ::RPG::GameCore::SpecialVisionConfig** StaticGet_AHPICCBBFFC()
		{
			return (::RPG::GameCore::SpecialVisionConfig**)UnitySDK::FromName("", "PONPHFBLNEA")->GetStaticField(0xB340);
		}

		// static const ::System::String* IFJPLEAMAFI; // 0x0
		// static const ::System::String* MDDLIHGFIKP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPHFBLNEA_CTOR_OFFSET))(this);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PONPHFBLNEA_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Boolean CAGCHKJHMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPHFBLNEA_CAGCHKJHMPD_OFFSET))(this);
		}

		::System::Void OFMJKNEIGHF(::RPG::GameCore::SpecialVisionType a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::GameEntity* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialVisionType, ::System::String*, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + PONPHFBLNEA_OFMJKNEIGHF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AIMKGPGKMLL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PONPHFBLNEA_AIMKGPGKMLL_OFFSET))(this, a1);
		}

		::System::Void PCBHFNLBPDH(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PONPHFBLNEA_PCBHFNLBPDH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonoEffect* GHIFMGPKFPF(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + PONPHFBLNEA_GHIFMGPKFPF_OFFSET))(this, a1);
		}

		::EAPGFKLGCDH GHEKJHDHJAI()
		{
			return ((::EAPGFKLGCDH(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPHFBLNEA_GHEKJHDHJAI_OFFSET))(this);
		}

		::System::Void FICIPDCOPJD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PONPHFBLNEA_FICIPDCOPJD_OFFSET))(this, a1);
		}

		::System::Boolean GMHEIAJPJDP(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PONPHFBLNEA_GMHEIAJPJDP_OFFSET))(this, a1);
		}

		::System::String* FNOIFEOMICD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPHFBLNEA_FNOIFEOMICD_OFFSET))(this);
		}

		::System::String* EMDGFDONNOA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPHFBLNEA_EMDGFDONNOA_OFFSET))(this);
		}

		::System::String* JFPNMIKHICM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPHFBLNEA_JFPNMIKHICM_OFFSET))(this);
		}

		::System::String* FFIMALEOMON()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPHFBLNEA_FFIMALEOMON_OFFSET))(this);
		}

		::System::Void KGPHHBJFPPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPHFBLNEA_KGPHHBJFPPP_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPHFBLNEA_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONPHFBLNEA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void NLAOMKHAOJG(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PONPHFBLNEA_NLAOMKHAOJG_OFFSET))(this, a1, a2);
		}

		static ::RPG::GameCore::SpecialVisionConfig* OOEIJOOGBDC()
		{
			return ((::RPG::GameCore::SpecialVisionConfig*(*)())((::PBYTE)hIl2Cpp + PONPHFBLNEA_OOEIJOOGBDC_OFFSET))();
		}

		::System::Void __LoadNewSpecialVisionEffect_b__7_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + PONPHFBLNEA___LOADNEWSPECIALVISIONEFFECT_B__7_0_OFFSET))(this, a1, a2);
		}

	};
