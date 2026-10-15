#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PauseToastQueue; }

#define RPG_GAMECORE_PAUSETOASTQUEUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C6140)
#define RPG_GAMECORE_PAUSETOASTQUEUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8C6150)
#define RPG_GAMECORE_PAUSETOASTQUEUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C6110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseToastQueue_TypeDefinitionIndex = 20307;

	class PauseToastQueue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOASTQUEUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseToastQueue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseToastQueue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOASTQUEUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseToastQueue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseToastQueue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSETOASTQUEUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
