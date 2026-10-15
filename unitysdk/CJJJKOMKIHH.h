#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EnablePerformanceMode; }
namespace RPG::GameCore { class TaskContext; }

#define CJJJKOMKIHH_CTOR_OFFSET UNITYSDK_OFFSET(0xD20FE40)
#define CJJJKOMKIHH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD20FE50)
#define CJJJKOMKIHH_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xD210080)
#define CJJJKOMKIHH_LICBPNEIEFM_OFFSET UNITYSDK_OFFSET(0xD20FEE0)
#define CJJJKOMKIHH_ONSKIP_OFFSET UNITYSDK_OFFSET(0xD210090)
#define CJJJKOMKIHH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD20FE90)
#define CJJJKOMKIHH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD20FFD0)
#define CJJJKOMKIHH_TICK_OFFSET UNITYSDK_OFFSET(0xD210020)

inline static constexpr unsigned int CJJJKOMKIHH_TypeDefinitionIndex = 52745;

	class CJJJKOMKIHH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::EnablePerformanceMode* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnablePerformanceMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnablePerformanceMode*))((::PBYTE)hIl2Cpp + CJJJKOMKIHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJJKOMKIHH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJJKOMKIHH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJJKOMKIHH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJJJKOMKIHH_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJJKOMKIHH_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJJKOMKIHH_ONSKIP_OFFSET))(this);
		}

		::System::Void LICBPNEIEFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJJKOMKIHH_LICBPNEIEFM_OFFSET))(this);
		}

	};
