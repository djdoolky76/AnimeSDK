#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkStoryRow; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D55C0)
#define RPG_GAMECORE_CLOCKPARKSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7D4E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryRow_TypeDefinitionIndex = 11194;

	class ClockParkStoryRow : public ::System::Object
	{
	public:
		::System::String* StoryJsonPath; // 0x10
		::System::String* ImgPath; // 0x18
		::RPG::Client::TextID StoryTitle; // 0x20
		::System::UInt32 StoryID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID StoryDesc; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
