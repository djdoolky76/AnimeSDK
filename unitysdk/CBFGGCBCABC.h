#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowEvolveBuildTreasureInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CBFGGCBCABC_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A1E40)
#define CBFGGCBCABC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4A1E50)
#define CBFGGCBCABC_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xC4A2E60)
#define CBFGGCBCABC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4A1EF0)
#define CBFGGCBCABC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4A2EB0)
#define CBFGGCBCABC_TICK_OFFSET UNITYSDK_OFFSET(0xC4A1E90)

inline static constexpr unsigned int CBFGGCBCABC_TypeDefinitionIndex = 58645;

	class CBFGGCBCABC : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::ShowEvolveBuildTreasureInBattle* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEvolveBuildTreasureInBattle*))((::PBYTE)hIl2Cpp + CBFGGCBCABC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFGGCBCABC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBFGGCBCABC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFGGCBCABC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFGGCBCABC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFGGCBCABC_JNIKOAEAEHB_OFFSET))(this);
		}

	};
