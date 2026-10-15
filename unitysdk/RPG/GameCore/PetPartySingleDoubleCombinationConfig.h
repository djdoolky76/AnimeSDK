#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetPartySingleDoubleCombinationConfig; }
namespace RPG::GameCore { class PetPartySingleDoubleStartPattern; }

#define RPG_GAMECORE_PETPARTYSINGLEDOUBLECOMBINATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90AF40)
#define RPG_GAMECORE_PETPARTYSINGLEDOUBLECOMBINATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D909720)

namespace RPG::GameCore
{
	class PetPartySingleDoubleCombinationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Weight; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::PetPartySingleDoubleStartPattern*>* StartPatterns; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLEDOUBLECOMBINATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetPartySingleDoubleCombinationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetPartySingleDoubleCombinationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYSINGLEDOUBLECOMBINATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
