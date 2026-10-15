#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class SetDynamicValueByCharacterCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA756D0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA75930)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA756E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA756A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByCharacterCount_TypeDefinitionIndex = 23084;

	class SetDynamicValueByCharacterCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::PredicateConfig* Predicate; // 0x30
		::System::Boolean AliveOnly; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByCharacterCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByCharacterCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByCharacterCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByCharacterCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCHARACTERCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
