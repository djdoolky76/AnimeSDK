#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightNodeIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTNODEIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D736EA0)
#define RPG_GAMECORE_GRIDFIGHTNODEIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D736D80)

namespace RPG::GameCore
{
	class GridFightNodeIdConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ChapterId; // 0x10
		::System::UInt32 SectionId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNODEIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightNodeIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightNodeIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTNODEIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
