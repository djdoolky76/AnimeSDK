#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebateToastType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DebateShowToast; }

#define RPG_GAMECORE_DEBATESHOWTOAST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F5AE0)
#define RPG_GAMECORE_DEBATESHOWTOAST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5F5AF0)
#define RPG_GAMECORE_DEBATESHOWTOAST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F5AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateShowToast_TypeDefinitionIndex = 21933;

	class DebateShowToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DebateToastType ToastType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATESHOWTOAST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebateShowToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebateShowToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATESHOWTOAST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebateShowToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebateShowToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATESHOWTOAST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
