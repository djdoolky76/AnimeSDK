#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/PreShowStanceCheckType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByPreShowStanceBreak; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA8AF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA8B00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA8AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByPreShowStanceBreak_TypeDefinitionIndex = 23689;

	class SetDynamicValueByPreShowStanceBreak : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SkillCaster; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* DynamicKey; // 0x28
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x30
		::RPG::GameCore::PreShowStanceCheckType CheckType; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByPreShowStanceBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYPRESHOWSTANCEBREAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
