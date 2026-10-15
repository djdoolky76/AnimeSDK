#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCounterType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByMagicUnitCounter; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA79520)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA79750)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA79530)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA794F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByMagicUnitCounter_TypeDefinitionIndex = 23106;

	class SetDynamicValueByMagicUnitCounter : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::RPG::GameCore::RogueMagicUnitCounterType Value; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
