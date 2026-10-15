#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/ElementConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class FadeInElementConfig; }

#define RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4727B0)
#define RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4742E0)
#define RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4740F0)

namespace RPG::GameCore::Booklet
{
	class FadeInElementConfig : public ::RPG::GameCore::Booklet::ElementConfig
	{
	public:
		::System::Boolean IsAutoFadeIn; // 0x18
		::System::Boolean IsAlwayShow; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::FadeInElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::FadeInElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::FadeInElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::FadeInElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_FADEINELEMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
