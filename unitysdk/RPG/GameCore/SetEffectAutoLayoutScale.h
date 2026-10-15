#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEffectAutoLayoutScale; }
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAF120)
#define RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAF130)
#define RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAF0E0)

namespace RPG::GameCore
{
	class SetEffectAutoLayoutScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::Single Scale; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAutoLayoutScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAutoLayoutScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectAutoLayoutScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectAutoLayoutScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTAUTOLAYOUTSCALE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
