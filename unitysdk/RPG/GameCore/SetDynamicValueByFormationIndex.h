#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByFormationIndex; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA4A80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA4C80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA4A90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA4A50)

namespace RPG::GameCore
{
	class SetDynamicValueByFormationIndex : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::TeamMemberCountingOption CountingOption; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByFormationIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByFormationIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByFormationIndex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByFormationIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
