#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class PredicateTaskListWithFail; }
namespace RPG::GameCore { class TaskContext; }

#define PCLNOANPHEL_BBLAGJIFKEK_OFFSET UNITYSDK_OFFSET(0xC003990)
#define PCLNOANPHEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC003590)
#define PCLNOANPHEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0036B0)
#define PCLNOANPHEL_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC003A20)
#define PCLNOANPHEL_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC003A30)
#define PCLNOANPHEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC003810)
#define PCLNOANPHEL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC003A90)
#define PCLNOANPHEL_TICK_OFFSET UNITYSDK_OFFSET(0xC003AE0)

inline static constexpr unsigned int PCLNOANPHEL_TypeDefinitionIndex = 55264;

	class PCLNOANPHEL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PredicateTaskListWithFail* OFKGLJOAMLD; // 0x20
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::KFELGAIGHAP* LKDIMCCENOI; // 0x30
		::KFELGAIGHAP* IMLDGCEMCCM; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PredicateTaskListWithFail* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PredicateTaskListWithFail*))((::PBYTE)hIl2Cpp + PCLNOANPHEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLNOANPHEL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLNOANPHEL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLNOANPHEL_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLNOANPHEL_ONSKIP_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLNOANPHEL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PCLNOANPHEL_TICK_OFFSET))(this, a1);
		}

		::System::Void BBLAGJIFKEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLNOANPHEL_BBLAGJIFKEK_OFFSET))(this);
		}

	};
