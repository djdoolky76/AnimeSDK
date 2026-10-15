#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ToastPileIgnore; }

#define RPG_GAMECORE_TOASTPILEIGNORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8BDA0)
#define RPG_GAMECORE_TOASTPILEIGNORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB8BDB0)
#define RPG_GAMECORE_TOASTPILEIGNORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB8BD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastPileIgnore_TypeDefinitionIndex = 20304;

	class ToastPileIgnore : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsIgnore; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILEIGNORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToastPileIgnore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToastPileIgnore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILEIGNORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToastPileIgnore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToastPileIgnore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTPILEIGNORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
