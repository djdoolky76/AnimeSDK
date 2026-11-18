#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define CHJHJIFBDIO_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x10E3C760)
#define CHJHJIFBDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x10E3C7E0)

inline static constexpr unsigned int CHJHJIFBDIO_TypeDefinitionIndex = 58639;

class CHJHJIFBDIO : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* DEKPFAMLEDO; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJHJIFBDIO__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJHJIFBDIO_ONCREATEPROPERTY_OFFSET))(this);
	}
};
