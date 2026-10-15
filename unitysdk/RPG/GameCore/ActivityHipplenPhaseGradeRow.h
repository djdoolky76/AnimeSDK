#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenStatGradeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenPhaseGradeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENPHASEGRADEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D368640)
#define RPG_GAMECORE_ACTIVITYHIPPLENPHASEGRADEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D368460)

namespace RPG::GameCore
{
	class ActivityHipplenPhaseGradeRow : public ::System::Object
	{
	public:
		::System::String* GradeIcon; // 0x10
		::RPG::Client::TextID GradeShowText; // 0x18
		::RPG::GameCore::HipplenStatGradeType GradeType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENPHASEGRADEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenPhaseGradeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenPhaseGradeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENPHASEGRADEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
