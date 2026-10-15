#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDrinkMakerBartendInMainMission; }
namespace System { class Object; }

#define NLNGDGPHKCJ_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0xBC774D0)
#define NLNGDGPHKCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBC77160)
#define NLNGDGPHKCJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC77170)
#define NLNGDGPHKCJ_IDBIMHPJLOO_OFFSET UNITYSDK_OFFSET(0xBC77640)
#define NLNGDGPHKCJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC77230)
#define NLNGDGPHKCJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC775F0)
#define NLNGDGPHKCJ_TICK_OFFSET UNITYSDK_OFFSET(0xBC77590)

inline static constexpr unsigned int NLNGDGPHKCJ_TypeDefinitionIndex = 58778;

	class NLNGDGPHKCJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerDrinkMakerBartendInMainMission* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission*))((::PBYTE)hIl2Cpp + NLNGDGPHKCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGDGPHKCJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGDGPHKCJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLNGDGPHKCJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGDGPHKCJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BHEIANKOOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNGDGPHKCJ_BHEIANKOOPN_OFFSET))(this);
		}

		::System::Void IDBIMHPJLOO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLNGDGPHKCJ_IDBIMHPJLOO_OFFSET))(this, a1);
		}

	};
