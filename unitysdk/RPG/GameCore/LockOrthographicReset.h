#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockOrthographicReset; }

#define RPG_GAMECORE_LOCKORTHOGRAPHICRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F1450)
#define RPG_GAMECORE_LOCKORTHOGRAPHICRESET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F1460)
#define RPG_GAMECORE_LOCKORTHOGRAPHICRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F1410)

namespace RPG::GameCore
{
	class LockOrthographicReset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Lock; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKORTHOGRAPHICRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockOrthographicReset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockOrthographicReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKORTHOGRAPHICRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockOrthographicReset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockOrthographicReset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKORTHOGRAPHICRESET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
