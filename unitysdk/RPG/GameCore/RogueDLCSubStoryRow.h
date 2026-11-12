#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCSubStoryRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCSUBSTORYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC10240)
#define RPG_GAMECORE_ROGUEDLCSUBSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC0FFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCSubStoryRow_TypeDefinitionIndex = 14955;

	class RogueDLCSubStoryRow : public ::System::Object
	{
	public:
		::System::String* OptionPath; // 0x10
		::System::String* LevelGraphPath; // 0x18
		::System::String* ImgPath; // 0x20
		::RPG::Client::TextID SubStoryName; // 0x28
		::System::UInt32 Layer; // 0x38
		::System::UInt32 RogueDLCSubStoryID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCSUBSTORYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCSubStoryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCSubStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCSUBSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
