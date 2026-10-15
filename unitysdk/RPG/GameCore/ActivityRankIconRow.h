#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRankIconRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRANKICONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37C500)
#define RPG_GAMECORE_ACTIVITYRANKICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D37BE60)

namespace RPG::GameCore
{
	class ActivityRankIconRow : public ::System::Object
	{
	public:
		::System::String* CommonRankIconPath; // 0x10
		::RPG::Client::TextID Text; // 0x18
		::RPG::GameCore::ActivityRank ID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRankIconRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRankIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRANKICONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
