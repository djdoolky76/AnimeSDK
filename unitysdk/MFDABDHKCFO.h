#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
class OFCMIIFENGK;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define MFDABDHKCFO_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0xB8EE230)
#define MFDABDHKCFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB8EDF70)
#define MFDABDHKCFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8EE070)
#define MFDABDHKCFO_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB8EE930)
#define MFDABDHKCFO_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xB8EE840)
#define MFDABDHKCFO_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB8EE6C0)
#define MFDABDHKCFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8EE1E0)
#define MFDABDHKCFO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8EE610)
#define MFDABDHKCFO_TICK_OFFSET UNITYSDK_OFFSET(0xB8EE660)
#define MFDABDHKCFO___SHOWUI_B__6_0_OFFSET UNITYSDK_OFFSET(0xB8EE940)

inline static constexpr unsigned int MFDABDHKCFO_TypeDefinitionIndex = 52613;

	class MFDABDHKCFO : public ::GELIALJDFBL
	{
	public:
		::OFCMIIFENGK* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* BKCCFPHPIHM; // 0x20
		::KFELGAIGHAP* CKMKMCAOLOG; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OFCMIIFENGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OFCMIIFENGK*))((::PBYTE)hIl2Cpp + MFDABDHKCFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDABDHKCFO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDABDHKCFO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDABDHKCFO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFDABDHKCFO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDABDHKCFO_ONSKIP_OFFSET))(this);
		}

		::System::Void AIEGALJHOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDABDHKCFO_AIEGALJHOFE_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDABDHKCFO_JNIKOAEAEHB_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDABDHKCFO_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void __ShowUI_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDABDHKCFO___SHOWUI_B__6_0_OFFSET))(this);
		}

	};
