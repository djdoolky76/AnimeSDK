#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NMHEPKCFAFH;
namespace RPG::GameCore { class IdleLiveChapterRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVECHAPTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D778FC0)
#define RPG_GAMECORE_IDLELIVECHAPTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D778B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveChapterRow_TypeDefinitionIndex = 11690;

	class IdleLiveChapterRow : public ::System::Object
	{
	public:
		::System::String* BackgroundState; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::NMHEPKCFAFH*>* FSVList; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Number; // 0x38
		::System::UInt32 BossID; // 0x48
		::System::UInt32 FinalActChatPhase; // 0x4C
		::System::UInt32 FinalAct; // 0x50
		::System::UInt32 ChapterIndex; // 0x54
		::System::Boolean ReturntoMaze; // 0x58
		::System::Boolean IsHardMode; // 0x59
		::System::Byte _padding0[0x2];
		::System::UInt32 ActivityModuleID; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHAPTERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveChapterRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveChapterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECHAPTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
