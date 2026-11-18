#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define FBOKCNPAJCF_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x140E0110)
#define FBOKCNPAJCF__CTOR_OFFSET UNITYSDK_OFFSET(0x140E0100)

inline static constexpr unsigned int FBOKCNPAJCF_TypeDefinitionIndex = 58304;

class FBOKCNPAJCF : public ::System::Attribute
{
public:
	::System::Int32 _CLNDLFNBOFD_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 OCALHHLFBAF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBOKCNPAJCF__CTOR_OFFSET))(this, OCALHHLFBAF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOKCNPAJCF_BKNKCFDBLGH_OFFSET))(this);
	}
};
