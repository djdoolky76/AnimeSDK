#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetModifierOverrideNameForStatus; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABA940)
#define RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABA950)
#define RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABA910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetModifierOverrideNameForStatus_TypeDefinitionIndex = 22634;

	class SetModifierOverrideNameForStatus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* ModifierOwner; // 0x18
		::System::String* ModifierName; // 0x20
		::System::String* ModifierNameForStatus; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetModifierOverrideNameForStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetModifierOverrideNameForStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetModifierOverrideNameForStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetModifierOverrideNameForStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMODIFIEROVERRIDENAMEFORSTATUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
