#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKNMDKNGDNH.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;
namespace UnityEngine { class Collider; }

#define OBIHLELOFCO_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBD40990)
#define OBIHLELOFCO_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xBD42C40)
#define OBIHLELOFCO_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBD40840)
#define OBIHLELOFCO_CTOR_OFFSET UNITYSDK_OFFSET(0xBD42C90)
#define OBIHLELOFCO_DADDOKKLIKA_OFFSET UNITYSDK_OFFSET(0xBD415B0)
#define OBIHLELOFCO_DAJODNPGOPK_OFFSET UNITYSDK_OFFSET(0xBD42920)
#define OBIHLELOFCO_GGCCNDAIMDF_OFFSET UNITYSDK_OFFSET(0xBD40B90)
#define OBIHLELOFCO_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBD40B00)
#define OBIHLELOFCO_IIMEKKCAHMJ_OFFSET UNITYSDK_OFFSET(0xBD42250)
#define OBIHLELOFCO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBD406A0)
#define OBIHLELOFCO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD42B60)

inline static constexpr unsigned int OBIHLELOFCO_TypeDefinitionIndex = 77053;

	class OBIHLELOFCO : public ::PKNMDKNGDNH
	{
	public:
		::Il2CppArray<::UnityEngine::Collider*>* LOBGBIGJEEM; // 0x48
		::System::Single KHNNILONNGB; // 0x50
		::System::Single KGKCODMENJP; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIHLELOFCO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + OBIHLELOFCO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + OBIHLELOFCO_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + OBIHLELOFCO_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBIHLELOFCO_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBIHLELOFCO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void DAJODNPGOPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIHLELOFCO_DAJODNPGOPK_OFFSET))(this);
		}

		::System::Void GGCCNDAIMDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIHLELOFCO_GGCCNDAIMDF_OFFSET))(this);
		}

		::System::Void DADDOKKLIKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIHLELOFCO_DADDOKKLIKA_OFFSET))(this);
		}

		::System::Void IIMEKKCAHMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIHLELOFCO_IIMEKKCAHMJ_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIHLELOFCO_BPMGPFLHPLC_OFFSET))(this);
		}

	};
