#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGKOFMFKNNO.h"
#include "unitysdk/MONPLKNPGBI.h"

#define EHIKJIHANOB_DLPIIEJGHDG_OFFSET UNITYSDK_OFFSET(0x16BE2DC0)
#define EHIKJIHANOB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16BE2DE0)
#define EHIKJIHANOB_JHLBGEJLPFL_OFFSET UNITYSDK_OFFSET(0x16BE2DD0)
#define EHIKJIHANOB__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE2DB0)

inline static constexpr unsigned int EHIKJIHANOB_TypeDefinitionIndex = 72253;

class EHIKJIHANOB : public ::IGKOFMFKNNO
{
public:
	::MONPLKNPGBI _FGOBMNDOCFM_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIKJIHANOB__CTOR_OFFSET))(this);
	}

	::System::Void DLPIIEJGHDG(::MONPLKNPGBI EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MONPLKNPGBI))((::PBYTE)hIl2Cpp + EHIKJIHANOB_DLPIIEJGHDG_OFFSET))(this, EGEGIMGMJHN);
	}

	::MONPLKNPGBI JHLBGEJLPFL()
	{
		return ((::MONPLKNPGBI(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIKJIHANOB_JHLBGEJLPFL_OFFSET))(this);
	}

	static ::EHIKJIHANOB* JFDOOELFAOA()
	{
		return ((::EHIKJIHANOB*(*)())((::PBYTE)hIl2Cpp + EHIKJIHANOB_JFDOOELFAOA_OFFSET))();
	}
};
