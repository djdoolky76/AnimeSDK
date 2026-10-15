#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AddFinishMissionData_SelectConsumeItem; }
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define ACGIANIGDFB_BOGIACOMHDP_OFFSET UNITYSDK_OFFSET(0xB11ECD0)
#define ACGIANIGDFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB11DBB0)
#define ACGIANIGDFB_DHMJLAKNIBJ_OFFSET UNITYSDK_OFFSET(0xB11EB10)
#define ACGIANIGDFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB11DCA0)
#define ACGIANIGDFB_EGMFENLJEAI_OFFSET UNITYSDK_OFFSET(0xB11E450)
#define ACGIANIGDFB_JPNHJFKPKPM_OFFSET UNITYSDK_OFFSET(0xB11E930)
#define ACGIANIGDFB_LEPONDILPNO_OFFSET UNITYSDK_OFFSET(0xB11EA20)
#define ACGIANIGDFB_MAMKHFAFAFG_OFFSET UNITYSDK_OFFSET(0xB11EE30)
#define ACGIANIGDFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB11DF80)
#define ACGIANIGDFB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB11E1D0)
#define ACGIANIGDFB_OOFJPAOIONP_OFFSET UNITYSDK_OFFSET(0xB11E6F0)
#define ACGIANIGDFB_PDDHJJBHHHK_OFFSET UNITYSDK_OFFSET(0xB11ED80)
#define ACGIANIGDFB_PHKMKFJLCCI_OFFSET UNITYSDK_OFFSET(0xB11E130)
#define ACGIANIGDFB_TICK_OFFSET UNITYSDK_OFFSET(0xB11E310)

	class ACGIANIGDFB : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* IKNPCLDDCDI; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::MissionItemConfigList* ENLBIHNPGOD; // 0x28
		::KFELGAIGHAP* BEHIGGIDIIK; // 0x30
		::RPG::GameCore::AddFinishMissionData_SelectConsumeItem* OFKGLJOAMLD; // 0x38
		::KFELGAIGHAP* LEPBEGLNCDE; // 0x40
		::KFELGAIGHAP* JOABCNLPPGI; // 0x48
		// static const ::System::String* PAEPCIMJPGM; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem*))((::PBYTE)hIl2Cpp + ACGIANIGDFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGIANIGDFB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGIANIGDFB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGIANIGDFB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACGIANIGDFB_TICK_OFFSET))(this, a1);
		}

		::System::Void EGMFENLJEAI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACGIANIGDFB_EGMFENLJEAI_OFFSET))(this, a1);
		}

		::System::Void DHMJLAKNIBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACGIANIGDFB_DHMJLAKNIBJ_OFFSET))(this, a1);
		}

		::System::Void JPNHJFKPKPM(::RPG::GameCore::SelectMissionItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + ACGIANIGDFB_JPNHJFKPKPM_OFFSET))(this, a1);
		}

		::System::Void PDDHJJBHHHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGIANIGDFB_PDDHJJBHHHK_OFFSET))(this);
		}

		::System::Void LEPONDILPNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGIANIGDFB_LEPONDILPNO_OFFSET))(this);
		}

		::System::Void PHKMKFJLCCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGIANIGDFB_PHKMKFJLCCI_OFFSET))(this);
		}

		::System::Void BOGIACOMHDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGIANIGDFB_BOGIACOMHDP_OFFSET))(this);
		}

		::System::Boolean OOFJPAOIONP(::RPG::GameCore::MissionItemConfigList* a1, ::RPG::GameCore::SelectMissionItemConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + ACGIANIGDFB_OOFJPAOIONP_OFFSET))(this, a1, a2);
		}

		::System::Void MAMKHFAFAFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGIANIGDFB_MAMKHFAFAFG_OFFSET))(this);
		}

	};
