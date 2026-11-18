#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TriDiceLuckPerformType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class NBJLLOBDKHH;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define EGLLGHMHMNP_ABDFKIDBLGB_OFFSET UNITYSDK_OFFSET(0x10639CE0)
#define EGLLGHMHMNP_ABFLAEAKIGG_OFFSET UNITYSDK_OFFSET(0x10638740)
#define EGLLGHMHMNP_ADJENDPKIBK_OFFSET UNITYSDK_OFFSET(0x1063A280)
#define EGLLGHMHMNP_ADPKCOPNHPI_OFFSET UNITYSDK_OFFSET(0x106389C0)
#define EGLLGHMHMNP_AIAOBIECOHD_OFFSET UNITYSDK_OFFSET(0x1063A1C0)
#define EGLLGHMHMNP_AMFMGPKFEPB_OFFSET UNITYSDK_OFFSET(0x10638790)
#define EGLLGHMHMNP_BKDLLKFNAJO_OFFSET UNITYSDK_OFFSET(0x1063A1A0)
#define EGLLGHMHMNP_COKBCDMMJDJ_OFFSET UNITYSDK_OFFSET(0x10638D30)
#define EGLLGHMHMNP_DGPMAMDJFPB_OFFSET UNITYSDK_OFFSET(0x1063A270)
#define EGLLGHMHMNP_ECPLCEJFGGF_OFFSET UNITYSDK_OFFSET(0x10638720)
#define EGLLGHMHMNP_FEBGMNJCIFP_OFFSET UNITYSDK_OFFSET(0x10639AE0)
#define EGLLGHMHMNP_FHFGGDOHHGA_OFFSET UNITYSDK_OFFSET(0x1063A1E0)
#define EGLLGHMHMNP_GIDNMHIMDJG_OFFSET UNITYSDK_OFFSET(0x106397F0)
#define EGLLGHMHMNP_GJJEKICHEAO_OFFSET UNITYSDK_OFFSET(0x10638A40)
#define EGLLGHMHMNP_GLMNHPFDBMA_OFFSET UNITYSDK_OFFSET(0x1063A1B0)
#define EGLLGHMHMNP_GMELGCKBCHP_OFFSET UNITYSDK_OFFSET(0x10639420)
#define EGLLGHMHMNP_HIPFJOCAKII_OFFSET UNITYSDK_OFFSET(0x106387A0)
#define EGLLGHMHMNP_HMNFEGFBNPO_OFFSET UNITYSDK_OFFSET(0x10638A00)
#define EGLLGHMHMNP_HOEGOPGAPIH_OFFSET UNITYSDK_OFFSET(0x10638770)
#define EGLLGHMHMNP_IIMBJDJAPOF_OFFSET UNITYSDK_OFFSET(0x10639410)
#define EGLLGHMHMNP_ILNLFPBAEHP_OFFSET UNITYSDK_OFFSET(0x10638D10)
#define EGLLGHMHMNP_KJNDMOLPEJB_OFFSET UNITYSDK_OFFSET(0x10638B90)
#define EGLLGHMHMNP_LAEHAINKKAJ_OFFSET UNITYSDK_OFFSET(0x1063A0E0)
#define EGLLGHMHMNP_LFOCLEBDKOJ_OFFSET UNITYSDK_OFFSET(0x10638750)
#define EGLLGHMHMNP_LOENAHIFHLP_OFFSET UNITYSDK_OFFSET(0x10639360)
#define EGLLGHMHMNP_LOOJOBGFNNN_OFFSET UNITYSDK_OFFSET(0x10638C30)
#define EGLLGHMHMNP_LPLAEGEMCJF_OFFSET UNITYSDK_OFFSET(0x10638780)
#define EGLLGHMHMNP_MBMLGNLCOFM_OFFSET UNITYSDK_OFFSET(0x10639E30)
#define EGLLGHMHMNP_MDHPPJGDMBC_OFFSET UNITYSDK_OFFSET(0x10639750)
#define EGLLGHMHMNP_NENCDBBKJBL_OFFSET UNITYSDK_OFFSET(0x1063A1D0)
#define EGLLGHMHMNP_NEOMFEJAFFA_OFFSET UNITYSDK_OFFSET(0x10638B00)
#define EGLLGHMHMNP_NFJDKBDEKMG_OFFSET UNITYSDK_OFFSET(0x10638820)
#define EGLLGHMHMNP_ODNJMLCONDN_OFFSET UNITYSDK_OFFSET(0x10638D20)
#define EGLLGHMHMNP_OGBFAIOCFGE_OFFSET UNITYSDK_OFFSET(0x10638760)
#define EGLLGHMHMNP_OJILKHHMEAF_OFFSET UNITYSDK_OFFSET(0x10638C20)
#define EGLLGHMHMNP_OKIGKICLJPO_OFFSET UNITYSDK_OFFSET(0x1063A050)
#define EGLLGHMHMNP_OLEOCKOJGGM_OFFSET UNITYSDK_OFFSET(0x10639570)
#define EGLLGHMHMNP_ONNGKNEGOCH_OFFSET UNITYSDK_OFFSET(0x106388F0)
#define EGLLGHMHMNP_PCHHPDHAHEF_OFFSET UNITYSDK_OFFSET(0x106387E0)
#define EGLLGHMHMNP__CTOR_OFFSET UNITYSDK_OFFSET(0x10638D40)

