#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleCoopBossBornPosition; }

#define RPG_GAMECORE_MARBLECOOPBOSSBORNPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83C380)
#define RPG_GAMECORE_MARBLECOOPBOSSBORNPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83C240)

namespace RPG::GameCore
{
	class MarbleCoopBossBornPosition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BossCount; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* Positions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECOOPBOSSBORNPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleCoopBossBornPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleCoopBossBornPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLECOOPBOSSBORNPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
