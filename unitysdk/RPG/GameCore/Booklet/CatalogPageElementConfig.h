#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/ElementConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class CatalogPageElementConfig; }

#define RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4729E0)
#define RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4729F0)
#define RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D472990)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int CatalogPageElementConfig_TypeDefinitionIndex = 24968;

	class CatalogPageElementConfig : public ::RPG::GameCore::Booklet::ElementConfig
	{
	public:
		::System::Int32 BeginIndex; // 0x18
		::System::Int32 EndIndex; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::CatalogPageElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::CatalogPageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::CatalogPageElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::CatalogPageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CATALOGPAGEELEMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
