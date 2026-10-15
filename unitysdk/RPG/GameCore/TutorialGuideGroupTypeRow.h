#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialGuideGroupTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6AE70)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC6A420)

namespace RPG::GameCore
{
	class TutorialGuideGroupTypeRow : public ::System::Object
	{
	public:
		::System::String* MessageIconPath; // 0x10
		::System::UInt32 TutorialType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID MessageTitle; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialGuideGroupTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialGuideGroupTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
