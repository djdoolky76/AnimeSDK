#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2DiceExchangeEventType.h"
#include "unitysdk/System/Object.h"
class GLPPDCIBMIH;
namespace System { class Action; }

#define MGMMCFLBCNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB928C50)
#define MGMMCFLBCNM_CTOR_OFFSET UNITYSDK_OFFSET(0xB928C40)
#define MGMMCFLBCNM_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0xB928C80)
#define MGMMCFLBCNM_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB928C70)
#define MGMMCFLBCNM_GET_FROM_OFFSET UNITYSDK_OFFSET(0xB928C90)
#define MGMMCFLBCNM_GET_TO_OFFSET UNITYSDK_OFFSET(0xB928CA0)
#define MGMMCFLBCNM_GET_UID_OFFSET UNITYSDK_OFFSET(0xB928CB0)

	class MGMMCFLBCNM : public ::System::Object
	{
	public:
		::GLPPDCIBMIH* _To_k__BackingField; // 0x10
		::GLPPDCIBMIH* _From_k__BackingField; // 0x18
		::System::Action* _Callback_k__BackingField; // 0x20
		::System::UInt32 _UID_k__BackingField; // 0x28
		::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType _EventType_k__BackingField; // 0x2C
		::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType, ::System::Action*))((::PBYTE)hIl2Cpp + MGMMCFLBCNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType a1, ::GLPPDCIBMIH* a2, ::GLPPDCIBMIH* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType, ::GLPPDCIBMIH*, ::GLPPDCIBMIH*, ::System::UInt32))((::PBYTE)hIl2Cpp + MGMMCFLBCNM_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType get_EventType()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2DiceExchangeEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMMCFLBCNM_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Action* get_Callback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMMCFLBCNM_GET_CALLBACK_OFFSET))(this);
		}

		::GLPPDCIBMIH* get_From()
		{
			return ((::GLPPDCIBMIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMMCFLBCNM_GET_FROM_OFFSET))(this);
		}

		::GLPPDCIBMIH* get_To()
		{
			return ((::GLPPDCIBMIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMMCFLBCNM_GET_TO_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGMMCFLBCNM_GET_UID_OFFSET))(this);
		}

	};
