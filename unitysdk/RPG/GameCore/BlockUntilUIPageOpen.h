#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BlockUntilUIPageOpen; }
namespace System { class String; }

#define RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D470F30)
#define RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D470F40)
#define RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D470F00)

namespace RPG::GameCore
{
	class BlockUntilUIPageOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PageName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockUntilUIPageOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockUntilUIPageOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockUntilUIPageOpen* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockUntilUIPageOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKUNTILUIPAGEOPEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
