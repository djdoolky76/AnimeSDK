#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardSimpleTalkData; }

#define RPG_GAMECORE_FATERINCASEBOARDSIMPLETALKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69E5A0)
#define RPG_GAMECORE_FATERINCASEBOARDSIMPLETALKDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69E470)

namespace RPG::GameCore
{
	class FateRinCaseBoardSimpleTalkData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SentenceID; // 0x10
		::System::Single BlockTime; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDSIMPLETALKDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardSimpleTalkData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardSimpleTalkData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDSIMPLETALKDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
