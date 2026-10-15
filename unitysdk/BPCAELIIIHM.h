#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GILFCOGNOCB;
class MFIMCKDKDKG;
namespace RPG::Client { class RoadRashGameModifier_SpeedBoost; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPCAELIIIHM_BCBBLHFPAKE_OFFSET UNITYSDK_OFFSET(0xC19C630)
#define BPCAELIIIHM_BHKAFPDLBJJ_OFFSET UNITYSDK_OFFSET(0xC19CB00)
#define BPCAELIIIHM_CCEHFDDKECK_OFFSET UNITYSDK_OFFSET(0xC19DD90)
#define BPCAELIIIHM_CDGKBLKMCNF_OFFSET UNITYSDK_OFFSET(0xC19CB80)
#define BPCAELIIIHM_CTOR_OFFSET UNITYSDK_OFFSET(0xC19C4F0)
#define BPCAELIIIHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC19C560)
#define BPCAELIIIHM_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xC19DD50)
#define BPCAELIIIHM_GLNJHBCPPLJ_OFFSET UNITYSDK_OFFSET(0xC19CC10)
#define BPCAELIIIHM_IKPLKACGGJC_OFFSET UNITYSDK_OFFSET(0xC19D920)
#define BPCAELIIIHM_JBMIBHNEKHE_OFFSET UNITYSDK_OFFSET(0xC19D4C0)
#define BPCAELIIIHM_KEJCFLLPHNM_OFFSET UNITYSDK_OFFSET(0xC19D5D0)
#define BPCAELIIIHM_KJPKOFEOPAJ_OFFSET UNITYSDK_OFFSET(0xC19CCF0)
#define BPCAELIIIHM_MOAEJACMFKH_OFFSET UNITYSDK_OFFSET(0xC19CE50)
#define BPCAELIIIHM_OBFLJLBFDMO_OFFSET UNITYSDK_OFFSET(0xC19D110)
#define BPCAELIIIHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC19CD80)
#define BPCAELIIIHM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC19DBB0)
#define BPCAELIIIHM_PAGIADGEOCC_OFFSET UNITYSDK_OFFSET(0xC19D420)
#define BPCAELIIIHM_PBFEEAJMMHB_OFFSET UNITYSDK_OFFSET(0xC19DB00)
#define BPCAELIIIHM_TICK_OFFSET UNITYSDK_OFFSET(0xC19DC90)

inline static constexpr unsigned int BPCAELIIIHM_TypeDefinitionIndex = 58431;

	class BPCAELIIIHM : public ::GELIALJDFBL
	{
	public:
		::GILFCOGNOCB* OOIHDCFJFID; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* FPBJLPPJIKL; // 0x28
		::RPG::Client::RoadRashGameModifier_SpeedBoost* OFKGLJOAMLD; // 0x30
		::System::Int32 POJKBKKANNI; // 0x38
		::System::Single BPAIDCADMDO; // 0x3C
		::System::UInt32 LMCOFPEMHPJ; // 0x40
		::System::Boolean IJDFEKKHOJF; // 0x44
		::System::Boolean HDEDIPKAMGK; // 0x45
		::System::Boolean AHLCIOJCJKP; // 0x46
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_SpeedBoost* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_SpeedBoost*))((::PBYTE)hIl2Cpp + BPCAELIIIHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPCAELIIIHM_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_GETCONFIG_OFFSET))(this);
		}

		::MFIMCKDKDKG* CCEHFDDKECK()
		{
			return ((::MFIMCKDKDKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_CCEHFDDKECK_OFFSET))(this);
		}

		::System::Void MOAEJACMFKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_MOAEJACMFKH_OFFSET))(this);
		}

		::System::Void BCBBLHFPAKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_BCBBLHFPAKE_OFFSET))(this);
		}

		::System::Void OBFLJLBFDMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_OBFLJLBFDMO_OFFSET))(this);
		}

		::System::Void JBMIBHNEKHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_JBMIBHNEKHE_OFFSET))(this);
		}

		::System::Void CDGKBLKMCNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_CDGKBLKMCNF_OFFSET))(this);
		}

		::System::Void KEJCFLLPHNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_KEJCFLLPHNM_OFFSET))(this);
		}

		::System::Void GLNJHBCPPLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_GLNJHBCPPLJ_OFFSET))(this);
		}

		::System::Void IKPLKACGGJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_IKPLKACGGJC_OFFSET))(this);
		}

		::System::Void KJPKOFEOPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_KJPKOFEOPAJ_OFFSET))(this);
		}

		::System::Void PAGIADGEOCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_PAGIADGEOCC_OFFSET))(this);
		}

		::System::Void BHKAFPDLBJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_BHKAFPDLBJJ_OFFSET))(this);
		}

		::System::Void PBFEEAJMMHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCAELIIIHM_PBFEEAJMMHB_OFFSET))(this);
		}

	};
