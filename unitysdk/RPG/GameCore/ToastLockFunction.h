#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ToastLockFunction; }

#define RPG_GAMECORE_TOASTLOCKFUNCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5CF30)
#define RPG_GAMECORE_TOASTLOCKFUNCTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5CF40)
#define RPG_GAMECORE_TOASTLOCKFUNCTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5CF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastLockFunction_TypeDefinitionIndex = 20306;

	class ToastLockFunction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 UnlockID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTLOCKFUNCTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToastLockFunction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToastLockFunction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTLOCKFUNCTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToastLockFunction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToastLockFunction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTLOCKFUNCTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
