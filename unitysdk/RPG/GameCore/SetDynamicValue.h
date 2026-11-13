#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetDynamicValue; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }

#define RPG_GAMECORE_SETDYNAMICVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8642A0)
#define RPG_GAMECORE_SETDYNAMICVALUE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1F864530)
#define RPG_GAMECORE_SETDYNAMICVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F8642E0)
#define RPG_GAMECORE_SETDYNAMICVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F8640E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValue_TypeDefinitionIndex = 24279;

	class SetDynamicValue : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::RPG::GameCore::DynamicString* DynamicKey; // 0x30
		::System::Boolean SkipInCharmAction; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
