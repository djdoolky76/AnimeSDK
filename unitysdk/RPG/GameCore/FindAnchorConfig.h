#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FindAnchorConfig; }

#define RPG_GAMECORE_FINDANCHORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A7790)
#define RPG_GAMECORE_FINDANCHORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A76B0)

namespace RPG::GameCore
{
	class FindAnchorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* AreaName; // 0x10
		::RPG::GameCore::DynamicString* AnchorName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDANCHORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FindAnchorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FindAnchorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDANCHORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
