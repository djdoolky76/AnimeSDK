#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingGameBoy/ChenLingGameBoyChallengeState.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/RPG/GameCore/FiveDimMiniGameCoinType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class PEEDLCHFAFL;
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyChallengePackData; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class MiniGameCollectCoin_CurveConfig; }
namespace System { class String; }

#define GCCFIOKEPEG_ACIJPAMCICI_OFFSET UNITYSDK_OFFSET(0x15964090)
#define GCCFIOKEPEG_AJGNOKPIHBK_OFFSET UNITYSDK_OFFSET(0x15961590)
#define GCCFIOKEPEG_BFIONBIKLHE_OFFSET UNITYSDK_OFFSET(0x15961B20)
#define GCCFIOKEPEG_BINFGLIOIPF_OFFSET UNITYSDK_OFFSET(0x159648B0)
#define GCCFIOKEPEG_CCPGBPCNHGC_OFFSET UNITYSDK_OFFSET(0x15964500)
#define GCCFIOKEPEG_CMIEIMBFIBL_OFFSET UNITYSDK_OFFSET(0x15962B70)
#define GCCFIOKEPEG_CTOR_OFFSET UNITYSDK_OFFSET(0x15960FA0)
#define GCCFIOKEPEG_DIGALPPABLI_OFFSET UNITYSDK_OFFSET(0x15964170)
#define GCCFIOKEPEG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15960FB0)
#define GCCFIOKEPEG_EMOPDKIFAMA_OFFSET UNITYSDK_OFFSET(0x15965940)
#define GCCFIOKEPEG_EONHNAIIKFF_OFFSET UNITYSDK_OFFSET(0x159654C0)
#define GCCFIOKEPEG_FCHKLLBJOOF_OFFSET UNITYSDK_OFFSET(0x15964220)
#define GCCFIOKEPEG_FIOPKKIEGAI_OFFSET UNITYSDK_OFFSET(0x15965B40)
#define GCCFIOKEPEG_FONNNBBBBOE_OFFSET UNITYSDK_OFFSET(0x15963AA0)
#define GCCFIOKEPEG_ICPEKDFGGBM_OFFSET UNITYSDK_OFFSET(0x159635C0)
#define GCCFIOKEPEG_JCJOIOBEEMK_OFFSET UNITYSDK_OFFSET(0x15961000)
#define GCCFIOKEPEG_LBLPDPFDONA_OFFSET UNITYSDK_OFFSET(0x15961340)
#define GCCFIOKEPEG_MBFLGMBJJNB_OFFSET UNITYSDK_OFFSET(0x15961280)
#define GCCFIOKEPEG_MGNAGPFMJPA_OFFSET UNITYSDK_OFFSET(0x159647A0)
#define GCCFIOKEPEG_MJKJFFODAMA_OFFSET UNITYSDK_OFFSET(0x15964650)
#define GCCFIOKEPEG_NDHHCBJBLHM_OFFSET UNITYSDK_OFFSET(0x159619D0)
#define GCCFIOKEPEG_NGMLLLBAIEO_OFFSET UNITYSDK_OFFSET(0x159616E0)
#define GCCFIOKEPEG_ODCHIHDGIPJ_OFFSET UNITYSDK_OFFSET(0x15962210)
#define GCCFIOKEPEG_ODLIGANNMOO_OFFSET UNITYSDK_OFFSET(0x15962AF0)

inline static constexpr unsigned int GCCFIOKEPEG_TypeDefinitionIndex = 76887;

	class GCCFIOKEPEG : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::EFODGECFLLC* EEFMDEHLLFI; // 0x18
		// static const ::System::String* CPKKDEOABPF; // 0x0
		::System::Void _ctor(::EFODGECFLLC* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFODGECFLLC*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_DISPOSE_OFFSET))(this);
		}

		::System::Void JCJOIOBEEMK(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_JCJOIOBEEMK_OFFSET))(this, a1, a2);
		}

		::System::Void LBLPDPFDONA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_LBLPDPFDONA_OFFSET))(this);
		}

		::System::Void NGMLLLBAIEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_NGMLLLBAIEO_OFFSET))(this);
		}

		::System::Void NDHHCBJBLHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_NDHHCBJBLHM_OFFSET))(this);
		}

		::System::Void AJGNOKPIHBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_AJGNOKPIHBK_OFFSET))(this);
		}

		::System::Boolean MBFLGMBJJNB(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_MBFLGMBJJNB_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState BFIONBIKLHE(::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeState(*)(::PVOID, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_BFIONBIKLHE_OFFSET))(this, a1, a2, a3);
		}

		::HIOEAKHGILF* ODCHIHDGIPJ(::RPG::GameCore::MiniGameCollectCoin_CurveConfig* a1, ::System::Single a2)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::MiniGameCollectCoin_CurveConfig*, ::System::Single))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_ODCHIHDGIPJ_OFFSET))(this, a1, a2);
		}

		::System::Void ODLIGANNMOO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_ODLIGANNMOO_OFFSET))(this, a1);
		}

		::System::Void CMIEIMBFIBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_CMIEIMBFIBL_OFFSET))(this);
		}

		::HIOEAKHGILF* ICPEKDFGGBM(::System::String* a1, ::HIOEAKHGILF* a2, ::RPG::GameCore::HoyoTagContainer* a3)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::System::String*, ::HIOEAKHGILF*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_ICPEKDFGGBM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FONNNBBBBOE(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::RPG::GameCore::HoyoTagContainer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_FONNNBBBBOE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACIJPAMCICI(::System::Int32 a1, ::RPG::GameCore::FiveDimMiniGameCoinType a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FiveDimMiniGameCoinType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_ACIJPAMCICI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DIGALPPABLI(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_DIGALPPABLI_OFFSET))(this, a1, a2);
		}

		::System::Void FCHKLLBJOOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_FCHKLLBJOOF_OFFSET))(this, a1);
		}

		::System::Void CCPGBPCNHGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_CCPGBPCNHGC_OFFSET))(this);
		}

		::System::Void MJKJFFODAMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_MJKJFFODAMA_OFFSET))(this);
		}

		::System::Void MGNAGPFMJPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_MGNAGPFMJPA_OFFSET))(this);
		}

		::System::Void BINFGLIOIPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_BINFGLIOIPF_OFFSET))(this);
		}

		::System::Void EONHNAIIKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_EONHNAIIKFF_OFFSET))(this);
		}

		::System::Void EMOPDKIFAMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_EMOPDKIFAMA_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimGameplayMode FIOPKKIEGAI()
		{
			return ((::RPG::GameCore::FiveDimGameplayMode(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCFIOKEPEG_FIOPKKIEGAI_OFFSET))(this);
		}

	};
