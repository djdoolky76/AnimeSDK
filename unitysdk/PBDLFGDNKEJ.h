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

#define PBDLFGDNKEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC8E8600)
#define PBDLFGDNKEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8E8760)
#define PBDLFGDNKEJ_HNALGDBPDMB_OFFSET UNITYSDK_OFFSET(0xC8E8F10)
#define PBDLFGDNKEJ_IIECMNAACJI_OFFSET UNITYSDK_OFFSET(0xC8E94E0)
#define PBDLFGDNKEJ_INAGMNKGMDE_OFFSET UNITYSDK_OFFSET(0xC8E9760)
#define PBDLFGDNKEJ_LLCDDOBNLBJ_OFFSET UNITYSDK_OFFSET(0xC8E9350)
#define PBDLFGDNKEJ_NCDLAIAFBGP_OFFSET UNITYSDK_OFFSET(0xC8E92C0)
#define PBDLFGDNKEJ_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC8E98A0)
#define PBDLFGDNKEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC8E88A0)
#define PBDLFGDNKEJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC8E9640)
#define PBDLFGDNKEJ_TICK_OFFSET UNITYSDK_OFFSET(0xC8E8FF0)

inline static constexpr unsigned int PBDLFGDNKEJ_TypeDefinitionIndex = 53595;

	class PBDLFGDNKEJ : public ::GCBMADADMDJ
	{
	public:
		::RPG::GameCore::AdvSetAIMoveTo* OFKGLJOAMLD; // 0x30
		::KFELGAIGHAP* KANMJJLKMMI; // 0x38
		::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x40
		::BACCOPOCMPC* IPFNHFDJKKL; // 0x48
		::FOOIINCDBFA* GEPFAIOOOGB; // 0x50
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
