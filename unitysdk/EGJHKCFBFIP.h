#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AddFinishMissionData_PlayMessage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define EGJHKCFBFIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1451B930)
#define EGJHKCFBFIP_DHDOFJLPGDC_OFFSET UNITYSDK_OFFSET(0x1451BAF0)
#define EGJHKCFBFIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1451B940)
#define EGJHKCFBFIP_IPKNOCPECCK_OFFSET UNITYSDK_OFFSET(0x1451BDB0)
#define EGJHKCFBFIP_OALDKNMMFCD_OFFSET UNITYSDK_OFFSET(0x1451BCE0)
#define EGJHKCFBFIP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1451B980)
#define EGJHKCFBFIP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1451BC30)
#define EGJHKCFBFIP_TICK_OFFSET UNITYSDK_OFFSET(0x1451BC80)

	class EGJHKCFBFIP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::AddFinishMissionData_PlayMessage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_PlayMessage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_PlayMessage*))((::PBYTE)hIl2Cpp + EGJHKCFBFIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJHKCFBFIP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJHKCFBFIP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJHKCFBFIP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGJHKCFBFIP_TICK_OFFSET))(this, a1);
		}

		::System::Void DHDOFJLPGDC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGJHKCFBFIP_DHDOFJLPGDC_OFFSET))(this, a1);
		}

		::System::Void OALDKNMMFCD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGJHKCFBFIP_OALDKNMMFCD_OFFSET))(this, a1);
		}

		::System::Void IPKNOCPECCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJHKCFBFIP_IPKNOCPECCK_OFFSET))(this);
		}

	};
