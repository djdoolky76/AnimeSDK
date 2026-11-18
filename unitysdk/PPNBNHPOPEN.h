#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOFANGAFNMF.h"
#include "unitysdk/ProtoScript/ChessUIColor.h"
#include "unitysdk/ProtoScript/ChessUIControlType.h"
#include "unitysdk/ProtoScript/ChessUIIconType.h"
#include "unitysdk/System/ValueType.h"

#define PPNBNHPOPEN_BGFGILACAAN_OFFSET UNITYSDK_OFFSET(0x374CE0)
#define PPNBNHPOPEN_BKIJMKMLBOL_OFFSET UNITYSDK_OFFSET(0x5D0520)
#define PPNBNHPOPEN_DFLIGDKOHDB_OFFSET UNITYSDK_OFFSET(0x359B10)
#define PPNBNHPOPEN_DOJMCOLBDNG_OFFSET UNITYSDK_OFFSET(0x374AF0)
#define PPNBNHPOPEN_EOCKAJONHDI_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define PPNBNHPOPEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x750900)
#define PPNBNHPOPEN_FNPGNMFNBOK_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define PPNBNHPOPEN_FPFCIBLGNOL_OFFSET UNITYSDK_OFFSET(0x359320)
#define PPNBNHPOPEN_GPBONOIIIEK_OFFSET UNITYSDK_OFFSET(0x7509F0)
#define PPNBNHPOPEN_HGDADHBFEFN_OFFSET UNITYSDK_OFFSET(0x3844F0)
#define PPNBNHPOPEN_IGLOCAACDNB_OFFSET UNITYSDK_OFFSET(0x374A70)
#define PPNBNHPOPEN_KFDADDGDEBH_OFFSET UNITYSDK_OFFSET(0x363D60)
#define PPNBNHPOPEN_LGOBIGODEAC_OFFSET UNITYSDK_OFFSET(0x3581C0)
#define PPNBNHPOPEN_LHEJAANIIEC_OFFSET UNITYSDK_OFFSET(0x359150)
#define PPNBNHPOPEN_MFBGMBOIFBB_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define PPNBNHPOPEN_MJBLKNPFHPN_OFFSET UNITYSDK_OFFSET(0x384460)
#define PPNBNHPOPEN_MMFCCNEMALA_OFFSET UNITYSDK_OFFSET(0x57AAC0)
#define PPNBNHPOPEN_NEJFLPDGIOB_OFFSET UNITYSDK_OFFSET(0x3844E0)
#define PPNBNHPOPEN_NHONGFKKENI_OFFSET UNITYSDK_OFFSET(0x3A45D0)

inline static constexpr unsigned int PPNBNHPOPEN_TypeDefinitionIndex = 45088;

struct alignas(4) PPNBNHPOPEN
{
	::HOFANGAFNMF _GKMPGGAGBOC_k__BackingField; // 0x10
	::ProtoScript::ChessUIControlType _BILHMKBAGEK_k__BackingField; // 0x14
	::ProtoScript::ChessUIColor _FDJPCLPDKBL_k__BackingField; // 0x18
	::ProtoScript::ChessUIIconType _OKEKFKHNNLL_k__BackingField; // 0x1C
	::System::Int32 _BHCIOBOJILN_k__BackingField; // 0x20
	::ProtoScript::ChessUIControlType _EKEBFKCPPJC_k__BackingField; // 0x24
	::ProtoScript::ChessUIColor _GHOFKAFBFAD_k__BackingField; // 0x28
	::ProtoScript::ChessUIIconType _IEJLGMIMLEH_k__BackingField; // 0x2C
	::System::Int32 _CFEOFNMJHAI_k__BackingField; // 0x30

	/*
	::System::Boolean Equals(::PPNBNHPOPEN LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::PPNBNHPOPEN))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::ProtoScript::ChessUIIconType FNPGNMFNBOK()
	{
		return ((::ProtoScript::ChessUIIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_FNPGNMFNBOK_OFFSET))(this);
	}

	::ProtoScript::ChessUIControlType MFBGMBOIFBB()
	{
		return ((::ProtoScript::ChessUIControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_MFBGMBOIFBB_OFFSET))(this);
	}

	::System::Void GPBONOIIIEK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_GPBONOIIIEK_OFFSET))(this, EGEGIMGMJHN);
	}

	::ProtoScript::ChessUIColor KFDADDGDEBH()
	{
		return ((::ProtoScript::ChessUIColor(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_KFDADDGDEBH_OFFSET))(this);
	}

	::System::Int32 DFLIGDKOHDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_DFLIGDKOHDB_OFFSET))(this);
	}

	::System::Void BKIJMKMLBOL(::ProtoScript::ChessUIIconType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIIconType))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_BKIJMKMLBOL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BGFGILACAAN(::ProtoScript::ChessUIColor EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIColor))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_BGFGILACAAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::ProtoScript::ChessUIControlType LGOBIGODEAC()
	{
		return ((::ProtoScript::ChessUIControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_LGOBIGODEAC_OFFSET))(this);
	}

	::System::Void DOJMCOLBDNG(::ProtoScript::ChessUIControlType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIControlType))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_DOJMCOLBDNG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HGDADHBFEFN(::ProtoScript::ChessUIIconType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIIconType))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_HGDADHBFEFN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EOCKAJONHDI(::ProtoScript::ChessUIControlType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIControlType))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_EOCKAJONHDI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NHONGFKKENI(::ProtoScript::ChessUIColor EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIColor))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_NHONGFKKENI_OFFSET))(this, EGEGIMGMJHN);
	}

	::ProtoScript::ChessUIIconType NEJFLPDGIOB()
	{
		return ((::ProtoScript::ChessUIIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_NEJFLPDGIOB_OFFSET))(this);
	}

	::HOFANGAFNMF FPFCIBLGNOL()
	{
		return ((::HOFANGAFNMF(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_FPFCIBLGNOL_OFFSET))(this);
	}

	::ProtoScript::ChessUIColor IGLOCAACDNB()
	{
		return ((::ProtoScript::ChessUIColor(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_IGLOCAACDNB_OFFSET))(this);
	}

	::System::Void LHEJAANIIEC(::HOFANGAFNMF EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HOFANGAFNMF))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_LHEJAANIIEC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MMFCCNEMALA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_MMFCCNEMALA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MJBLKNPFHPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNBNHPOPEN_MJBLKNPFHPN_OFFSET))(this);
	}
};
