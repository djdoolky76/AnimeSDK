#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MuseumTalkTriggerType.h"
#include "unitysdk/RPG/GameCore/MuseumTalkType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumDeskTalkConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E489660)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E488ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumDeskTalkConfigRow_TypeDefinitionIndex = 14411;

	class MuseumDeskTalkConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* TextIDList; // 0x10
		::System::String* TalkTypeParameter; // 0x18
		::System::String* CustomString; // 0x20
		::System::Boolean IsMustTriggered; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 TalkID; // 0x2C
		::RPG::GameCore::MuseumTalkType TalkType; // 0x30
		::System::UInt32 Priority; // 0x34
		::RPG::GameCore::MuseumTalkTriggerType TriggerType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuseumDeskTalkConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
