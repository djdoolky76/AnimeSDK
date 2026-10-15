#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/SpreadConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class ElementConfig; }
namespace RPG::GameCore::Booklet { class PageSpreadConfig; }

#define RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4748A0)
#define RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4748B0)
#define RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D474850)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int PageSpreadConfig_TypeDefinitionIndex = 24964;

	class PageSpreadConfig : public ::RPG::GameCore::Booklet::SpreadConfig
	{
	public:
		::RPG::GameCore::Booklet::ElementConfig* LeftPage; // 0x20
		::RPG::GameCore::Booklet::ElementConfig* RightPage; // 0x28
		::RPG::GameCore::Booklet::ElementConfig* AbovePage; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::PageSpreadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::PageSpreadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::PageSpreadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::PageSpreadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PAGESPREADCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
