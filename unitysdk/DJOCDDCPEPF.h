#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationEchoPointUIType.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DJOCDDCPEPF;
namespace RPG::Client { class BattleAvatarNihiluxCustomUIData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define DJOCDDCPEPF_AIDNOFPCHLH_OFFSET UNITYSDK_OFFSET(0x18C02720)
#define DJOCDDCPEPF_AIJLDADIBNM_OFFSET UNITYSDK_OFFSET(0x18C02450)
#define DJOCDDCPEPF_BLDNIBLKADJ_OFFSET UNITYSDK_OFFSET(0x18C02290)
#define DJOCDDCPEPF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x18C02020)
#define DJOCDDCPEPF_CACBOKCKKDN_OFFSET UNITYSDK_OFFSET(0x18C025B0)
#define DJOCDDCPEPF_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0x18C02110)
#define DJOCDDCPEPF_CENMBJDMIEE_OFFSET UNITYSDK_OFFSET(0x18C02870)
#define DJOCDDCPEPF_CTOR_OFFSET UNITYSDK_OFFSET(0x18C02100)
#define DJOCDDCPEPF_DCNGNLJADJM_OFFSET UNITYSDK_OFFSET(0x18C02AB0)
#define DJOCDDCPEPF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C02400)
#define DJOCDDCPEPF_FEHGIPOELBL_OFFSET UNITYSDK_OFFSET(0x18C02B20)
#define DJOCDDCPEPF_HJOHDFKLIDK_OFFSET UNITYSDK_OFFSET(0x18C02550)
#define DJOCDDCPEPF_IEOGLIENPMN_OFFSET UNITYSDK_OFFSET(0x18C02180)
#define DJOCDDCPEPF_JECNJOJLGBP_OFFSET UNITYSDK_OFFSET(0x18C02990)
#define DJOCDDCPEPF_JFEBBCLMCFD_OFFSET UNITYSDK_OFFSET(0x18C02800)
#define DJOCDDCPEPF_NPAFFCJINKB_OFFSET UNITYSDK_OFFSET(0x18C02780)

inline static constexpr unsigned int DJOCDDCPEPF_TypeDefinitionIndex = 74172;

	class DJOCDDCPEPF : public ::System::Object
	{
	public:
		::RPG::Client::BattleAvatarNihiluxCustomUIData* EHNOGCBHACN; // 0x10
		::RPG::GameCore::TurnBasedAbilityComponent* PCDEEAAIFPK; // 0x18
		::System::Action* OBGBLOGOLOC; // 0x20
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x28
		::System::Boolean FBMOGNBFNJD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_CTOR_OFFSET))(this);
		}

		static ::DJOCDDCPEPF* BPLPBPMEODA(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
		{
			return ((::DJOCDDCPEPF*(*)(::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_DISPOSE_OFFSET))(this);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Int32 HJOHDFKLIDK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_HJOHDFKLIDK_OFFSET))(this);
		}

		::RPG::GameCore::ElationEchoPointUIType AIDNOFPCHLH()
		{
			return ((::RPG::GameCore::ElationEchoPointUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_AIDNOFPCHLH_OFFSET))(this);
		}

		::RPG::GameCore::NihiluxElationUIType NPAFFCJINKB()
		{
			return ((::RPG::GameCore::NihiluxElationUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_NPAFFCJINKB_OFFSET))(this);
		}

		::System::String* JFEBBCLMCFD(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_JFEBBCLMCFD_OFFSET))(this, a1);
		}

		::System::Void IEOGLIENPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_IEOGLIENPMN_OFFSET))(this);
		}

		::System::Void AIJLDADIBNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_AIJLDADIBNM_OFFSET))(this);
		}

		::System::Void BLDNIBLKADJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_BLDNIBLKADJ_OFFSET))(this);
		}

		::System::Void CENMBJDMIEE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_CENMBJDMIEE_OFFSET))(this, a1);
		}

		::System::Void JECNJOJLGBP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_JECNJOJLGBP_OFFSET))(this, a1);
		}

		::System::Int32 CACBOKCKKDN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_CACBOKCKKDN_OFFSET))(this, a1);
		}

		::System::Int32 DCNGNLJADJM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_DCNGNLJADJM_OFFSET))(this);
		}

		::System::Boolean FEHGIPOELBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOCDDCPEPF_FEHGIPOELBL_OFFSET))(this);
		}

	};
