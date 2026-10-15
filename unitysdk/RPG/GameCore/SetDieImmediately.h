#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDieImmediately; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETDIEIMMEDIATELY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA71260)
#define RPG_GAMECORE_SETDIEIMMEDIATELY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA71270)
#define RPG_GAMECORE_SETDIEIMMEDIATELY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA71220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDieImmediately_TypeDefinitionIndex = 22668;

	class SetDieImmediately : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Boolean MakeDyingEntityDeadImmediately; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDIEIMMEDIATELY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDieImmediately* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDieImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDIEIMMEDIATELY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDieImmediately* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDieImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDIEIMMEDIATELY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
