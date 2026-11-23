#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }

#define FAFC1B987D9C82BD__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FAFC1B987D9C82BD_TypeDefinitionIndex = 186;

class FAFC1B987D9C82BD : public ::E379DE61A548837D
{
public:
	::System::String* B4EB3EABA91913FA; // 0x38
	::AB893667BB6F371B BE68C18FBFC68992; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFC1B987D9C82BD__CTOR_OFFSET))(this);
	}
};
