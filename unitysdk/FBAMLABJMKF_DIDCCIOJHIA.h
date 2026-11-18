#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF_FEELNPOFJKH;
class PNJDGHBEMLK;

#define FBAMLABJMKF_DIDCCIOJHIA_LLNPGEEMPKB_OFFSET UNITYSDK_OFFSET(0xBB31690)
#define FBAMLABJMKF_DIDCCIOJHIA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB31680)

inline static constexpr unsigned int FBAMLABJMKF_DIDCCIOJHIA_TypeDefinitionIndex = 78131;

class FBAMLABJMKF_DIDCCIOJHIA : public ::System::Object
{
public:
	::FBAMLABJMKF_FEELNPOFJKH* ONLJAOFCNCH; // 0x10
	::System::Single FAMGNIDIBPM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_DIDCCIOJHIA__CTOR_OFFSET))(this);
	}

	::System::Boolean LLNPGEEMPKB(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + FBAMLABJMKF_DIDCCIOJHIA_LLNPGEEMPKB_OFFSET))(this, CDKCJAKODPN);
	}
};
