#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ContainerAndSeedBind; }
namespace RPG::GameCore { class ContainerStateToSeedStateConfig; }

#define RPG_GAMECORE_CONTAINERANDSEEDBIND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DB990)
#define RPG_GAMECORE_CONTAINERANDSEEDBIND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DB840)

namespace RPG::GameCore
{
	class ContainerAndSeedBind : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SeedInstanceID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ContainerStateToSeedStateConfig*>* StateConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTAINERANDSEEDBIND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ContainerAndSeedBind* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ContainerAndSeedBind*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTAINERANDSEEDBIND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
