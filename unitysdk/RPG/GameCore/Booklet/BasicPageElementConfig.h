#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/FadeInElementConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class BasicPageElementConfig; }
namespace RPG::GameCore::Booklet { class ElementConfig; }

#define RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D444B00)
#define RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D444B10)
#define RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D444AB0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int BasicPageElementConfig_TypeDefinitionIndex = 24966;

	class BasicPageElementConfig : public ::RPG::GameCore::Booklet::FadeInElementConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Booklet::ElementConfig*>* ElementList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::BasicPageElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::BasicPageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::BasicPageElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::BasicPageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_BASICPAGEELEMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
