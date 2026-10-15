#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartySimpleTalkData; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSIMPLETALKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC34FF0)
#define RPG_GAMECORE_TRAINPARTYSIMPLETALKDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC34ED0)

namespace RPG::GameCore
{
	class TrainPartySimpleTalkData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TalkTextID; // 0x10
		::System::UInt32 BgID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSIMPLETALKDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartySimpleTalkData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartySimpleTalkData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSIMPLETALKDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
