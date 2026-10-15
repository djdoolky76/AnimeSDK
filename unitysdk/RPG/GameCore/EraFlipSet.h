#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EraFlipGroupConfig; }
namespace RPG::GameCore { class EraFlipSet; }

#define RPG_GAMECORE_ERAFLIPSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D680F70)
#define RPG_GAMECORE_ERAFLIPSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D680E20)

namespace RPG::GameCore
{
	class EraFlipSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::EraFlipGroupConfig*>* Groups; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EraFlipSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EraFlipSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
