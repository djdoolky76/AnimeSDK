#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/ElementConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class CustomPageElementConfig; }

#define RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D445B60)
#define RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D445B70)
#define RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D445B10)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int CustomPageElementConfig_TypeDefinitionIndex = 24967;

	class CustomPageElementConfig : public ::RPG::GameCore::Booklet::ElementConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::CustomPageElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::CustomPageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::CustomPageElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::CustomPageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CUSTOMPAGEELEMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
