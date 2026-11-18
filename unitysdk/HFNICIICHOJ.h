#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIBABOJGDFE.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define HFNICIICHOJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15DA62F0)
#define HFNICIICHOJ_HJDKMCEOLAB_OFFSET UNITYSDK_OFFSET(0x15DA64D0)
#define HFNICIICHOJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15DA65B0)
#define HFNICIICHOJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15DA64E0)
#define HFNICIICHOJ_MJHCDADMPKG_OFFSET UNITYSDK_OFFSET(0x15DA6580)
#define HFNICIICHOJ_OAMFMFPFLNP_OFFSET UNITYSDK_OFFSET(0x15DA65A0)
#define HFNICIICHOJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15DA63C0)
#define HFNICIICHOJ_PEMEHEOHOEC_OFFSET UNITYSDK_OFFSET(0x15DA6570)
#define HFNICIICHOJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DA6340)
#define HFNICIICHOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA6460)

inline static constexpr unsigned int HFNICIICHOJ_TypeDefinitionIndex = 71771;

class HFNICIICHOJ : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x236; // 0x0
	::BIBABOJGDFE _BNOJEEJPKKO_k__BackingField; // 0x50
	::MoleMole::HollowChessboard::HollowCell _NPEOKAJMNKL_k__BackingField; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFNICIICHOJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNICIICHOJ__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNICIICHOJ_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNICIICHOJ_ONCLEAN_OFFSET))(this);
	}

	::BIBABOJGDFE HJDKMCEOLAB()
	{
		return ((::BIBABOJGDFE(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNICIICHOJ_HJDKMCEOLAB_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNICIICHOJ_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void PEMEHEOHOEC(::BIBABOJGDFE EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BIBABOJGDFE))((::PBYTE)hIl2Cpp + HFNICIICHOJ_PEMEHEOHOEC_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::HollowCell MJHCDADMPKG()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNICIICHOJ_MJHCDADMPKG_OFFSET))(this);
	}

	::System::Void OAMFMFPFLNP(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + HFNICIICHOJ_OAMFMFPFLNP_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::HFNICIICHOJ* JFDOOELFAOA()
	{
		return ((::HFNICIICHOJ*(*)())((::PBYTE)hIl2Cpp + HFNICIICHOJ_JFDOOELFAOA_OFFSET))();
	}
};
