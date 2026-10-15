#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetHpBreakHint; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETHPBREAKHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA88940)
#define RPG_GAMECORE_SETHPBREAKHINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA88980)
#define RPG_GAMECORE_SETHPBREAKHINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA888E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetHpBreakHint_TypeDefinitionIndex = 23656;

	class SetHpBreakHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsActive; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* PrefabPath; // 0x28
		::System::String* BossPrefabPath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHPBREAKHINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHpBreakHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHpBreakHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHPBREAKHINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHpBreakHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHpBreakHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHPBREAKHINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
