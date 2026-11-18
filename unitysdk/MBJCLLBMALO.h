#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Nullable_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBJCLLBMALO_CKNJGNLKBKI_OFFSET UNITYSDK_OFFSET(0xD444180)
#define MBJCLLBMALO_DAIEIMOHEBP_OFFSET UNITYSDK_OFFSET(0xD4445B0)
#define MBJCLLBMALO_FOEJJBACCCA_OFFSET UNITYSDK_OFFSET(0xD444580)
#define MBJCLLBMALO_GEFLONCAIPN_OFFSET UNITYSDK_OFFSET(0xD444590)
#define MBJCLLBMALO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xD443F60)
#define MBJCLLBMALO_GMDAKAOFDAE_OFFSET UNITYSDK_OFFSET(0xD4445A0)
#define MBJCLLBMALO_HFLHIEOELPH_OFFSET UNITYSDK_OFFSET(0xD444400)
#define MBJCLLBMALO_IEFMNKPLCMB_OFFSET UNITYSDK_OFFSET(0xD444640)
#define MBJCLLBMALO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xD4445C0)
#define MBJCLLBMALO_JJOPLCIJHMJ_OFFSET UNITYSDK_OFFSET(0xD444560)
#define MBJCLLBMALO_JLEGHNGEBOG_OFFSET UNITYSDK_OFFSET(0xD444650)
#define MBJCLLBMALO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xD444360)
#define MBJCLLBMALO_NHJLBLAFHCI_OFFSET UNITYSDK_OFFSET(0xD4443F0)
#define MBJCLLBMALO_OAAMDNDHGJM_OFFSET UNITYSDK_OFFSET(0xD4442C0)
#define MBJCLLBMALO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xD444030)
#define MBJCLLBMALO__CCTOR_OFFSET UNITYSDK_OFFSET(0xD443FB0)
#define MBJCLLBMALO__CTOR_OFFSET UNITYSDK_OFFSET(0xD4441C0)

inline static constexpr unsigned int MBJCLLBMALO_TypeDefinitionIndex = 89993;

class MBJCLLBMALO
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x22E; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* LGKPNJLFEOJ; // 0x58
	::System::Boolean OKGEGMHLDBB; // 0x60
	::System::Boolean _IHNMJBLKMGM_k__BackingField; // 0x61
	::System::Boolean _BHAFCNGHNJF_k__BackingField; // 0x62
	::System::Byte _padding0[0x1];
	::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> LCHDADGOPGA; // 0x64
	::System::Byte _padding1[0x8];
	::MoleMole::HollowChessboard::HollowCell KIJEOOMELGM; // 0x74
	::MoleMole::HollowChessboard::HollowChessboardUID ENLGMKLJMGF; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBJCLLBMALO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCLLBMALO__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCLLBMALO_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCLLBMALO_ONCLEAN_OFFSET))(this);
	}

	::System::Boolean CKNJGNLKBKI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCLLBMALO_CKNJGNLKBKI_OFFSET))(this);
	}

	::System::Void OAAMDNDHGJM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBJCLLBMALO_OAAMDNDHGJM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCLLBMALO_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean NHJLBLAFHCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCLLBMALO_NHJLBLAFHCI_OFFSET))(this);
	}

	::System::Void HFLHIEOELPH(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MBJCLLBMALO_HFLHIEOELPH_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::HollowCell JJOPLCIJHMJ()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCLLBMALO_JJOPLCIJHMJ_OFFSET))(this);
	}

	::System::Boolean FOEJJBACCCA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCLLBMALO_FOEJJBACCCA_OFFSET))(this);
	}

	::System::Void GEFLONCAIPN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBJCLLBMALO_GEFLONCAIPN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GMDAKAOFDAE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBJCLLBMALO_GMDAKAOFDAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DAIEIMOHEBP(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MBJCLLBMALO_DAIEIMOHEBP_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::MBJCLLBMALO* JFDOOELFAOA()
	{
		return ((::MBJCLLBMALO*(*)())((::PBYTE)hIl2Cpp + MBJCLLBMALO_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean IEFMNKPLCMB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCLLBMALO_IEFMNKPLCMB_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell JLEGHNGEBOG()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJCLLBMALO_JLEGHNGEBOG_OFFSET))(this);
	}
};
