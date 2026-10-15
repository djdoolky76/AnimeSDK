#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CompositeConfig; }

#define RPG_GAMECORE_COMPOSITECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D3220)
#define RPG_GAMECORE_COMPOSITECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D3230)
#define RPG_GAMECORE_COMPOSITECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D2DA0)

namespace RPG::GameCore
{
	class CompositeConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPOSITECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CompositeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CompositeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPOSITECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CompositeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CompositeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPOSITECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
