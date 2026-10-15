#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCBMADADMDJ.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BACCOPOCMPC;
class FOOIINCDBFA;
class KFELGAIGHAP;
namespace RPG::GameCore { class AdvSetAIMoveTo; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }

#define PBDLFGDNKEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFDDB00)
#define PBDLFGDNKEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFDDC30)
#define PBDLFGDNKEJ_HNALGDBPDMB_OFFSET UNITYSDK_OFFSET(0xBFDE3F0)
#define PBDLFGDNKEJ_IIECMNAACJI_OFFSET UNITYSDK_OFFSET(0xBFDE990)
#define PBDLFGDNKEJ_INAGMNKGMDE_OFFSET UNITYSDK_OFFSET(0xBFDEC00)
#define PBDLFGDNKEJ_LLCDDOBNLBJ_OFFSET UNITYSDK_OFFSET(0xBFDE800)
#define PBDLFGDNKEJ_NCDLAIAFBGP_OFFSET UNITYSDK_OFFSET(0xBFDE770)
#define PBDLFGDNKEJ_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBFDED40)
#define PBDLFGDNKEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFDDD70)
#define PBDLFGDNKEJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFDEAE0)
#define PBDLFGDNKEJ_TICK_OFFSET UNITYSDK_OFFSET(0xBFDE4D0)

inline static constexpr unsigned int PBDLFGDNKEJ_TypeDefinitionIndex = 52489;

	class PBDLFGDNKEJ : public ::GCBMADADMDJ
	{
	public:
		::RPG::GameCore::AdvSetAIMoveTo* OFKGLJOAMLD; // 0x30
		::FOOIINCDBFA* GEPFAIOOOGB; // 0x38
		::KFELGAIGHAP* KANMJJLKMMI; // 0x40
		::BACCOPOCMPC* IPFNHFDJKKL; // 0x48
		::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x50
		::UnityEngine::Quaternion MGFPKGIOKEN; // 0x58
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0x68
		::System::Boolean FNEJMBKLEIP; // 0x74
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSetAIMoveTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSetAIMoveTo*))((::PBYTE)hIl2Cpp + PBDLFGDNKEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLFGDNKEJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLFGDNKEJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBDLFGDNKEJ_TICK_OFFSET))(this, a1);
		}

		::System::Void LLCDDOBNLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLFGDNKEJ_LLCDDOBNLBJ_OFFSET))(this);
		}

		::System::Void IIECMNAACJI(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + PBDLFGDNKEJ_IIECMNAACJI_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLFGDNKEJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void INAGMNKGMDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDLFGDNKEJ_INAGMNKGMDE_OFFSET))(this);
		}

		::System::Void HNALGDBPDMB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBDLFGDNKEJ_HNALGDBPDMB_OFFSET))(this, a1);
		}

		::System::Void NCDLAIAFBGP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBDLFGDNKEJ_NCDLAIAFBGP_OFFSET))(this, a1);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBDLFGDNKEJ_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
