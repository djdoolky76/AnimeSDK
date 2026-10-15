#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/TrackNpcState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BACCOPOCMPC;
class EKFMIDBJDIA;
class GNPOONCFOPI;
namespace RPG::GameCore { class AdvGameplayTrackNpc; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrackNpcModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIEINOHPDJF_AKBIKOKKBFI_OFFSET UNITYSDK_OFFSET(0xBBDB9E0)
#define NIEINOHPDJF_BBHJOMBPJNP_OFFSET UNITYSDK_OFFSET(0xBBDCB10)
#define NIEINOHPDJF_BNLPMEMODPH_OFFSET UNITYSDK_OFFSET(0xBBDB720)
#define NIEINOHPDJF_CTOR_OFFSET UNITYSDK_OFFSET(0xBBDA8D0)
#define NIEINOHPDJF_DFNILIKLHEF_OFFSET UNITYSDK_OFFSET(0xBBDAAF0)
#define NIEINOHPDJF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBDC4C0)
#define NIEINOHPDJF_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0xBBDC080)
#define NIEINOHPDJF_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0xBBDBC60)
#define NIEINOHPDJF_GGNIDGLMHIH_OFFSET UNITYSDK_OFFSET(0xBBDB060)
#define NIEINOHPDJF_HIBJGHDJLJO_OFFSET UNITYSDK_OFFSET(0xBBDC2A0)
#define NIEINOHPDJF_IENGPONLNJK_OFFSET UNITYSDK_OFFSET(0xBBDAEE0)
#define NIEINOHPDJF_LAHDJNMFGFI_OFFSET UNITYSDK_OFFSET(0xBBDCA60)
#define NIEINOHPDJF_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xBBDBF20)
#define NIEINOHPDJF_LNMOCNDILJN_OFFSET UNITYSDK_OFFSET(0xBBDC910)
#define NIEINOHPDJF_LPBLINLOEIG_OFFSET UNITYSDK_OFFSET(0xBBDAC90)
#define NIEINOHPDJF_MLBJHBJPMIE_OFFSET UNITYSDK_OFFSET(0xBBDC6A0)
#define NIEINOHPDJF_MLOENCBABDP_OFFSET UNITYSDK_OFFSET(0xBBDB2E0)
#define NIEINOHPDJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBDB3C0)
#define NIEINOHPDJF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBDB9A0)
#define NIEINOHPDJF_PFDNCIICFHL_OFFSET UNITYSDK_OFFSET(0xBBDADC0)
#define NIEINOHPDJF_TICK_OFFSET UNITYSDK_OFFSET(0xBBDCC80)

inline static constexpr unsigned int NIEINOHPDJF_TypeDefinitionIndex = 52384;

	class NIEINOHPDJF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
		::RPG::GameCore::TrackNpcModule* AIMIFAHKHNI; // 0x20
		::BACCOPOCMPC* NCLHIGHEGHB; // 0x28
		::RPG::GameCore::AdvGameplayTrackNpc* OFKGLJOAMLD; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Collections::Generic::List_1<::GNPOONCFOPI*>* NOGACPBJKBE; // 0x40
		::System::Single PAJHKBAEBGJ; // 0x48
		::UnityEngine::Quaternion OIMCBDGOHOM; // 0x4C
		::RPG::GameCore::TrackNpcState PJGKBIPMMGD; // 0x5C
		::System::Single JMFPJCMKDBN; // 0x60
		::System::Single MMEIBBKDBGO; // 0x64
		::UnityEngine::Vector3 LNKGGAGCNFN; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGameplayTrackNpc* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGameplayTrackNpc*))((::PBYTE)hIl2Cpp + NIEINOHPDJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DFNILIKLHEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_DFNILIKLHEF_OFFSET))(this);
		}

		::System::Void LPBLINLOEIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_LPBLINLOEIG_OFFSET))(this);
		}

		::System::Void PFDNCIICFHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_PFDNCIICFHL_OFFSET))(this);
		}

		::System::Void IENGPONLNJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_IENGPONLNJK_OFFSET))(this);
		}

		::System::Boolean GGNIDGLMHIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_GGNIDGLMHIH_OFFSET))(this);
		}

		::System::Void MLOENCBABDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_MLOENCBABDP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BNLPMEMODPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_BNLPMEMODPH_OFFSET))(this);
		}

		::System::Void AKBIKOKKBFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_AKBIKOKKBFI_OFFSET))(this);
		}

		::System::Void FGFFJBEKHBO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NIEINOHPDJF_FGFFJBEKHBO_OFFSET))(this, a1);
		}

		::System::Void LHJBPEBMKDN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NIEINOHPDJF_LHJBPEBMKDN_OFFSET))(this, a1);
		}

		::System::Void EDBPHODBFCP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NIEINOHPDJF_EDBPHODBFCP_OFFSET))(this, a1);
		}

		::System::Void HIBJGHDJLJO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NIEINOHPDJF_HIBJGHDJLJO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_DISPOSE_OFFSET))(this);
		}

		::System::Void MLBJHBJPMIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_MLBJHBJPMIE_OFFSET))(this);
		}

		::System::Void LNMOCNDILJN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NIEINOHPDJF_LNMOCNDILJN_OFFSET))(this, a1);
		}

		::System::Void LAHDJNMFGFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEINOHPDJF_LAHDJNMFGFI_OFFSET))(this);
		}

		::System::Void BBHJOMBPJNP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIEINOHPDJF_BBHJOMBPJNP_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NIEINOHPDJF_TICK_OFFSET))(this, a1);
		}

	};
