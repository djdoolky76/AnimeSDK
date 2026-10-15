#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropWaterWheelStartRotate; }
namespace RPG::GameCore { class TaskContext; }

#define COJJOMDINNB_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB1AC0)
#define COJJOMDINNB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCB1FD0)
#define COJJOMDINNB_MEJPCDCODCM_OFFSET UNITYSDK_OFFSET(0xDCB2030)
#define COJJOMDINNB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCB1AD0)
#define COJJOMDINNB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCB1F80)
#define COJJOMDINNB_TICK_OFFSET UNITYSDK_OFFSET(0xDCB2080)

inline static constexpr unsigned int COJJOMDINNB_TypeDefinitionIndex = 58365;

	class COJJOMDINNB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropWaterWheelStartRotate* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropWaterWheelStartRotate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropWaterWheelStartRotate*))((::PBYTE)hIl2Cpp + COJJOMDINNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJJOMDINNB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJJOMDINNB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJJOMDINNB_DISPOSE_OFFSET))(this);
		}

		::System::Void MEJPCDCODCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJJOMDINNB_MEJPCDCODCM_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COJJOMDINNB_TICK_OFFSET))(this, a1);
		}

	};
