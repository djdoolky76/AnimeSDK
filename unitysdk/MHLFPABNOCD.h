#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define MHLFPABNOCD_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x15E2FA40)
#define MHLFPABNOCD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E2FB00)
#define MHLFPABNOCD__CTOR_OFFSET UNITYSDK_OFFSET(0x15E2FA80)

inline static constexpr unsigned int MHLFPABNOCD_TypeDefinitionIndex = 84589;

class MHLFPABNOCD : public ::System::Exception
{
public:
	static ::MHLFPABNOCD** StaticGet_ECMMKCJLBMD()
	{
		return (::MHLFPABNOCD**)Il2CppClass::FromTypeDefinitionIndex(MHLFPABNOCD_TypeDefinitionIndex)->GetStaticField(0x50A10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLFPABNOCD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHLFPABNOCD__CCTOR_OFFSET))();
	}

	::System::String* get_Message()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLFPABNOCD_GET_MESSAGE_OFFSET))(this);
	}
};
