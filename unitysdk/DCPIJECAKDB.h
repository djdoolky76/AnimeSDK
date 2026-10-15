#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class SelectMissionItem; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DCPIJECAKDB_BOGIACOMHDP_OFFSET UNITYSDK_OFFSET(0xE24E6B0)
#define DCPIJECAKDB_CTOR_OFFSET UNITYSDK_OFFSET(0xE24CF90)
#define DCPIJECAKDB_DHMJLAKNIBJ_OFFSET UNITYSDK_OFFSET(0xE24E4F0)
#define DCPIJECAKDB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE24D0F0)
#define DCPIJECAKDB_EGMFENLJEAI_OFFSET UNITYSDK_OFFSET(0xE24D970)
#define DCPIJECAKDB_JPNHJFKPKPM_OFFSET UNITYSDK_OFFSET(0xE24DF00)
#define DCPIJECAKDB_LEPONDILPNO_OFFSET UNITYSDK_OFFSET(0xE24DFF0)
#define DCPIJECAKDB_MAMKHFAFAFG_OFFSET UNITYSDK_OFFSET(0xE24E760)
#define DCPIJECAKDB_NGNEJKDJKAJ_OFFSET UNITYSDK_OFFSET(0xE24E0C0)
#define DCPIJECAKDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE24D400)
#define DCPIJECAKDB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE24D6F0)
#define DCPIJECAKDB_OOFJPAOIONP_OFFSET UNITYSDK_OFFSET(0xE24DCC0)
#define DCPIJECAKDB_PDDHJJBHHHK_OFFSET UNITYSDK_OFFSET(0xE24E440)
#define DCPIJECAKDB_PHKMKFJLCCI_OFFSET UNITYSDK_OFFSET(0xE24D5B0)
#define DCPIJECAKDB_TICK_OFFSET UNITYSDK_OFFSET(0xE24D830)

inline static constexpr unsigned int DCPIJECAKDB_TypeDefinitionIndex = 53212;

	class DCPIJECAKDB : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* IKNPCLDDCDI; // 0x18
		::KFELGAIGHAP* JOABCNLPPGI; // 0x20
		::KFELGAIGHAP* LEPBEGLNCDE; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::GameCore::SelectMissionItem* OFKGLJOAMLD; // 0x38
		::KFELGAIGHAP* BEHIGGIDIIK; // 0x40
		::RPG::GameCore::MissionItemConfigList* ENLBIHNPGOD; // 0x48
		// static const ::System::String* PAEPCIMJPGM; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SelectMissionItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SelectMissionItem*))((::PBYTE)hIl2Cpp + DCPIJECAKDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCPIJECAKDB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCPIJECAKDB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCPIJECAKDB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCPIJECAKDB_TICK_OFFSET))(this, a1);
		}

		::System::Void EGMFENLJEAI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCPIJECAKDB_EGMFENLJEAI_OFFSET))(this, a1);
		}

		::System::Void NGNEJKDJKAJ(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + DCPIJECAKDB_NGNEJKDJKAJ_OFFSET))(this, a1, a2);
		}

		::System::Void JPNHJFKPKPM(::RPG::GameCore::SelectMissionItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + DCPIJECAKDB_JPNHJFKPKPM_OFFSET))(this, a1);
		}

		::System::Void DHMJLAKNIBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCPIJECAKDB_DHMJLAKNIBJ_OFFSET))(this, a1);
		}

		::System::Void PDDHJJBHHHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCPIJECAKDB_PDDHJJBHHHK_OFFSET))(this);
		}

		::System::Void LEPONDILPNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCPIJECAKDB_LEPONDILPNO_OFFSET))(this);
		}

		::System::Void BOGIACOMHDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCPIJECAKDB_BOGIACOMHDP_OFFSET))(this);
		}

		::System::Void PHKMKFJLCCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCPIJECAKDB_PHKMKFJLCCI_OFFSET))(this);
		}

		::System::Boolean OOFJPAOIONP(::RPG::GameCore::MissionItemConfigList* a1, ::RPG::GameCore::SelectMissionItemConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + DCPIJECAKDB_OOFJPAOIONP_OFFSET))(this, a1, a2);
		}

		::System::Void MAMKHFAFAFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCPIJECAKDB_MAMKHFAFAFG_OFFSET))(this);
		}

	};
