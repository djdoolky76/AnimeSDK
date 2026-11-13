#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GILFCOGNOCB;
namespace RPG::Client { class RoadRashGameModifier_PlayerLaunchAcceleration; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define KJHMLHKIMOM_ADCIIMOINIP_OFFSET UNITYSDK_OFFSET(0x19F17860)
#define KJHMLHKIMOM_BHKAFPDLBJJ_OFFSET UNITYSDK_OFFSET(0x19F17390)
#define KJHMLHKIMOM_CBCJMFAEJNB_OFFSET UNITYSDK_OFFSET(0x19F17BF0)
#define KJHMLHKIMOM_CDGKBLKMCNF_OFFSET UNITYSDK_OFFSET(0x19F17480)
#define KJHMLHKIMOM_CTOR_OFFSET UNITYSDK_OFFSET(0x19F170D0)
#define KJHMLHKIMOM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F170E0)
#define KJHMLHKIMOM_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x19F18850)
#define KJHMLHKIMOM_GGJOFDJKPBB_OFFSET UNITYSDK_OFFSET(0x19F17150)
#define KJHMLHKIMOM_GLNJHBCPPLJ_OFFSET UNITYSDK_OFFSET(0x19F17570)
#define KJHMLHKIMOM_IKPLKACGGJC_OFFSET UNITYSDK_OFFSET(0x19F183C0)
#define KJHMLHKIMOM_JBMIBHNEKHE_OFFSET UNITYSDK_OFFSET(0x19F17F90)
#define KJHMLHKIMOM_KEJCFLLPHNM_OFFSET UNITYSDK_OFFSET(0x19F18090)
#define KJHMLHKIMOM_KJPKOFEOPAJ_OFFSET UNITYSDK_OFFSET(0x19F176B0)
#define KJHMLHKIMOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19F177A0)
#define KJHMLHKIMOM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19F18620)
#define KJHMLHKIMOM_PAGIADGEOCC_OFFSET UNITYSDK_OFFSET(0x19F17EA0)
#define KJHMLHKIMOM_TICK_OFFSET UNITYSDK_OFFSET(0x19F186A0)

inline static constexpr unsigned int KJHMLHKIMOM_TypeDefinitionIndex = 59682;

	class KJHMLHKIMOM : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::GILFCOGNOCB* OOIHDCFJFID; // 0x28
		::System::Boolean AHLCIOJCJKP; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 POJKBKKANNI; // 0x34
		::System::UInt32 LMCOFPEMHPJ; // 0x38
		::System::Boolean IJDFEKKHOJF; // 0x3C
		::System::Boolean HDEDIPKAMGK; // 0x3D
		::System::Boolean DNJGIOKGNBO; // 0x3E
		::System::Boolean NBNAKPDCBAE; // 0x3F
		::System::Single BPAIDCADMDO; // 0x40
		// static const ::System::Object BNHPELCGLGJ; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration*))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_GETCONFIG_OFFSET))(this);
		}

		::System::Void ADCIIMOINIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_ADCIIMOINIP_OFFSET))(this);
		}

		::System::Void JBMIBHNEKHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_JBMIBHNEKHE_OFFSET))(this);
		}

		::System::Void CBCJMFAEJNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_CBCJMFAEJNB_OFFSET))(this);
		}

		::System::Void GGJOFDJKPBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_GGJOFDJKPBB_OFFSET))(this);
		}

		::System::Void CDGKBLKMCNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_CDGKBLKMCNF_OFFSET))(this);
		}

		::System::Void PAGIADGEOCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_PAGIADGEOCC_OFFSET))(this);
		}

		::System::Void KEJCFLLPHNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_KEJCFLLPHNM_OFFSET))(this);
		}

		::System::Void GLNJHBCPPLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_GLNJHBCPPLJ_OFFSET))(this);
		}

		::System::Void IKPLKACGGJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_IKPLKACGGJC_OFFSET))(this);
		}

		::System::Void KJPKOFEOPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_KJPKOFEOPAJ_OFFSET))(this);
		}

		::System::Void BHKAFPDLBJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM_BHKAFPDLBJJ_OFFSET))(this);
		}

	};
