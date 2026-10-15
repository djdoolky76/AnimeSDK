#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowActivityPage; }
namespace RPG::GameCore { class TaskContext; }

#define IADCCAFCMJP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E01470)
#define IADCCAFCMJP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E01480)
#define IADCCAFCMJP_DOFIJBJCKKI_OFFSET UNITYSDK_OFFSET(0x15E01510)
#define IADCCAFCMJP_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x15E01990)
#define IADCCAFCMJP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E014C0)
#define IADCCAFCMJP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E018E0)
#define IADCCAFCMJP_TICK_OFFSET UNITYSDK_OFFSET(0x15E01930)

	class IADCCAFCMJP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowActivityPage* OFKGLJOAMLD; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowActivityPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowActivityPage*))((::PBYTE)hIl2Cpp + IADCCAFCMJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADCCAFCMJP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADCCAFCMJP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADCCAFCMJP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IADCCAFCMJP_TICK_OFFSET))(this, a1);
		}

		::System::Void DOFIJBJCKKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADCCAFCMJP_DOFIJBJCKKI_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADCCAFCMJP_JNIKOAEAEHB_OFFSET))(this);
		}

	};
