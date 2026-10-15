#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfPhaseItem; }

#define RPG_GAMECORE_ELFPHASEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6375D0)
#define RPG_GAMECORE_ELFPHASEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6374B0)

namespace RPG::GameCore
{
	class ElfPhaseItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Phase; // 0x10
		::System::UInt32 CleanBonus; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPHASEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfPhaseItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfPhaseItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPHASEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
