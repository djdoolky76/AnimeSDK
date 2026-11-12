#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowSilverWolfActivityMissionPageTab; }
namespace RPG::GameCore { class TaskContext; }

#define DICCGGCIKNA_CTOR_OFFSET UNITYSDK_OFFSET(0xF9624A0)
#define DICCGGCIKNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF9624B0)
#define DICCGGCIKNA_DOJDDAHACNA_OFFSET UNITYSDK_OFFSET(0xF962540)
#define DICCGGCIKNA_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xF9627E0)
#define DICCGGCIKNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF9624F0)
#define DICCGGCIKNA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF962730)
#define DICCGGCIKNA_TICK_OFFSET UNITYSDK_OFFSET(0xF962780)

inline static constexpr unsigned int DICCGGCIKNA_TypeDefinitionIndex = 59960;

	class DICCGGCIKNA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab*))((::PBYTE)hIl2Cpp + DICCGGCIKNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICCGGCIKNA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICCGGCIKNA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICCGGCIKNA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DICCGGCIKNA_TICK_OFFSET))(this, a1);
		}

		::System::Void DOJDDAHACNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICCGGCIKNA_DOJDDAHACNA_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICCGGCIKNA_JNIKOAEAEHB_OFFSET))(this);
		}

	};
