#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockVersusBar; }

#define RPG_GAMECORE_LOCKVERSUSBAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA35490)
#define RPG_GAMECORE_LOCKVERSUSBAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA354A0)
#define RPG_GAMECORE_LOCKVERSUSBAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA35460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockVersusBar_TypeDefinitionIndex = 23575;

	class LockVersusBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsUnlock; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKVERSUSBAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockVersusBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockVersusBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKVERSUSBAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockVersusBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockVersusBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKVERSUSBAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
