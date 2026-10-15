#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/ContainerConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class DecorativeContainerConfig; }
namespace RPG::GameCore::Booklet { class ElementConfig; }

#define RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D472ED0)
#define RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D472EE0)
#define RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4736C0)

namespace RPG::GameCore::Booklet
{
	class DecorativeContainerConfig : public ::RPG::GameCore::Booklet::ContainerConfig
	{
	public:
		::RPG::GameCore::Booklet::ElementConfig* Content; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::DecorativeContainerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::DecorativeContainerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::DecorativeContainerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::DecorativeContainerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_DECORATIVECONTAINERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
