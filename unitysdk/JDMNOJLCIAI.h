#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AddFinishMissionData_PlayMessageAdaptive; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define JDMNOJLCIAI_CTOR_OFFSET UNITYSDK_OFFSET(0x165D86B0)
#define JDMNOJLCIAI_DHDOFJLPGDC_OFFSET UNITYSDK_OFFSET(0x165D88A0)
#define JDMNOJLCIAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165D86C0)
#define JDMNOJLCIAI_IPKNOCPECCK_OFFSET UNITYSDK_OFFSET(0x165D8B50)
#define JDMNOJLCIAI_OALDKNMMFCD_OFFSET UNITYSDK_OFFSET(0x165D8AA0)
#define JDMNOJLCIAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165D8740)
#define JDMNOJLCIAI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165D89F0)
#define JDMNOJLCIAI_TICK_OFFSET UNITYSDK_OFFSET(0x165D8A40)

	class JDMNOJLCIAI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_PlayMessageAdaptive*))((::PBYTE)hIl2Cpp + JDMNOJLCIAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMNOJLCIAI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMNOJLCIAI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMNOJLCIAI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDMNOJLCIAI_TICK_OFFSET))(this, a1);
		}

		::System::Void DHDOFJLPGDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMNOJLCIAI_DHDOFJLPGDC_OFFSET))(this);
		}

		::System::Void OALDKNMMFCD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDMNOJLCIAI_OALDKNMMFCD_OFFSET))(this, a1);
		}

		::System::Void IPKNOCPECCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMNOJLCIAI_IPKNOCPECCK_OFFSET))(this);
		}

	};
