#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class RoadRashGameModifier_AddUltimateEnergyOnce; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CKMHGCGCLLE_CTOR_OFFSET UNITYSDK_OFFSET(0xD763FE0)
#define CKMHGCGCLLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD763FF0)
#define CKMHGCGCLLE_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xD764320)
#define CKMHGCGCLLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD764030)
#define CKMHGCGCLLE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD764270)
#define CKMHGCGCLLE_PBFEEAJMMHB_OFFSET UNITYSDK_OFFSET(0xD7641C0)
#define CKMHGCGCLLE_PCGAGKNFLLJ_OFFSET UNITYSDK_OFFSET(0xD764090)
#define CKMHGCGCLLE_TICK_OFFSET UNITYSDK_OFFSET(0xD7642C0)

inline static constexpr unsigned int CKMHGCGCLLE_TypeDefinitionIndex = 58416;

	class CKMHGCGCLLE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce*))((::PBYTE)hIl2Cpp + CKMHGCGCLLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHGCGCLLE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHGCGCLLE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHGCGCLLE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKMHGCGCLLE_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHGCGCLLE_GETCONFIG_OFFSET))(this);
		}

		::System::Void PCGAGKNFLLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHGCGCLLE_PCGAGKNFLLJ_OFFSET))(this);
		}

		::System::Void PBFEEAJMMHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHGCGCLLE_PBFEEAJMMHB_OFFSET))(this);
		}

	};
