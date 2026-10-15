#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowSilverWolfActivityMissionPageTab; }
namespace RPG::GameCore { class TaskContext; }

#define DICCGGCIKNA_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEA400)
#define DICCGGCIKNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBEA410)
#define DICCGGCIKNA_DOJDDAHACNA_OFFSET UNITYSDK_OFFSET(0xEBEA4A0)
#define DICCGGCIKNA_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xEBEA740)
#define DICCGGCIKNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBEA450)
#define DICCGGCIKNA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEBEA690)
#define DICCGGCIKNA_TICK_OFFSET UNITYSDK_OFFSET(0xEBEA6E0)

inline static constexpr unsigned int DICCGGCIKNA_TypeDefinitionIndex = 58692;

	class DICCGGCIKNA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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
