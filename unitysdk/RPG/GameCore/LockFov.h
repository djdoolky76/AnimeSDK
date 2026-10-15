#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockFov; }

#define RPG_GAMECORE_LOCKFOV_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F0DA0)
#define RPG_GAMECORE_LOCKFOV_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F0DB0)
#define RPG_GAMECORE_LOCKFOV_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F0D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockFov_TypeDefinitionIndex = 20839;

	class LockFov : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Lock; // 0x18
		::System::Boolean RetainLockedValue; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKFOV_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockFov* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockFov*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKFOV_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockFov* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockFov*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKFOV_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
