#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TutorialTaskUnlock; }

#define RPG_GAMECORE_TUTORIALTASKUNLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6E790)
#define RPG_GAMECORE_TUTORIALTASKUNLOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6E7A0)
#define RPG_GAMECORE_TUTORIALTASKUNLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6E760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialTaskUnlock_TypeDefinitionIndex = 20893;

	class TutorialTaskUnlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* TriggerParam; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTASKUNLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialTaskUnlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialTaskUnlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTASKUNLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialTaskUnlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialTaskUnlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTASKUNLOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
