#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryLineUIDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_STORYLINEUIDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB28DB0)
#define RPG_GAMECORE_STORYLINEUIDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB281E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineUIDataRow_TypeDefinitionIndex = 15202;

	class StoryLineUIDataRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* ChronicleIconPath; // 0x18
		::System::String* LargeImgPath; // 0x20
		::System::String* MediumImgPath; // 0x28
		::System::String* FigurePath; // 0x30
		::System::String* Color; // 0x38
		::RPG::GameCore::GenderType Gender; // 0x40
		::System::UInt32 StoryLineID; // 0x44
		::RPG::Client::TextID Name; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StoryLineUIDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StoryLineUIDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINEUIDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
