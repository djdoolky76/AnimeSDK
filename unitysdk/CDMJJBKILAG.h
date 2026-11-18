#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFEFMAIKHFE.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"

#define CDMJJBKILAG_DPFLFHEBKJM_OFFSET UNITYSDK_OFFSET(0x16944420)
#define CDMJJBKILAG_EGBAGIODDCI_OFFSET UNITYSDK_OFFSET(0x169444C0)
#define CDMJJBKILAG_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16944200)
#define CDMJJBKILAG_HJHMEECAMAP_OFFSET UNITYSDK_OFFSET(0x169443F0)
#define CDMJJBKILAG_HMMDBGENDPO_OFFSET UNITYSDK_OFFSET(0x16944410)
#define CDMJJBKILAG_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16944370)
#define CDMJJBKILAG_KAPEFPIKDGK_OFFSET UNITYSDK_OFFSET(0x169444D0)
#define CDMJJBKILAG_LAFDAPPOBGL_OFFSET UNITYSDK_OFFSET(0x16944400)
#define CDMJJBKILAG_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16944430)
#define CDMJJBKILAG_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x169442D0)
#define CDMJJBKILAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x16944250)
#define CDMJJBKILAG__CTOR_OFFSET UNITYSDK_OFFSET(0x16944360)

inline static constexpr unsigned int CDMJJBKILAG_TypeDefinitionIndex = 75502;

class CDMJJBKILAG : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x22A; // 0x0
	::BFEFMAIKHFE HGLAGFDPKNF; // 0x50
	::System::UInt32 _ILABGDJGKBA_k__BackingField; // 0x60
	::ProtoScript::HollowEntityType _FMCMEFLMGCG_k__BackingField; // 0x64
	::System::UInt32 _HJNNNIIKNDP_k__BackingField; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDMJJBKILAG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMJJBKILAG__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMJJBKILAG_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMJJBKILAG_ONCLEAN_OFFSET))(this);
	}

	static ::CDMJJBKILAG* JFDOOELFAOA()
	{
		return ((::CDMJJBKILAG*(*)())((::PBYTE)hIl2Cpp + CDMJJBKILAG_JFDOOELFAOA_OFFSET))();
	}

	::System::Void HJHMEECAMAP(::ProtoScript::HollowEntityType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::HollowEntityType))((::PBYTE)hIl2Cpp + CDMJJBKILAG_HJHMEECAMAP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 LAFDAPPOBGL()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMJJBKILAG_LAFDAPPOBGL_OFFSET))(this);
	}

	::System::Void HMMDBGENDPO(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDMJJBKILAG_HMMDBGENDPO_OFFSET))(this, EGEGIMGMJHN);
	}

	::ProtoScript::HollowEntityType DPFLFHEBKJM()
	{
		return ((::ProtoScript::HollowEntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMJJBKILAG_DPFLFHEBKJM_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMJJBKILAG_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::UInt32 EGBAGIODDCI()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMJJBKILAG_EGBAGIODDCI_OFFSET))(this);
	}

	::System::Void KAPEFPIKDGK(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDMJJBKILAG_KAPEFPIKDGK_OFFSET))(this, EGEGIMGMJHN);
	}
};
