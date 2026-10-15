#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLeverSwitchState.h"
#include "unitysdk/ECBMJEJHHJN.h"
#include "unitysdk/HMANCBGKOGI.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }

#define BGGMCIMHLDH_AJDDEIMADMO_OFFSET UNITYSDK_OFFSET(0xB186730)
#define BGGMCIMHLDH_BIEMGHNFCOK_OFFSET UNITYSDK_OFFSET(0xB186110)
#define BGGMCIMHLDH_CBHLLBAPHOA_OFFSET UNITYSDK_OFFSET(0xB1879D0)
#define BGGMCIMHLDH_CMBCMHPAKIL_OFFSET UNITYSDK_OFFSET(0xB187070)
#define BGGMCIMHLDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB1852A0)
#define BGGMCIMHLDH_DDNBKJBOCFN_OFFSET UNITYSDK_OFFSET(0xB186E20)
#define BGGMCIMHLDH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB185500)
#define BGGMCIMHLDH_GDBEANCOIJI_OFFSET UNITYSDK_OFFSET(0xB186930)
#define BGGMCIMHLDH_HMAGFBCNNNA_OFFSET UNITYSDK_OFFSET(0xB185870)
#define BGGMCIMHLDH_ILDEHJPBANP_OFFSET UNITYSDK_OFFSET(0xB1880A0)
#define BGGMCIMHLDH_INFEEDFCGCF_OFFSET UNITYSDK_OFFSET(0xB187C00)
#define BGGMCIMHLDH_JEAALPKPJGH_OFFSET UNITYSDK_OFFSET(0xB187D60)
#define BGGMCIMHLDH_JFJLEHOEPIG_OFFSET UNITYSDK_OFFSET(0xB188720)
#define BGGMCIMHLDH_KEFFCMJFJOE_OFFSET UNITYSDK_OFFSET(0xB1883F0)
#define BGGMCIMHLDH_LPOHAMMDECH_OFFSET UNITYSDK_OFFSET(0xB1877F0)
#define BGGMCIMHLDH_MLCLFLPBPBL_OFFSET UNITYSDK_OFFSET(0xB185670)
#define BGGMCIMHLDH_OBHIAOEGOCB_OFFSET UNITYSDK_OFFSET(0xB187630)
#define BGGMCIMHLDH__CREATEINTERACTTRIGGER_OFFSET UNITYSDK_OFFSET(0xB185B30)
#define BGGMCIMHLDH__CREATEPROPMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0xB186240)
#define BGGMCIMHLDH__LOGERROR_OFFSET UNITYSDK_OFFSET(0xB185AD0)
#define BGGMCIMHLDH__ONLEVELVARCHANGE_OFFSET UNITYSDK_OFFSET(0xB188640)
#define BGGMCIMHLDH__PLAYERINTERACTCHANGELEVERSWITCHSTATE_OFFSET UNITYSDK_OFFSET(0xB1861B0)
#define BGGMCIMHLDH__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB1854A0)

	class BGGMCIMHLDH
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x40
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x48
		// static const ::System::String* JIHBCIDKMJK; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGMCIMHLDH__TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_EXECUTE_OFFSET))(this);
		}

		::System::Void _LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH__LOGERROR_OFFSET))(this, a1);
		}

		::System::Void _CreateInteractTrigger(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH__CREATEINTERACTTRIGGER_OFFSET))(this, a1);
		}

		::System::Void _PlayerInteractChangeLeverSwitchState(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH__PLAYERINTERACTCHANGELEVERSWITCHSTATE_OFFSET))(this, a1);
		}

		::System::Void _CreatePropMoveTrigger(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH__CREATEPROPMOVETRIGGER_OFFSET))(this, a1);
		}

		::System::Void AJDDEIMADMO(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_AJDDEIMADMO_OFFSET))(this, a1, a2);
		}

		::System::Void OBHIAOEGOCB(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_OBHIAOEGOCB_OFFSET))(this, a1, a2);
		}

		::System::Boolean BIEMGHNFCOK(::RPG::GameCore::LevelTriggerInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelTriggerInfo*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_BIEMGHNFCOK_OFFSET))(this, a1);
		}

		::System::Void DDNBKJBOCFN(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_DDNBKJBOCFN_OFFSET))(this, a1, a2);
		}

		::System::Void CMBCMHPAKIL(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_CMBCMHPAKIL_OFFSET))(this, a1, a2);
		}

		::System::Void CBHLLBAPHOA(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_CBHLLBAPHOA_OFFSET))(this, a1, a2);
		}

		::System::Void HMAGFBCNNNA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_HMAGFBCNNNA_OFFSET))(this, a1);
		}

		::System::Boolean ILDEHJPBANP(::HIOEAKHGILF* a1, ::ECBMJEJHHJN a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::ECBMJEJHHJN))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_ILDEHJPBANP_OFFSET))(this, a1, a2);
		}

		::System::Void LPOHAMMDECH(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_LPOHAMMDECH_OFFSET))(this, a1, a2);
		}

		::System::Void GDBEANCOIJI(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_GDBEANCOIJI_OFFSET))(this, a1, a2);
		}

		::System::Void MLCLFLPBPBL(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_MLCLFLPBPBL_OFFSET))(this, a1);
		}

		::System::Void KEFFCMJFJOE(::HIOEAKHGILF* a1, ::HMANCBGKOGI a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HMANCBGKOGI, ::System::Boolean))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_KEFFCMJFJOE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnLevelVarChange(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + BGGMCIMHLDH__ONLEVELVARCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void INFEEDFCGCF(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimLeverSwitchState a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimLeverSwitchState, ::System::Boolean))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_INFEEDFCGCF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JEAALPKPJGH(::HIOEAKHGILF* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_JEAALPKPJGH_OFFSET))(this, a1, a2);
		}

		::System::Void JFJLEHOEPIG(::HIOEAKHGILF* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BGGMCIMHLDH_JFJLEHOEPIG_OFFSET))(this, a1, a2);
		}

	};
