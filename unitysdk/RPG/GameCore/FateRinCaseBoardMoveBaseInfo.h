#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardMoveBaseInfo; }

#define RPG_GAMECORE_FATERINCASEBOARDMOVEBASEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69E460)
#define RPG_GAMECORE_FATERINCASEBOARDMOVEBASEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69E2E0)

namespace RPG::GameCore
{
	class FateRinCaseBoardMoveBaseInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::Single OffsetX; // 0x14
		::System::Single OffsetY; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDMOVEBASEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardMoveBaseInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardMoveBaseInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDMOVEBASEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
