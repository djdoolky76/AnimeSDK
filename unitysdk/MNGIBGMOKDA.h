#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class PredicateTaskList; }
namespace RPG::GameCore { class TaskContext; }

#define MNGIBGMOKDA_BBLAGJIFKEK_OFFSET UNITYSDK_OFFSET(0xC2C5CE0)
#define MNGIBGMOKDA_CTOR_OFFSET UNITYSDK_OFFSET(0xC2C5860)
#define MNGIBGMOKDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2C5A00)
#define MNGIBGMOKDA_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC2C5C00)
#define MNGIBGMOKDA_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC2C5C10)
#define MNGIBGMOKDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2C5D50)
#define MNGIBGMOKDA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2C5F00)
#define MNGIBGMOKDA_TICK_OFFSET UNITYSDK_OFFSET(0xC2C5F90)

inline static constexpr unsigned int MNGIBGMOKDA_TypeDefinitionIndex = 56444;

	class MNGIBGMOKDA : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* LKDIMCCENOI; // 0x18
		::GELIALJDFBL* LLHKOFLJFCH; // 0x20
		::KFELGAIGHAP* IMLDGCEMCCM; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::GameCore::PredicateTaskList* OFKGLJOAMLD; // 0x38
		::KFELGAIGHAP* APFMMFLLIIM; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PredicateTaskList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PredicateTaskList*))((::PBYTE)hIl2Cpp + MNGIBGMOKDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGIBGMOKDA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGIBGMOKDA_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGIBGMOKDA_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGIBGMOKDA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGIBGMOKDA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNGIBGMOKDA_TICK_OFFSET))(this, a1);
		}

		::System::Void BBLAGJIFKEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNGIBGMOKDA_BBLAGJIFKEK_OFFSET))(this);
		}

	};
