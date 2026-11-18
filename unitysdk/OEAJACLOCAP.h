#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"
#include "unitysdk/ProtoScript/ChessUIControlType.h"

namespace System { class String; }

#define OEAJACLOCAP_AFDOLHBINHO_OFFSET UNITYSDK_OFFSET(0x114E9B50)
#define OEAJACLOCAP_BJACBMEHNKD_OFFSET UNITYSDK_OFFSET(0x114E9AD0)
#define OEAJACLOCAP_BPLKBPDFIDM_OFFSET UNITYSDK_OFFSET(0x114E9AB0)
#define OEAJACLOCAP_EDBMCLELHLK_OFFSET UNITYSDK_OFFSET(0x114E9AC0)
#define OEAJACLOCAP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x114E9AE0)
#define OEAJACLOCAP_MJHALOPDJDO_OFFSET UNITYSDK_OFFSET(0x114E9B60)
#define OEAJACLOCAP_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x114E9B70)
#define OEAJACLOCAP__CTOR_OFFSET UNITYSDK_OFFSET(0x114E9AA0)

inline static constexpr unsigned int OEAJACLOCAP_TypeDefinitionIndex = 53666;

class OEAJACLOCAP : public ::IGKOFMFKNNO
{
public:
	::System::String* _IBEDOHPILNE_k__BackingField; // 0x10
	::ProtoScript::ChessUIControlType _MMJHGBIJCMD_k__BackingField; // 0x18
	::System::Int32 _KHNJFPMPDGC_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAJACLOCAP__CTOR_OFFSET))(this);
	}

	::ProtoScript::ChessUIControlType BPLKBPDFIDM()
	{
		return ((::ProtoScript::ChessUIControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAJACLOCAP_BPLKBPDFIDM_OFFSET))(this);
	}

	::System::Void EDBMCLELHLK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEAJACLOCAP_EDBMCLELHLK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 BJACBMEHNKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAJACLOCAP_BJACBMEHNKD_OFFSET))(this);
	}

	static ::OEAJACLOCAP* JFDOOELFAOA()
	{
		return ((::OEAJACLOCAP*(*)())((::PBYTE)hIl2Cpp + OEAJACLOCAP_JFDOOELFAOA_OFFSET))();
	}

	::System::Void AFDOLHBINHO(::ProtoScript::ChessUIControlType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::ProtoScript::ChessUIControlType))((::PBYTE)hIl2Cpp + OEAJACLOCAP_AFDOLHBINHO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MJHALOPDJDO(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OEAJACLOCAP_MJHALOPDJDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PBFKHLEHIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAJACLOCAP_PBFKHLEHIGG_OFFSET))(this);
	}
};
