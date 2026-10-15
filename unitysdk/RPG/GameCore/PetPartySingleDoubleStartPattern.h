#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PetPartySingleDoubleStartOrder.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartySingleDoubleStartPattern; }

#define RPG_GAMECORE_PETPARTYSINGLEDOUBLESTARTPATTERN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90B120)
#define RPG_GAMECORE_PETPARTYSINGLEDOUBLESTARTPATTERN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D90AF50)

namespace RPG::GameCore
{
	class PetPartySingleDoubleStartPattern : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Weight; // 0x10
		::RPG::GameCore::PetPartySingleDoubleStartOrder StartOrder; // 0x14
		::System::Single MinIntervalSeconds; // 0x18
		::System::Single MaxIntervalSeconds; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLEDOUBLESTARTPATTERN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartySingleDoubleStartPattern* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartySingleDoubleStartPattern*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLEDOUBLESTARTPATTERN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
