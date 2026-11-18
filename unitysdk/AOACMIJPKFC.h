#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MNKNMBKLOKK.h"
#include "unitysdk/MoleMole/Config/AnimMoveState.h"
#include "unitysdk/MoleMole/Config/RunStateType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BJJFELFBJDD;
class GEEECNOIBNN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOACMIJPKFC_AECEFPNBILA_OFFSET UNITYSDK_OFFSET(0x18542220)
#define AOACMIJPKFC_AFNJKAFABLG_OFFSET UNITYSDK_OFFSET(0x18542210)
#define AOACMIJPKFC_BMOCOJFFOKO_OFFSET UNITYSDK_OFFSET(0x185422B0)
#define AOACMIJPKFC_CNNHGNACOCC_OFFSET UNITYSDK_OFFSET(0x185423D0)
#define AOACMIJPKFC_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x18542410)
#define AOACMIJPKFC_FCHPONEODNB_OFFSET UNITYSDK_OFFSET(0x185422F0)
#define AOACMIJPKFC_GAOLCICPGIA_OFFSET UNITYSDK_OFFSET(0x18541E10)
#define AOACMIJPKFC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x18541FA0)
#define AOACMIJPKFC_HCGACIMIFNK_OFFSET UNITYSDK_OFFSET(0x185422D0)
#define AOACMIJPKFC_IBADNLLPDCP_OFFSET UNITYSDK_OFFSET(0x18542450)
#define AOACMIJPKFC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x18542090)
#define AOACMIJPKFC_KPHNBJOAJKD_OFFSET UNITYSDK_OFFSET(0x18542120)
#define AOACMIJPKFC_LMDEICLKHEF_OFFSET UNITYSDK_OFFSET(0x185423E0)
#define AOACMIJPKFC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x18542340)
#define AOACMIJPKFC_MOJIFCMELGI_OFFSET UNITYSDK_OFFSET(0x18541740)
#define AOACMIJPKFC_NEHAOGLEDJC_OFFSET UNITYSDK_OFFSET(0x18541ED0)
#define AOACMIJPKFC_NMFLHMGJAJO_OFFSET UNITYSDK_OFFSET(0x185423F0)
#define AOACMIJPKFC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18540ED0)
#define AOACMIJPKFC_PDODKPKPOGP_OFFSET UNITYSDK_OFFSET(0x18541EE0)
#define AOACMIJPKFC_PNDIGKFHACA_OFFSET UNITYSDK_OFFSET(0x185422C0)
#define AOACMIJPKFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18541780)
#define AOACMIJPKFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18541FF0)
#define AOACMIJPKFC__CTOR_OFFSET UNITYSDK_OFFSET(0x18542070)

inline static constexpr unsigned int AOACMIJPKFC_TypeDefinitionIndex = 58045;

class AOACMIJPKFC : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Single AOMDNKMOOKK; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x2A; // 0x0
	::BJJFELFBJDD* PNFCNNNEDOK; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::GEEECNOIBNN*>* ECGNNMHEKKK; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* JJFMFMFHGOH; // 0x58
	::System::String* IJIMHOPHAML; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::RunStateType>* GFFKKBGBAAP; // 0x68
	::System::String* PFFPCBAAHHH; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::RunStateType>*>* JHMAMGPDDFB; // 0x78
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AnimMoveState, ::System::Collections::Generic::List_1<::System::String*>*>* AKFFKKMAMAM; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FNGDJCNDPKB; // 0x88
	::System::Single LKJIKAHDKII; // 0x90
	::MNKNMBKLOKK JOKONOPEIOP; // 0x94
	::System::Single HEAOCINMDEO; // 0x98
	::System::Single JIMHJJFOFBI; // 0x9C
	::System::Nullable_1<::System::Single> DEJNPFADOAO; // 0xA0
	::UnityEngine::Vector2 EAKGONGGKJP; // 0xA8
	::System::Single JFEKFMCKELJ; // 0xB0
	::System::Boolean ACLCOOLGKND; // 0xB4
	::System::Boolean ODBGBAOJNCI; // 0xB5
	::System::Boolean IHCMHGACFFA; // 0xB6
	::System::Boolean OCFEGLENNAK; // 0xB7
	::MoleMole::Config::RunStateType PFCIHPMEOOC; // 0xB8
	::System::Boolean BLHPFOLGCGL; // 0xBC
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 ILPKHPNDOKP; // 0xC0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOACMIJPKFC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_ONCLEAN_OFFSET))(this);
	}

	::System::Void MOJIFCMELGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_MOJIFCMELGI_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_GETCLASSID_OFFSET))(this);
	}

	static ::AOACMIJPKFC* JFDOOELFAOA()
	{
		return ((::AOACMIJPKFC*(*)())((::PBYTE)hIl2Cpp + AOACMIJPKFC_JFDOOELFAOA_OFFSET))();
	}

	::System::Single GAOLCICPGIA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_GAOLCICPGIA_OFFSET))(this);
	}

	::System::Nullable_1<::MNKNMBKLOKK> KPHNBJOAJKD()
	{
		return ((::System::Nullable_1<::MNKNMBKLOKK>(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_KPHNBJOAJKD_OFFSET))(this);
	}

	::System::Void AFNJKAFABLG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AOACMIJPKFC_AFNJKAFABLG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AECEFPNBILA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_AECEFPNBILA_OFFSET))(this);
	}

	::UnityEngine::Vector2 BMOCOJFFOKO()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_BMOCOJFFOKO_OFFSET))(this);
	}

	::MNKNMBKLOKK PDODKPKPOGP()
	{
		return ((::MNKNMBKLOKK(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_PDODKPKPOGP_OFFSET))(this);
	}

	::System::Single PNDIGKFHACA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_PNDIGKFHACA_OFFSET))(this);
	}

	::System::Boolean NEHAOGLEDJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_NEHAOGLEDJC_OFFSET))(this);
	}

	::UnityEngine::Vector3 HCGACIMIFNK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_HCGACIMIFNK_OFFSET))(this);
	}

	::MoleMole::Config::AnimMoveState FCHPONEODNB()
	{
		return ((::MoleMole::Config::AnimMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_FCHPONEODNB_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void CNNHGNACOCC(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AOACMIJPKFC_CNNHGNACOCC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LMDEICLKHEF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AOACMIJPKFC_LMDEICLKHEF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NMFLHMGJAJO(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AOACMIJPKFC_NMFLHMGJAJO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Single IBADNLLPDCP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AOACMIJPKFC_IBADNLLPDCP_OFFSET))(this);
	}
};
