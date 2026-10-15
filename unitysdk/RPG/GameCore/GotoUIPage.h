#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GotoUIPage; }

#define RPG_GAMECORE_GOTOUIPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F4DC0)
#define RPG_GAMECORE_GOTOUIPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F4DD0)
#define RPG_GAMECORE_GOTOUIPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F4D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GotoUIPage_TypeDefinitionIndex = 23843;

	class GotoUIPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GotoID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOUIPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GotoUIPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GotoUIPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOUIPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GotoUIPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GotoUIPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GOTOUIPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
