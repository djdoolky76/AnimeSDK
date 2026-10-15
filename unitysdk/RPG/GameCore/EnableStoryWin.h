#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableStoryWin; }

#define RPG_GAMECORE_ENABLESTORYWIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D641120)
#define RPG_GAMECORE_ENABLESTORYWIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D641130)
#define RPG_GAMECORE_ENABLESTORYWIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6410F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableStoryWin_TypeDefinitionIndex = 23315;

	class EnableStoryWin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsEnable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESTORYWIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableStoryWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableStoryWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESTORYWIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableStoryWin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableStoryWin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLESTORYWIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
