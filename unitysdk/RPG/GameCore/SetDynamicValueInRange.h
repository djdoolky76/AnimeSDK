#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetDynamicValueInRange; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEINRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA80460)
#define RPG_GAMECORE_SETDYNAMICVALUEINRANGE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA80710)
#define RPG_GAMECORE_SETDYNAMICVALUEINRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA804A0)
#define RPG_GAMECORE_SETDYNAMICVALUEINRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA80400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueInRange_TypeDefinitionIndex = 23577;

	class SetDynamicValueInRange : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Min; // 0x30
		::RPG::GameCore::DynamicFloat* Max; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEINRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueInRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEINRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueInRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEINRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEINRANGE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
