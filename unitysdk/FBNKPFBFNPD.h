#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FBNKPFBFNPD__CTOR_OFFSET UNITYSDK_OFFSET(0x11CF4620)

inline static constexpr unsigned int FBNKPFBFNPD_TypeDefinitionIndex = 77950;

class FBNKPFBFNPD : public ::System::Object
{
public:
	::System::String* NGHLLDAJJJE; // 0x10
	::System::UInt16 OBNIAHNMHPF; // 0x18
	::System::UInt16 CMJLFAIMHLE; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNKPFBFNPD__CTOR_OFFSET))(this);
	}
};
