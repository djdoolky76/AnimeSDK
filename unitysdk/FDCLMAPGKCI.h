#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define FDCLMAPGKCI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1713A850)
#define FDCLMAPGKCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1713A7D0)

inline static constexpr unsigned int FDCLMAPGKCI_TypeDefinitionIndex = 48556;

class FDCLMAPGKCI : public ::System::Exception
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCLMAPGKCI__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FDCLMAPGKCI__CTOR_1_OFFSET))(this, NAPFALLANDL);
	}
};
