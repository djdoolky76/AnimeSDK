#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenTrialRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E578040)
#define RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E577E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenTrialRow_TypeDefinitionIndex = 11690;

	class ActivityHipplenTrialRow : public ::System::Object
	{
	public:
		::System::String* GameJson; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::HipplenMiniGameType Type; // 0x1C
		::RPG::Client::TextID TrialTitle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenTrialRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenTrialRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENTRIALROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
