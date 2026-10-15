#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/Booklet/ElementConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class TextElementConfig; }

#define RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D473E80)
#define RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D473E90)
#define RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D475C30)

namespace RPG::GameCore::Booklet
{
	class TextElementConfig : public ::RPG::GameCore::Booklet::ElementConfig
	{
	public:
		::RPG::Client::TextID Content; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::TextElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::TextElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::TextElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::TextElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_TEXTELEMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
