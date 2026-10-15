#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/System/Object.h"
class APKJLMDEMLI;
class IFBFJDCECML;
class OJOCPEMKKDA;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRaceBuffConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENDEAPMHAOI_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x1C605F70)
#define ENDEAPMHAOI_BMEGLEGIDFA_OFFSET UNITYSDK_OFFSET(0x1C605470)
#define ENDEAPMHAOI_BOIJGAEBGAB_OFFSET UNITYSDK_OFFSET(0x1C6055F0)
#define ENDEAPMHAOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C605500)
#define ENDEAPMHAOI_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x1C6056B0)
#define ENDEAPMHAOI_FNIEMEBGBAC_OFFSET UNITYSDK_OFFSET(0x1C606650)
#define ENDEAPMHAOI_GCCEFMMIJCE_OFFSET UNITYSDK_OFFSET(0x1C6054F0)
#define ENDEAPMHAOI_ILAJIDMNBDB_OFFSET UNITYSDK_OFFSET(0x1C6054E0)
#define ENDEAPMHAOI_JFOFGJCINFA_OFFSET UNITYSDK_OFFSET(0x1C606510)
#define ENDEAPMHAOI_JLGHOJLMPMP_OFFSET UNITYSDK_OFFSET(0x1C606200)
#define ENDEAPMHAOI_MCPPMEAEBKE_OFFSET UNITYSDK_OFFSET(0x1C605670)
#define ENDEAPMHAOI_ONLGLCNJKCF_OFFSET UNITYSDK_OFFSET(0x1C6065F0)
#define ENDEAPMHAOI_OOJBNDPOCLN_OFFSET UNITYSDK_OFFSET(0x1C6059C0)
#define ENDEAPMHAOI_PIGJDJADHAB_OFFSET UNITYSDK_OFFSET(0x1C605630)

	class ENDEAPMHAOI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCoreEventType, ::System::Collections::Generic::List_1<::OJOCPEMKKDA*>*>* EFBHGNCEAEE; // 0x10
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x18
		::RPG::GameCore::CakeRaceBuffConfig* BGPCJNLAFAN; // 0x20
		::System::UInt64 KLOOBEPLAHH; // 0x28
		::System::Int32 DKBABENHHKN; // 0x30
		::System::Void _ctor(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceBuffConfig* a2, ::PBGNKMMDBGD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceBuffConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BMEGLEGIDFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_BMEGLEGIDFA_OFFSET))(this);
		}

		::System::Int32 ILAJIDMNBDB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_ILAJIDMNBDB_OFFSET))(this);
		}

		::RPG::GameCore::CakeRaceBuffConfig* GCCEFMMIJCE()
		{
			return ((::RPG::GameCore::CakeRaceBuffConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_GCCEFMMIJCE_OFFSET))(this);
		}

		::System::Boolean BOIJGAEBGAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_BOIJGAEBGAB_OFFSET))(this);
		}

		::System::Void PIGJDJADHAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_PIGJDJADHAB_OFFSET))(this);
		}

		::System::Void MCPPMEAEBKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_MCPPMEAEBKE_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_EGFCFCBHJJP_OFFSET))(this);
		}

		::System::Void AALCFBOGFKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_AALCFBOGFKP_OFFSET))(this);
		}

		::System::Void JFOFGJCINFA(::RPG::GameCore::CakeRaceBuffConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceBuffConfig*))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_JFOFGJCINFA_OFFSET))(this, a1);
		}

		::System::Boolean ONLGLCNJKCF(::RPG::GameCore::CakeRaceCoreEventType a1, ::APKJLMDEMLI* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::APKJLMDEMLI*))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_ONLGLCNJKCF_OFFSET))(this, a1, a2);
		}

		::System::Void FNIEMEBGBAC(::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* a1, ::APKJLMDEMLI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>*, ::APKJLMDEMLI*))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_FNIEMEBGBAC_OFFSET))(this, a1, a2);
		}

		::System::Void OOJBNDPOCLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_OOJBNDPOCLN_OFFSET))(this);
		}

		::System::Void JLGHOJLMPMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDEAPMHAOI_JLGHOJLMPMP_OFFSET))(this);
		}

	};
