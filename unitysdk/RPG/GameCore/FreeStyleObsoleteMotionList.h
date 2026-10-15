#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleObsoleteMotionList; }

#define RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F4810)
#define RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F47D0)

namespace RPG::GameCore
{
	class FreeStyleObsoleteMotionList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleObsoleteMotionList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleObsoleteMotionList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEOBSOLETEMOTIONLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
