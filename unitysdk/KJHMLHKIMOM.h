#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GILFCOGNOCB;
namespace RPG::Client { class RoadRashGameModifier_PlayerLaunchAcceleration; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define KJHMLHKIMOM_ADCIIMOINIP_OFFSET UNITYSDK_OFFSET(0xB457410)
#define KJHMLHKIMOM_BHKAFPDLBJJ_OFFSET UNITYSDK_OFFSET(0xB456F40)
#define KJHMLHKIMOM_CBCJMFAEJNB_OFFSET UNITYSDK_OFFSET(0xB457790)
#define KJHMLHKIMOM_CDGKBLKMCNF_OFFSET UNITYSDK_OFFSET(0xB457030)
#define KJHMLHKIMOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB456C80)
#define KJHMLHKIMOM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB456C90)
#define KJHMLHKIMOM_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xB4583F0)
#define KJHMLHKIMOM_GGJOFDJKPBB_OFFSET UNITYSDK_OFFSET(0xB456D00)
#define KJHMLHKIMOM_GLNJHBCPPLJ_OFFSET UNITYSDK_OFFSET(0xB457120)
#define KJHMLHKIMOM_IKPLKACGGJC_OFFSET UNITYSDK_OFFSET(0xB457F60)
#define KJHMLHKIMOM_JBMIBHNEKHE_OFFSET UNITYSDK_OFFSET(0xB457B30)
#define KJHMLHKIMOM_KEJCFLLPHNM_OFFSET UNITYSDK_OFFSET(0xB457C30)
#define KJHMLHKIMOM_KJPKOFEOPAJ_OFFSET UNITYSDK_OFFSET(0xB457260)
#define KJHMLHKIMOM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB457350)
#define KJHMLHKIMOM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4581C0)
#define KJHMLHKIMOM_PAGIADGEOCC_OFFSET UNITYSDK_OFFSET(0xB457A40)
#define KJHMLHKIMOM_TICK_OFFSET UNITYSDK_OFFSET(0xB458240)

inline static constexpr unsigned int KJHMLHKIMOM_TypeDefinitionIndex = 58426;

	class KJHMLHKIMOM : public ::GELIALJDFBL
	{
	public:
		::GILFCOGNOCB* OOIHDCFJFID; // 0x18
		::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::UInt32 LMCOFPEMHPJ; // 0x30
		::System::Boolean HDEDIPKAMGK; // 0x34
		::System::Boolean NBNAKPDCBAE; // 0x35
		::System::Byte _padding0[0x2];
		::System::Single BPAIDCADMDO; // 0x38
		::System::Int32 POJKBKKANNI; // 0x3C
		::System::Boolean DNJGIOKGNBO; // 0x40
		::System::Boolean AHLCIOJCJKP; // 0x41
		::System::Boolean IJDFEKKHOJF; // 0x42
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
