#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/GMEFBLGIECD.h"
class BNBOAMEBAOE;
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPerformance; }

#define HBIJEDKIDDN_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0x15BF80D0)
#define HBIJEDKIDDN_CDGFNKAPLPB_OFFSET UNITYSDK_OFFSET(0x15BF8040)
#define HBIJEDKIDDN_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF7FC0)
#define HBIJEDKIDDN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BF7FE0)
#define HBIJEDKIDDN_FDMKCFLDMCE_OFFSET UNITYSDK_OFFSET(0x15BF8B50)
#define HBIJEDKIDDN_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15BF8AD0)
#define HBIJEDKIDDN_IJMONDLGAIP_OFFSET UNITYSDK_OFFSET(0x15BF8680)
#define HBIJEDKIDDN_ONMGPDNDJMJ_OFFSET UNITYSDK_OFFSET(0x15BF85B0)
#define HBIJEDKIDDN_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15BF8AE0)
#define HBIJEDKIDDN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BF8150)
#define HBIJEDKIDDN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15BF8A00)
#define HBIJEDKIDDN_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x15BF8080)
#define HBIJEDKIDDN_TICK_OFFSET UNITYSDK_OFFSET(0x15BF8A70)

inline static constexpr unsigned int HBIJEDKIDDN_TypeDefinitionIndex = 53453;

	class HBIJEDKIDDN : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::PerformanceManager* CFHLPMAFJLH; // 0x18
		::KFELGAIGHAP* FPHGFPAGLND; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::GELIALJDFBL* CJHJNLGOJLA; // 0x30
		::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x38
		::RPG::GameCore::TriggerPerformance* OFKGLJOAMLD; // 0x40
		::System::Guid HAMICAAHNAM; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPerformance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPerformance*))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::TriggerPerformance* CDGFNKAPLPB()
		{
			return ((::RPG::GameCore::TriggerPerformance*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_CDGFNKAPLPB_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_ONSKIP_OFFSET))(this);
		}

		::System::Boolean ONMGPDNDJMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_ONMGPDNDJMJ_OFFSET))(this);
		}

		::System::Void IJMONDLGAIP(::GMEFBLGIECD a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMEFBLGIECD))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_IJMONDLGAIP_OFFSET))(this, a1);
		}

		::System::Void FDMKCFLDMCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIJEDKIDDN_FDMKCFLDMCE_OFFSET))(this);
		}

	};
