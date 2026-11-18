#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class GEOIPGDJMNO;

#define KECPOHEKKCJ_DHJJDGGPCPJ_OFFSET UNITYSDK_OFFSET(0x7E8E60)
#define KECPOHEKKCJ_GCCCHPAGPIB_OFFSET UNITYSDK_OFFSET(0x7E8E80)
#define KECPOHEKKCJ_GNOGCAJIBEL_OFFSET UNITYSDK_OFFSET(0x7E8E40)
#define KECPOHEKKCJ_HHCHMEJMCLN_OFFSET UNITYSDK_OFFSET(0x7E8E50)
#define KECPOHEKKCJ_JMFLHDKEOHD_OFFSET UNITYSDK_OFFSET(0x7E8E90)
#define KECPOHEKKCJ_KGDFFFKDAIJ_OFFSET UNITYSDK_OFFSET(0x7E8E70)

inline static constexpr unsigned int KECPOHEKKCJ_TypeDefinitionIndex = 43435;

struct alignas(4) KECPOHEKKCJ
{
	::System::Boolean GNOGCAJIBEL(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KECPOHEKKCJ_GNOGCAJIBEL_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Boolean HHCHMEJMCLN(::System::Int32 KOOGLEHCMFJ, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KECPOHEKKCJ_HHCHMEJMCLN_OFFSET))(this, KOOGLEHCMFJ, MOBNMDEDJIP);
	}

	::System::Void DHJJDGGPCPJ(::System::Int32 KOOGLEHCMFJ, ::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KECPOHEKKCJ_DHJJDGGPCPJ_OFFSET))(this, KOOGLEHCMFJ, MOBNMDEDJIP);
	}

	::System::Void KGDFFFKDAIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECPOHEKKCJ_KGDFFFKDAIJ_OFFSET))(this);
	}

	::System::Void GCCCHPAGPIB(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KECPOHEKKCJ_GCCCHPAGPIB_OFFSET))(this, MOBNMDEDJIP);
	}

	::GEOIPGDJMNO* JMFLHDKEOHD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GEOIPGDJMNO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KECPOHEKKCJ_JMFLHDKEOHD_OFFSET))(this, MGMDLMBEDJF);
	}
};
