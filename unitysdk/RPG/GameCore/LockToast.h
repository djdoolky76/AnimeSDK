#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockToast; }

#define RPG_GAMECORE_LOCKTOAST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C4960)
#define RPG_GAMECORE_LOCKTOAST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C4970)
#define RPG_GAMECORE_LOCKTOAST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C4930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockToast_TypeDefinitionIndex = 24352;

	class LockToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsLock; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTOAST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTOAST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTOAST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
