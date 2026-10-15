#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UIMonopolyShowFinishedQuiz; }

#define OADLGIEKLDK_CTOR_OFFSET UNITYSDK_OFFSET(0xBD15900)
#define OADLGIEKLDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD15C50)
#define OADLGIEKLDK_OFHENNCEPHL_OFFSET UNITYSDK_OFFSET(0xBD15CB0)
#define OADLGIEKLDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD15910)
#define OADLGIEKLDK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD15BF0)
#define OADLGIEKLDK_TICK_OFFSET UNITYSDK_OFFSET(0xBD15B90)

inline static constexpr unsigned int OADLGIEKLDK_TypeDefinitionIndex = 58834;

	class OADLGIEKLDK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::UIMonopolyShowFinishedQuiz* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::Client::LuaUIController* CPIIOIPAAKK; // 0x28
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
