#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowEvolveBuildProgressInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define IIMMGKBIOBA_CTOR_OFFSET UNITYSDK_OFFSET(0x193F3280)
#define IIMMGKBIOBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193F3290)
#define IIMMGKBIOBA_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x193F36E0)
#define IIMMGKBIOBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x193F3330)
#define IIMMGKBIOBA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x193F3690)
#define IIMMGKBIOBA_TICK_OFFSET UNITYSDK_OFFSET(0x193F32D0)

inline static constexpr unsigned int IIMMGKBIOBA_TypeDefinitionIndex = 59911;

	class IIMMGKBIOBA : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x18
		::RPG::GameCore::ShowEvolveBuildProgressInBattle* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEvolveBuildProgressInBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEvolveBuildProgressInBattle*))((::PBYTE)hIl2Cpp + IIMMGKBIOBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMGKBIOBA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IIMMGKBIOBA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMGKBIOBA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMGKBIOBA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMMGKBIOBA_JNIKOAEAEHB_OFFSET))(this);
		}

	};
