#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/QteCatchGhostNotify.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class QteCatchGhostSendNotify; }

#define RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95F100)
#define RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95F110)
#define RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95F0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int QteCatchGhostSendNotify_TypeDefinitionIndex = 22048;

	class QteCatchGhostSendNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::QteCatchGhostNotify NotifyType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::QteCatchGhostSendNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QteCatchGhostSendNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::QteCatchGhostSendNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QteCatchGhostSendNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QTECATCHGHOSTSENDNOTIFY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
