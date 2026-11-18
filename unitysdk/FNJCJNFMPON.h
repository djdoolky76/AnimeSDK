#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ENodeEffect.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ENodeType.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/System/Object.h"

#define FNJCJNFMPON_ANLLEGOFFLP_OFFSET UNITYSDK_OFFSET(0x165C0610)
#define FNJCJNFMPON_CGHJIKJIHKD_OFFSET UNITYSDK_OFFSET(0x165C0630)
#define FNJCJNFMPON_DCKAFIDLDHN_OFFSET UNITYSDK_OFFSET(0x165C05F0)
#define FNJCJNFMPON_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x165C05B0)
#define FNJCJNFMPON_GBHNBFEEMFH_OFFSET UNITYSDK_OFFSET(0x165C05C0)
#define FNJCJNFMPON_GLAPKIOPEJN_OFFSET UNITYSDK_OFFSET(0x165C0620)
#define FNJCJNFMPON_HMCOBEHEKFK_OFFSET UNITYSDK_OFFSET(0x165C0600)
#define FNJCJNFMPON_JBADOIBDNLB_OFFSET UNITYSDK_OFFSET(0x165C05E0)
#define FNJCJNFMPON_LGBELBMAMHN_OFFSET UNITYSDK_OFFSET(0x165C0670)
#define FNJCJNFMPON_PBIKDDIDDGI_OFFSET UNITYSDK_OFFSET(0x165C0650)
#define FNJCJNFMPON_PHCCGNMCKPK_OFFSET UNITYSDK_OFFSET(0x165C0660)
#define FNJCJNFMPON_PPPOOGCADMH_OFFSET UNITYSDK_OFFSET(0x165C0640)
#define FNJCJNFMPON__CTOR_OFFSET UNITYSDK_OFFSET(0x165C05D0)

inline static constexpr unsigned int FNJCJNFMPON_TypeDefinitionIndex = 89511;

class FNJCJNFMPON : public ::System::Object
{
public:
	::MoleMole::MiniUIGame::SimpleParkour::ENodeType _LHFEHHOOCAC_k__BackingField; // 0x10
	::MoleMole::MiniUIGame::SimpleParkour::ENodeEffect _BNLKPHKPCCO_k__BackingField; // 0x14
	::MoleMole::MiniUIGame::SimpleParkour::ETrackType _KIDHKCOCGOK_k__BackingField; // 0x18
	::System::Boolean _DIOBPDFLCJI_k__BackingField; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Single _PFCHEMCMMFC_k__BackingField; // 0x20
	::System::Single _JHCPABMDOJN_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJCJNFMPON__CTOR_OFFSET))(this);
	}

	::System::Single FJOLPGBLBBH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJCJNFMPON_FJOLPGBLBBH_OFFSET))(this);
	}

	::System::Void GBHNBFEEMFH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNJCJNFMPON_GBHNBFEEMFH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single JBADOIBDNLB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJCJNFMPON_JBADOIBDNLB_OFFSET))(this);
	}

	::System::Void DCKAFIDLDHN(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FNJCJNFMPON_DCKAFIDLDHN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HMCOBEHEKFK(::MoleMole::MiniUIGame::SimpleParkour::ETrackType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniUIGame::SimpleParkour::ETrackType))((::PBYTE)hIl2Cpp + FNJCJNFMPON_HMCOBEHEKFK_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::MiniUIGame::SimpleParkour::ETrackType ANLLEGOFFLP()
	{
		return ((::MoleMole::MiniUIGame::SimpleParkour::ETrackType(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJCJNFMPON_ANLLEGOFFLP_OFFSET))(this);
	}

	::System::Void GLAPKIOPEJN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNJCJNFMPON_GLAPKIOPEJN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CGHJIKJIHKD(::MoleMole::MiniUIGame::SimpleParkour::ENodeType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniUIGame::SimpleParkour::ENodeType))((::PBYTE)hIl2Cpp + FNJCJNFMPON_CGHJIKJIHKD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PPPOOGCADMH(::MoleMole::MiniUIGame::SimpleParkour::ENodeEffect EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniUIGame::SimpleParkour::ENodeEffect))((::PBYTE)hIl2Cpp + FNJCJNFMPON_PPPOOGCADMH_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::MiniUIGame::SimpleParkour::ENodeType PBIKDDIDDGI()
	{
		return ((::MoleMole::MiniUIGame::SimpleParkour::ENodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJCJNFMPON_PBIKDDIDDGI_OFFSET))(this);
	}

	::System::Boolean PHCCGNMCKPK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJCJNFMPON_PHCCGNMCKPK_OFFSET))(this);
	}

	::MoleMole::MiniUIGame::SimpleParkour::ENodeEffect LGBELBMAMHN()
	{
		return ((::MoleMole::MiniUIGame::SimpleParkour::ENodeEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJCJNFMPON_LGBELBMAMHN_OFFSET))(this);
	}
};
