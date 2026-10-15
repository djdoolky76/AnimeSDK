#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupValueLookUpConfig; }

#define RPG_GAMECORE_GROUPVALUELOOKUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74D030)
#define RPG_GAMECORE_GROUPVALUELOOKUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D74CEA0)

namespace RPG::GameCore
{
	class GroupValueLookUpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Group; // 0x10
		::System::UInt32 Value; // 0x14
		::System::Boolean IsState; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPVALUELOOKUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupValueLookUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupValueLookUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPVALUELOOKUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
