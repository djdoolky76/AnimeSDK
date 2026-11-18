#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/ChessUIColor.h"
#include "unitysdk/ProtoScript/ChessUIIconType.h"
#include "unitysdk/System/ValueType.h"

#define COFMKFMHGLO_BKIJMKMLBOL_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define COFMKFMHGLO_DFLIGDKOHDB_OFFSET UNITYSDK_OFFSET(0x363D60)
#define COFMKFMHGLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x743040)
#define COFMKFMHGLO_FNPGNMFNBOK_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define COFMKFMHGLO_KFDADDGDEBH_OFFSET UNITYSDK_OFFSET(0x359320)
#define COFMKFMHGLO_MMFCCNEMALA_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define COFMKFMHGLO_NHONGFKKENI_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int COFMKFMHGLO_TypeDefinitionIndex = 51827;

struct alignas(4) COFMKFMHGLO
{
	::ProtoScript::ChessUIColor _FDJPCLPDKBL_k__BackingField; // 0x10
	::ProtoScript::ChessUIIconType _OKEKFKHNNLL_k__BackingField; // 0x14
	::System::Int32 _BHCIOBOJILN_k__BackingField; // 0x18

	/*
	::System::Boolean Equals(::COFMKFMHGLO LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::COFMKFMHGLO))((::PBYTE)hIl2Cpp + COFMKFMHGLO_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::ProtoScript::ChessUIColor KFDADDGDEBH()
	{
		return ((::ProtoScript::ChessUIColor(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMKFMHGLO_KFDADDGDEBH_OFFSET))(this);
	}

	::System::Void MMFCCNEMALA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFMKFMHGLO_MMFCCNEMALA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DFLIGDKOHDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMKFMHGLO_DFLIGDKOHDB_OFFSET))(this);
	}

	::System::Void NHONGFKKENI(::ProtoScript::ChessUIColor EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIColor))((::PBYTE)hIl2Cpp + COFMKFMHGLO_NHONGFKKENI_OFFSET))(this, EGEGIMGMJHN);
	}

	::ProtoScript::ChessUIIconType FNPGNMFNBOK()
	{
		return ((::ProtoScript::ChessUIIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + COFMKFMHGLO_FNPGNMFNBOK_OFFSET))(this);
	}

	::System::Void BKIJMKMLBOL(::ProtoScript::ChessUIIconType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIIconType))((::PBYTE)hIl2Cpp + COFMKFMHGLO_BKIJMKMLBOL_OFFSET))(this, EGEGIMGMJHN);
	}
};
