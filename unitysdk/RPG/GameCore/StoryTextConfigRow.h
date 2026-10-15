#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryTextConfigRow; }

#define RPG_GAMECORE_STORYTEXTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB29320)
#define RPG_GAMECORE_STORYTEXTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB291A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryTextConfigRow_TypeDefinitionIndex = 12692;

	class StoryTextConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 StoryID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID StoryName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYTEXTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryTextConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryTextConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYTEXTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
