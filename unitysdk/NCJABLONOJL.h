#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System { class String; }

#define NCJABLONOJL_ADOIBKOOODE_OFFSET UNITYSDK_OFFSET(0x13135540)
#define NCJABLONOJL_ALLFDMMFPOI_OFFSET UNITYSDK_OFFSET(0x13135530)
#define NCJABLONOJL_HMJHKNAKGBL_OFFSET UNITYSDK_OFFSET(0x13135550)
#define NCJABLONOJL_HPCINLAKKEK_OFFSET UNITYSDK_OFFSET(0x13135570)
#define NCJABLONOJL_ICMNMMPPFHL_OFFSET UNITYSDK_OFFSET(0x13135510)
#define NCJABLONOJL_IJHLGENEFHA_OFFSET UNITYSDK_OFFSET(0x13135470)
#define NCJABLONOJL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x131354A0)
#define NCJABLONOJL_LDLGPGOPOEF_OFFSET UNITYSDK_OFFSET(0x13135520)
#define NCJABLONOJL_NHNILCJMMHJ_OFFSET UNITYSDK_OFFSET(0x13135480)
#define NCJABLONOJL_PAANDFCIMMN_OFFSET UNITYSDK_OFFSET(0x13135580)
#define NCJABLONOJL_PDBAKPEIMEJ_OFFSET UNITYSDK_OFFSET(0x13135560)
#define NCJABLONOJL__CTOR_OFFSET UNITYSDK_OFFSET(0x13135460)

inline static constexpr unsigned int NCJABLONOJL_TypeDefinitionIndex = 54509;

class NCJABLONOJL : public ::IGKOFMFKNNO
{
public:
	::System::String* _BAOKPIMKBMD_k__BackingField; // 0x10
	::MoleMole::HollowChessboard::HollowCell _GGHNDEBKAPO_k__BackingField; // 0x18
	::System::Boolean _BFIGCNDOBEL_k__BackingField; // 0x24
	::System::Boolean _KALONKEDEHG_k__BackingField; // 0x25
	::System::Boolean _BFPPONLDOAJ_k__BackingField; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJABLONOJL__CTOR_OFFSET))(this);
	}

	::System::Boolean IJHLGENEFHA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJABLONOJL_IJHLGENEFHA_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell NHNILCJMMHJ()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJABLONOJL_NHNILCJMMHJ_OFFSET))(this);
	}

	static ::NCJABLONOJL* JFDOOELFAOA()
	{
		return ((::NCJABLONOJL*(*)())((::PBYTE)hIl2Cpp + NCJABLONOJL_JFDOOELFAOA_OFFSET))();
	}

	::System::Void ICMNMMPPFHL(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NCJABLONOJL_ICMNMMPPFHL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LDLGPGOPOEF(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCJABLONOJL_LDLGPGOPOEF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ALLFDMMFPOI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCJABLONOJL_ALLFDMMFPOI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean ADOIBKOOODE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJABLONOJL_ADOIBKOOODE_OFFSET))(this);
	}

	::System::Boolean HMJHKNAKGBL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJABLONOJL_HMJHKNAKGBL_OFFSET))(this);
	}

	::System::Void PDBAKPEIMEJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCJABLONOJL_PDBAKPEIMEJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HPCINLAKKEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCJABLONOJL_HPCINLAKKEK_OFFSET))(this);
	}

	::System::Void PAANDFCIMMN(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NCJABLONOJL_PAANDFCIMMN_OFFSET))(this, EGEGIMGMJHN);
	}
};
