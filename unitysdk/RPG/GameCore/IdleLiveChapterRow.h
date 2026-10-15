#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NMHEPKCFAFH;
namespace RPG::GameCore { class IdleLiveChapterRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVECHAPTERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74B530)
#define RPG_GAMECORE_IDLELIVECHAPTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D74B070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveChapterRow_TypeDefinitionIndex = 11690;

	class IdleLiveChapterRow : public ::System::Object
	{
	public:
		::Il2CppArray<::NMHEPKCFAFH*>* FSVList; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* BackgroundState; // 0x20
		::System::UInt32 FinalActChatPhase; // 0x28
		::System::UInt32 ChapterIndex; // 0x2C
		::System::UInt32 ActivityModuleID; // 0x30
		::System::UInt32 FinalAct; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::RPG::Client::TextID Number; // 0x48
		::System::UInt32 BossID; // 0x58
		::System::Boolean ReturntoMaze; // 0x5C
		::System::Boolean IsHardMode; // 0x5D
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