inline static constexpr unsigned int EGLLGHMHMNP_TypeDefinitionIndex = 51017;

class EGLLGHMHMNP : public ::System::Object
{
public:
	// static const ::System::String* KKHOLHHBEFM; // 0x0
	// static const ::System::String* IMGIOILDOJM; // 0x0
	// static const ::System::String* INGLDFBBMCK; // 0x0
	// static const ::System::String* KFOGBCBEEBJ; // 0x0
	// static const ::System::String* NBEHJCAIKAE; // 0x0
	::UnityEngine::Camera* _CFPCIGCHOME_k__BackingField; // 0x10
	::Il2CppArray<::UnityEngine::Animator*>* LKKIPKAANKL; // 0x18
	::Il2CppArray<::UnityEngine::GameObject*>* EMFFEPEGJHC; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::TriDiceLuckPerformType, ::System::String*>* NBCNBJKLBPC; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ACJDHOCBNLM; // 0x30
	::UnityEngine::Transform* OAPHFFPMIGD; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* AOCENFKKBGK; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* LLGFDLDKEAN; // 0x48
	::UnityEngine::Transform* PDACHPLBKIE; // 0x50
	::UnityEngine::Vector2 _AKDECPHGEIG_k__BackingField; // 0x58
	::System::Nullable_1<::UnityEngine::Vector2> FNFMMHNHEGH; // 0x60
	::System::Byte _padding0[0x4];
	::System::Boolean _ILBDECCCGDF_k__BackingField; // 0x6C
	::System::Boolean _ANAPANFCDPG_k__BackingField; // 0x6D
	::System::Byte _padding1[0x2];
	::System::Nullable_1<::UnityEngine::Vector3> IEPNKPIDFNC; // 0x70
	::System::Byte _padding2[0x8];
	::System::Nullable_1<::UnityEngine::Vector3> MBJPLBLHMKL; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector2> ECPLCEJFGGF()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_ECPLCEJFGGF_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> ABFLAEAKIGG()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_ABFLAEAKIGG_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> LFOCLEBDKOJ()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_LFOCLEBDKOJ_OFFSET))(this);
	}

	::System::Boolean OGBFAIOCFGE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_OGBFAIOCFGE_OFFSET))(this);
	}

	::System::Void HOEGOPGAPIH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_HOEGOPGAPIH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LPLAEGEMCJF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_LPLAEGEMCJF_OFFSET))(this);
	}

	::System::Void AMFMGPKFEPB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_AMFMGPKFEPB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HIPFJOCAKII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_HIPFJOCAKII_OFFSET))(this);
	}

	::System::Int32 PCHHPDHAHEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_PCHHPDHAHEF_OFFSET))(this);
	}

	::System::String* ONNGKNEGOCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_ONNGKNEGOCH_OFFSET))(this);
	}

	::System::Int32 ADPKCOPNHPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_ADPKCOPNHPI_OFFSET))(this);
	}

	::System::String* HMNFEGFBNPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_HMNFEGFBNPO_OFFSET))(this);
	}

	::System::Single GJJEKICHEAO(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_GJJEKICHEAO_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Single NEOMFEJAFFA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_NEOMFEJAFFA_OFFSET))(this);
	}

	::System::String* KJNDMOLPEJB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_KJNDMOLPEJB_OFFSET))(this);
	}

	::UnityEngine::Transform* OJILKHHMEAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_OJILKHHMEAF_OFFSET))(this);
	}

	::UnityEngine::Vector2 LOOJOBGFNNN()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_LOOJOBGFNNN_OFFSET))(this);
	}

	::UnityEngine::Vector2 ILNLFPBAEHP()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_ILNLFPBAEHP_OFFSET))(this);
	}

	::UnityEngine::Vector2 ODNJMLCONDN()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_ODNJMLCONDN_OFFSET))(this);
	}

	::UnityEngine::Camera* COKBCDMMJDJ()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_COKBCDMMJDJ_OFFSET))(this);
	}

	::System::Void LOENAHIFHLP(::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_LOENAHIFHLP_OFFSET))(this, IAKPGBCAAKM);
	}

	::System::Boolean IIMBJDJAPOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_IIMBJDJAPOF_OFFSET))(this);
	}

	::System::Single OLEOCKOJGGM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_OLEOCKOJGGM_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask MDHPPJGDMBC(::System::Threading::CancellationTokenSource* KHGFAKJKDGG)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_MDHPPJGDMBC_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Void GIDNMHIMDJG(::System::String* GHLIPIDDKFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_GIDNMHIMDJG_OFFSET))(this, GHLIPIDDKFJ);
	}

	::System::Void FEBGMNJCIFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_FEBGMNJCIFP_OFFSET))(this);
	}

	::System::String* ABDFKIDBLGB(::UnityEngine::Animator* ICAAMDMMDDJ)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_ABDFKIDBLGB_OFFSET))(this, ICAAMDMMDDJ);
	}

	::System::Void MBMLGNLCOFM(::System::Single IAKPGBCAAKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_MBMLGNLCOFM_OFFSET))(this, IAKPGBCAAKM);
	}

	::Cysharp::Threading::Tasks::UniTask OKIGKICLJPO()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_OKIGKICLJPO_OFFSET))(this);
	}

	::System::Void LAEHAINKKAJ(::UnityEngine::Vector3 BFBELMDIAHI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_LAEHAINKKAJ_OFFSET))(this, BFBELMDIAHI);
	}

	::System::Void BKDLLKFNAJO(::System::Nullable_1<::UnityEngine::Vector3> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_BKDLLKFNAJO_OFFSET))(this, EGEGIMGMJHN);
	}

	::NBJLLOBDKHH* NFJDKBDEKMG()
	{
		return ((::NBJLLOBDKHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_NFJDKBDEKMG_OFFSET))(this);
	}

	::System::Void GLMNHPFDBMA(::System::Nullable_1<::UnityEngine::Vector3> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_GLMNHPFDBMA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AIAOBIECOHD(::UnityEngine::Camera* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_AIAOBIECOHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NENCDBBKJBL(::System::Nullable_1<::UnityEngine::Vector2> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_NENCDBBKJBL_OFFSET))(this, EGEGIMGMJHN);
	}

	::Cysharp::Threading::Tasks::UniTask FHFGGDOHHGA()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_FHFGGDOHHGA_OFFSET))(this);
	}

	::System::Void DGPMAMDJFPB(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_DGPMAMDJFPB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GMELGCKBCHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_GMELGCKBCHP_OFFSET))(this);
	}

	::System::Void ADJENDPKIBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLGHMHMNP_ADJENDPKIBK_OFFSET))(this);
	}
};
