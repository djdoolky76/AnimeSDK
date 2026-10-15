#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTalkNameConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETALKNAMECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA31540)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA30E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkNameConfigRow_TypeDefinitionIndex = 14809;

	class RogueTalkNameConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID SubName; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 ImageID; // 0x38
		::System::UInt32 TalkNameID; // 0x3C
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
