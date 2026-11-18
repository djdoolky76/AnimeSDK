#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IOJPIAIFGKO;

#define EGMJAPMDEIH_LCNIIJAPIEO_EDOMMBHIICG_BPDJOLFBKLP_OFFSET UNITYSDK_OFFSET(0x11A71610)
#define EGMJAPMDEIH_LCNIIJAPIEO_EDOMMBHIICG__CTOR_OFFSET UNITYSDK_OFFSET(0x11A71600)

inline static constexpr unsigned int EGMJAPMDEIH_LCNIIJAPIEO_EDOMMBHIICG_TypeDefinitionIndex = 49038;

class EGMJAPMDEIH_LCNIIJAPIEO_EDOMMBHIICG : public ::System::Object
{
public:
	::System::Int32 AOCOIDIMLIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_LCNIIJAPIEO_EDOMMBHIICG__CTOR_OFFSET))(this);
	}

	::System::Boolean BPDJOLFBKLP(::IOJPIAIFGKO* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::IOJPIAIFGKO*))((::PBYTE)hIl2Cpp + EGMJAPMDEIH_LCNIIJAPIEO_EDOMMBHIICG_BPDJOLFBKLP_OFFSET))(this, HAAEBCOBKFF);
	}
};
