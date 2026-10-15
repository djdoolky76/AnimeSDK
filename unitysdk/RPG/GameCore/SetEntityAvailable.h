#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEntityAvailable; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETENTITYAVAILABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB0650)
#define RPG_GAMECORE_SETENTITYAVAILABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB0660)
#define RPG_GAMECORE_SETENTITYAVAILABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB0610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityAvailable_TypeDefinitionIndex = 20604;

	class SetEntityAvailable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsAvailable; // 0x20
		::System::Boolean IncludeModelVisible; // 0x21
		::System::Boolean ResetPosition; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYAVAILABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityAvailable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYAVAILABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEntityAvailable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEntityAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYAVAILABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
