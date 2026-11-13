#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowSilverWolfActivityMissionPageTab; }
namespace RPG::GameCore { class TaskContext; }

#define DICCGGCIKNA_CTOR_OFFSET UNITYSDK_OFFSET(0x18EB1A40)
#define DICCGGCIKNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18EB1A50)
#define DICCGGCIKNA_DOJDDAHACNA_OFFSET UNITYSDK_OFFSET(0x18EB1AE0)
#define DICCGGCIKNA_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x18EB1D80)
#define DICCGGCIKNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18EB1A90)
#define DICCGGCIKNA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18EB1CD0)
#define DICCGGCIKNA_TICK_OFFSET UNITYSDK_OFFSET(0x18EB1D20)

inline static constexpr unsigned int DICCGGCIKNA_TypeDefinitionIndex = 59960;

	class DICCGGCIKNA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* OFKGLJOAMLD; // 0x20
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28
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
