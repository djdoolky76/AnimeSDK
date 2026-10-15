#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTalkNameConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETALKNAMECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA03CA0)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA035C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkNameConfigRow_TypeDefinitionIndex = 14809;

	class RogueTalkNameConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ImageID; // 0x18
		::System::UInt32 TalkNameID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::RPG::Client::TextID SubName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTalkNameConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTalkNameConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
