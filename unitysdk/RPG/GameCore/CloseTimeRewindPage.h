#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CloseTimeRewindPage; }

#define RPG_GAMECORE_CLOSETIMEREWINDPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7F50)
#define RPG_GAMECORE_CLOSETIMEREWINDPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C7F60)
#define RPG_GAMECORE_CLOSETIMEREWINDPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C7E90)

namespace RPG::GameCore
{
	class CloseTimeRewindPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseTimeRewindPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseTimeRewindPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloseTimeRewindPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloseTimeRewindPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOSETIMEREWINDPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
