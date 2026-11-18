#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJAGNIDEICF;
namespace MoleMole::Config { class ConfigEntitySkill; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKIKIALIBKM_CCLNPMDBHOP_OFFSET UNITYSDK_OFFSET(0x16B845F0)
#define NKIKIALIBKM_DLOKEFMMFCK_OFFSET UNITYSDK_OFFSET(0x16B84360)
#define NKIKIALIBKM_ENMAONNOMMB_OFFSET UNITYSDK_OFFSET(0x16B843D0)
#define NKIKIALIBKM_JFKIFFBIELO_OFFSET UNITYSDK_OFFSET(0x16B846D0)
#define NKIKIALIBKM_MCIPNLGPDGC_OFFSET UNITYSDK_OFFSET(0x16B846E0)
#define NKIKIALIBKM_MLHBAPPLKAH_OFFSET UNITYSDK_OFFSET(0x16B84490)
#define NKIKIALIBKM_PFDCECOMPJC_OFFSET UNITYSDK_OFFSET(0x16B84660)
#define NKIKIALIBKM_PFNCAHEBAAA_OFFSET UNITYSDK_OFFSET(0x16B845E0)
#define NKIKIALIBKM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16B84550)
#define NKIKIALIBKM__CTOR_OFFSET UNITYSDK_OFFSET(0x16B84340)

inline static constexpr unsigned int NKIKIALIBKM_TypeDefinitionIndex = 80937;

class NKIKIALIBKM : public ::System::Object
{
public:
	::System::String* GDBLKPMFPPE; // 0x10
	::System::String* BJICFLNOCFH; // 0x18
	::MoleMole::Config::ConfigEntitySkill* DFMKILICPFB; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* KJPFANKOBHH; // 0x28
	::System::String* AADJPMHPNAH; // 0x30
	::System::Single AMJNKJAGEKG; // 0x38
	::System::Int32 JOCADLHHOPJ; // 0x3C
	::System::Single EKDCJCCFBNG; // 0x40
	::System::Single HODMCHACHFA; // 0x44
	::System::Int32 COHBJNGHKCP; // 0x48
	::System::Single IIMIAJBOMDN; // 0x4C
	::System::Single EIGAHBIADIF; // 0x50
	::System::Single BOELBOPMDDK; // 0x54
	::System::Int32 EKOAPJIGFCA; // 0x58
	::System::Int32 KLICFAKNNEN; // 0x5C
	::System::Single EGFILKAIHKK; // 0x60
	::System::Single CFAAIBLGCJA; // 0x64
	::System::Int32 DJAFKDGDIJF; // 0x68
	::System::Single OPJPFAJIMFG; // 0x6C
	::System::Single FBABMAMCEFL; // 0x70
	::System::Single CMKMHMBOJCI; // 0x74
	::System::Single IDMFIFOILJM; // 0x78
	::System::Single BABHJEAEBJJ; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKIALIBKM__CTOR_OFFSET))(this);
	}

	::System::Void DLOKEFMMFCK(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKIKIALIBKM_DLOKEFMMFCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ENMAONNOMMB(::DJAGNIDEICF* NHJLFIBAPMA)
	{
		return ((::System::Int32(*)(::PVOID, ::DJAGNIDEICF*))((::PBYTE)hIl2Cpp + NKIKIALIBKM_ENMAONNOMMB_OFFSET))(this, NHJLFIBAPMA);
	}

	static ::NKIKIALIBKM* MLHBAPPLKAH()
	{
		return ((::NKIKIALIBKM*(*)())((::PBYTE)hIl2Cpp + NKIKIALIBKM_MLHBAPPLKAH_OFFSET))();
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKIALIBKM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Single PFNCAHEBAAA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKIALIBKM_PFNCAHEBAAA_OFFSET))(this);
	}

	::System::Void CCLNPMDBHOP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKIKIALIBKM_CCLNPMDBHOP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PFDCECOMPJC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKIKIALIBKM_PFDCECOMPJC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single JFKIFFBIELO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKIALIBKM_JFKIFFBIELO_OFFSET))(this);
	}

	::System::Single MCIPNLGPDGC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKIALIBKM_MCIPNLGPDGC_OFFSET))(this);
	}
};
