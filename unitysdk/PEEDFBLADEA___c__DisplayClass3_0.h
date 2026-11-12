#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class PEEDFBLADEA;
namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T> class Action_1; }

#define PEEDFBLADEA___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC93B190)
#define PEEDFBLADEA___C__DISPLAYCLASS3_0__STARTBOARDINGSWITCHIN_B__0_OFFSET UNITYSDK_OFFSET(0xC93CB20)

inline static constexpr unsigned int PEEDFBLADEA___c__DisplayClass3_0_TypeDefinitionIndex = 81556;

	class PEEDFBLADEA___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::TriggerEffectParamsRef triggerParamRef; // 0x10
		::System::Action_1<::System::Int32>* onLoadFailed; // 0x20
		::System::Action_1<::System::Int32>* onLoaded; // 0x28
		::PEEDFBLADEA* __4__this; // 0x30
		::System::Int32 boardingFlightVersion; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDFBLADEA___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartBoardingSwitchIn_b__0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + PEEDFBLADEA___C__DISPLAYCLASS3_0__STARTBOARDINGSWITCHIN_B__0_OFFSET))(this, a1, a2);
		}

	};
