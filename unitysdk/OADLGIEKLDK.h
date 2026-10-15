#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UIMonopolyShowFinishedQuiz; }

#define OADLGIEKLDK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1CA40)
#define OADLGIEKLDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD1CD90)
#define OADLGIEKLDK_OFHENNCEPHL_OFFSET UNITYSDK_OFFSET(0xBD1CDF0)
#define OADLGIEKLDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD1CA50)
#define OADLGIEKLDK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD1CD30)
#define OADLGIEKLDK_TICK_OFFSET UNITYSDK_OFFSET(0xBD1CCD0)

	class OADLGIEKLDK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::LuaUIController* CPIIOIPAAKK; // 0x20
		::RPG::GameCore::UIMonopolyShowFinishedQuiz* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UIMonopolyShowFinishedQuiz* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UIMonopolyShowFinishedQuiz*))((::PBYTE)hIl2Cpp + OADLGIEKLDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLGIEKLDK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OADLGIEKLDK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLGIEKLDK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLGIEKLDK_DISPOSE_OFFSET))(this);
		}

		::System::Void OFHENNCEPHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADLGIEKLDK_OFHENNCEPHL_OFFSET))(this);
		}

	};
