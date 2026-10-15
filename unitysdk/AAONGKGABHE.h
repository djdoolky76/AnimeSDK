#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueShowSelectMainPage; }
namespace RPG::GameCore { class TaskContext; }

#define AAONGKGABHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB0D83E0)
#define AAONGKGABHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0D83F0)
#define AAONGKGABHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0D8490)
#define AAONGKGABHE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0D8500)
#define AAONGKGABHE_TICK_OFFSET UNITYSDK_OFFSET(0xB0D8430)

inline static constexpr unsigned int AAONGKGABHE_TypeDefinitionIndex = 58472;

	class AAONGKGABHE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RogueShowSelectMainPage* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueShowSelectMainPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueShowSelectMainPage*))((::PBYTE)hIl2Cpp + AAONGKGABHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAONGKGABHE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AAONGKGABHE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAONGKGABHE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAONGKGABHE_ONTASKRESET_OFFSET))(this);
		}

	};
