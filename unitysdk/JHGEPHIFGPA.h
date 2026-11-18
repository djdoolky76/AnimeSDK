#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define JHGEPHIFGPA__CTOR_OFFSET UNITYSDK_OFFSET(0x187392A0)

inline static constexpr unsigned int JHGEPHIFGPA_TypeDefinitionIndex = 50908;

class JHGEPHIFGPA : public ::System::Object
{
public:
	::System::String* CMBLHJALEDN; // 0x10
	::System::String* BJBGIMJKCDA; // 0x18
	::System::String* OODACLNNBIH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGEPHIFGPA__CTOR_OFFSET))(this);
	}
};
