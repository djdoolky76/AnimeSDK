#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOGFCKILHMN.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AIKGHHJKNCE;
class PPOFAPFJHJB;
namespace Share { class CVector2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ENHLJIPHLPC_AAIHPDHBKND_OFFSET UNITYSDK_OFFSET(0x16162660)
#define ENHLJIPHLPC_CACODINGMJB_OFFSET UNITYSDK_OFFSET(0x16162A50)
#define ENHLJIPHLPC_CFGNHCPJGPN_OFFSET UNITYSDK_OFFSET(0x161647D0)
#define ENHLJIPHLPC_DHKCKLFGGDN_OFFSET UNITYSDK_OFFSET(0x161629E0)
#define ENHLJIPHLPC_IEJHMALIMHE_OFFSET UNITYSDK_OFFSET(0x16164DB0)
#define ENHLJIPHLPC_JMGDLBOJKML_OFFSET UNITYSDK_OFFSET(0x16162950)
#define ENHLJIPHLPC_KOLCCIGOOHD_OFFSET UNITYSDK_OFFSET(0x16164740)
#define ENHLJIPHLPC_LDCMPNDLEOL_OFFSET UNITYSDK_OFFSET(0x16164BA0)
#define ENHLJIPHLPC_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x161629A0)
#define ENHLJIPHLPC_PJHEHCCJMHP_1_OFFSET UNITYSDK_OFFSET(0x16164D00)
#define ENHLJIPHLPC_PJHEHCCJMHP_OFFSET UNITYSDK_OFFSET(0x16164B30)
#define ENHLJIPHLPC__CTOR_OFFSET UNITYSDK_OFFSET(0x161625E0)

inline static constexpr unsigned int ENHLJIPHLPC_TypeDefinitionIndex = 52839;

class ENHLJIPHLPC : public ::JOGFCKILHMN
{
public:
	::PPOFAPFJHJB* DJPBHDPLMAJ; // 0x18
	::System::Single KHCFPMBCANL; // 0x20
	::System::Single FIKOBEONKCJ; // 0x24
	::System::Single MCFIJHIPNLE; // 0x28
	::System::Single CAJIIENBDBE; // 0x2C
	::System::Single COLKDIMPGHB; // 0x30
	::System::Single JBLCLPFGMJK; // 0x34
	::MoleMole::Vector2Int HCGMJKLGGPN; // 0x38

	::System::Void _ctor(::System::Single JJJFIICLFEB, ::System::Single JDEGMEPICAI, ::PPOFAPFJHJB* DHJFLLEPJBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::PPOFAPFJHJB*))((::PBYTE)hIl2Cpp + ENHLJIPHLPC__CTOR_OFFSET))(this, JJJFIICLFEB, JDEGMEPICAI, DHJFLLEPJBM);
	}

	::System::Void JMGDLBOJKML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHLJIPHLPC_JMGDLBOJKML_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHLJIPHLPC_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void DHKCKLFGGDN(::Il2CppArray<::UnityEngine::Vector3>* KEFNLMJKHNJ, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* PILELGPBCLL, ::System::Func_2<::AIKGHHJKNCE*, ::System::Boolean>* KANJODNFFOI)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::Func_2<::AIKGHHJKNCE*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ENHLJIPHLPC_DHKCKLFGGDN_OFFSET))(this, KEFNLMJKHNJ, PILELGPBCLL, KANJODNFFOI);
	}

	::System::Void KOLCCIGOOHD(::Il2CppArray<::UnityEngine::Vector3>* AIOPEMOFBBM, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* PILELGPBCLL, ::Share::CVector2* GCPHGJDIMFF, ::System::Func_2<::AIKGHHJKNCE*, ::System::Boolean>* KANJODNFFOI)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*, ::Share::CVector2*, ::System::Func_2<::AIKGHHJKNCE*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ENHLJIPHLPC_KOLCCIGOOHD_OFFSET))(this, AIOPEMOFBBM, PILELGPBCLL, GCPHGJDIMFF, KANJODNFFOI);
	}

	::System::Void CFGNHCPJGPN(::Il2CppArray<::UnityEngine::Vector3>* KEFNLMJKHNJ, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>& PILELGPBCLL, ::Share::CVector2* KMGPDJOCCGE)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>&, ::Share::CVector2*))((::PBYTE)hIl2Cpp + ENHLJIPHLPC_CFGNHCPJGPN_OFFSET))(this, KEFNLMJKHNJ, PILELGPBCLL, KMGPDJOCCGE);
	}

	::MoleMole::HollowChessboard::HollowCell LDCMPNDLEOL(::UnityEngine::Vector2 CAJNIPBNIOJ)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ENHLJIPHLPC_LDCMPNDLEOL_OFFSET))(this, CAJNIPBNIOJ);
	}

	::System::Void CACODINGMJB(::Il2CppArray<::UnityEngine::Vector3>* KEFNLMJKHNJ, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* PILELGPBCLL, ::Share::CVector2* KMGPDJOCCGE, ::System::Func_2<::AIKGHHJKNCE*, ::System::Boolean>* KANJODNFFOI)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>*, ::Share::CVector2*, ::System::Func_2<::AIKGHHJKNCE*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ENHLJIPHLPC_CACODINGMJB_OFFSET))(this, KEFNLMJKHNJ, PILELGPBCLL, KMGPDJOCCGE, KANJODNFFOI);
	}

	::System::Boolean PJHEHCCJMHP(::MoleMole::Vector2Int OHOGDOMNHNK, ::MoleMole::HollowChessboard::HollowCell& EKPEBNCLJPM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + ENHLJIPHLPC_PJHEHCCJMHP_OFFSET))(this, OHOGDOMNHNK, EKPEBNCLJPM);
	}

	::System::Void AAIHPDHBKND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHLJIPHLPC_AAIHPDHBKND_OFFSET))(this);
	}

	::System::Void IEJHMALIMHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHLJIPHLPC_IEJHMALIMHE_OFFSET))(this);
	}

	::System::Boolean PJHEHCCJMHP_1(::UnityEngine::Vector2 OHOGDOMNHNK, ::MoleMole::HollowChessboard::HollowCell& EKPEBNCLJPM)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::MoleMole::HollowChessboard::HollowCell&))((::PBYTE)hIl2Cpp + ENHLJIPHLPC_PJHEHCCJMHP_1_OFFSET))(this, OHOGDOMNHNK, EKPEBNCLJPM);
	}
};
