#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class PropWaterWheelStopRotate; }
namespace RPG::GameCore { class TaskContext; }

#define AIEICJDCBGD_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA1E50)
#define AIEICJDCBGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBA23B0)
#define AIEICJDCBGD_MEJPCDCODCM_OFFSET UNITYSDK_OFFSET(0xEBA2410)
#define AIEICJDCBGD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBA1E60)
#define AIEICJDCBGD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEBA2360)
#define AIEICJDCBGD_TICK_OFFSET UNITYSDK_OFFSET(0xEBA2460)

	class AIEICJDCBGD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropWaterWheelStopRotate* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* CIFOILLJFNF; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropWaterWheelStopRotate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropWaterWheelStopRotate*))((::PBYTE)hIl2Cpp + AIEICJDCBGD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEICJDCBGD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEICJDCBGD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEICJDCBGD_DISPOSE_OFFSET))(this);
		}

		::System::Void MEJPCDCODCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIEICJDCBGD_MEJPCDCODCM_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIEICJDCBGD_TICK_OFFSET))(this, a1);
		}

	};
