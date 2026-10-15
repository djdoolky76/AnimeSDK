#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AddMenuItem.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddTimelineMenuItem; }

#define RPG_GAMECORE_ADDTIMELINEMENUITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3894F0)
#define RPG_GAMECORE_ADDTIMELINEMENUITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D389500)
#define RPG_GAMECORE_ADDTIMELINEMENUITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38CF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddTimelineMenuItem_TypeDefinitionIndex = 21129;

	class AddTimelineMenuItem : public ::RPG::GameCore::AddMenuItem
	{
	public:
		::System::UInt32 GroupID; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEMENUITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddTimelineMenuItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddTimelineMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEMENUITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddTimelineMenuItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddTimelineMenuItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEMENUITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
