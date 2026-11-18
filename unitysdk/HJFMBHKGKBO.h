#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNIMEBJJNNP.h"
#include "unitysdk/ProtoScript/ChessUIControlType.h"
#include "unitysdk/System/ValueType.h"

#define HJFMBHKGKBO_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define HJFMBHKGKBO_DFIBDGKNBMP_OFFSET UNITYSDK_OFFSET(0x5D0520)
#define HJFMBHKGKBO_DFLIGDKOHDB_OFFSET UNITYSDK_OFFSET(0x363D60)
#define HJFMBHKGKBO_EOCKAJONHDI_OFFSET UNITYSDK_OFFSET(0x359150)
#define HJFMBHKGKBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x796220)
#define HJFMBHKGKBO_HHBOFBOJDPL_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define HJFMBHKGKBO_LENDBLJPMMO_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define HJFMBHKGKBO_MFBGMBOIFBB_OFFSET UNITYSDK_OFFSET(0x359320)
#define HJFMBHKGKBO_MMFCCNEMALA_OFFSET UNITYSDK_OFFSET(0x3A45D0)

inline static constexpr unsigned int HJFMBHKGKBO_TypeDefinitionIndex = 85611;

struct alignas(4) HJFMBHKGKBO
{
	::ProtoScript::ChessUIControlType _BILHMKBAGEK_k__BackingField; // 0x10
	::LNIMEBJJNNP _CLBENCIKPLJ_k__BackingField; // 0x14
	::System::Int32 _BHCIOBOJILN_k__BackingField; // 0x18
	::System::Int32 _HBLEIHCPMMP_k__BackingField; // 0x1C

	/*
	::System::Boolean Equals(::HJFMBHKGKBO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HJFMBHKGKBO))((::PBYTE)hIl2Cpp + HJFMBHKGKBO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::LNIMEBJJNNP LENDBLJPMMO()
	{
		return ((::LNIMEBJJNNP(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFMBHKGKBO_LENDBLJPMMO_OFFSET))(this);
	}

	::System::Int32 DFLIGDKOHDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFMBHKGKBO_DFLIGDKOHDB_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFMBHKGKBO_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Void HHBOFBOJDPL(::LNIMEBJJNNP EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LNIMEBJJNNP))((::PBYTE)hIl2Cpp + HJFMBHKGKBO_HHBOFBOJDPL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EOCKAJONHDI(::ProtoScript::ChessUIControlType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIControlType))((::PBYTE)hIl2Cpp + HJFMBHKGKBO_EOCKAJONHDI_OFFSET))(this, EGEGIMGMJHN);
	}

	::ProtoScript::ChessUIControlType MFBGMBOIFBB()
	{
		return ((::ProtoScript::ChessUIControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + HJFMBHKGKBO_MFBGMBOIFBB_OFFSET))(this);
	}

	::System::Void MMFCCNEMALA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJFMBHKGKBO_MMFCCNEMALA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DFIBDGKNBMP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJFMBHKGKBO_DFIBDGKNBMP_OFFSET))(this, EGEGIMGMJHN);
	}
};
