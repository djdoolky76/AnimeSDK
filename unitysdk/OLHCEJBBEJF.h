#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;

#define OLHCEJBBEJF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFD8ECE0)
#define OLHCEJBBEJF__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8ECD0)

inline static constexpr unsigned int OLHCEJBBEJF_TypeDefinitionIndex = 79365;

class OLHCEJBBEJF : public ::System::Object
{
public:
	::HGAJKHIMKJP* LJBPECKCCEA; // 0x10
	::System::Boolean DBBIDCBDBDB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHCEJBBEJF__CTOR_OFFSET))(this);
	}

	::OLHCEJBBEJF* DGNAAPGKIPL()
	{
		return ((::OLHCEJBBEJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHCEJBBEJF_DGNAAPGKIPL_OFFSET))(this);
	}
};
