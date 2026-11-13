#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class ChapterUiData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveChapter; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D133820)
#define RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D133A00)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ChapterUiData_TypeDefinitionIndex = 77741;

	class ChapterUiData : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::System::String* BackgroundState; // 0x18
		::System::UInt32 CurProgress; // 0x20
		::System::Boolean IsHardMode; // 0x24
		::System::Boolean IsFinished; // 0x25
		::System::Boolean IsUnlocked; // 0x26
		::System::Byte _padding0[0x1];
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 MaxProgress; // 0x38
		::System::UInt32 StarNum; // 0x3C
		::System::UInt32 ChapterId; // 0x40
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID UnlockHint; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::ChapterUiData* Create(::RPG::Client::ActivityIdleLive::IdleLiveChapter* a1)
		{
			return ((::RPG::Client::ActivityIdleLive::ChapterUiData*(*)(::RPG::Client::ActivityIdleLive::IdleLiveChapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_CHAPTERUIDATA_CREATE_OFFSET))(a1);
		}

	};
}
