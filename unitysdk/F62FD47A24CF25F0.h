#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"

#define F62FD47A24CF25F0_AC5CA1AA5DFD8657_OFFSET UNITYSDK_OFFSET(0x29B0A60)
#define F62FD47A24CF25F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x29B0B00)

inline static constexpr unsigned int F62FD47A24CF25F0_TypeDefinitionIndex = 15555;

class F62FD47A24CF25F0 : public ::System::Object
{
public:
	static ::System::Int64* StaticGet_E72C1ECEABCEF098()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(F62FD47A24CF25F0_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F62FD47A24CF25F0__CCTOR_OFFSET))();
	}

	static ::System::DateTime AC5CA1AA5DFD8657(::System::Int64 B29ECC9EB07ECC05)
	{
		return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + F62FD47A24CF25F0_AC5CA1AA5DFD8657_OFFSET))(B29ECC9EB07ECC05);
	}
};
