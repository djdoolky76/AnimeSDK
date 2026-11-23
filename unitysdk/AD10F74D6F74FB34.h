#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E4EEB56CFE912B3E;
namespace System { class Exception; }

#define AD10F74D6F74FB34_A915E000A334BF9D_OFFSET UNITYSDK_OFFSET(0x3C4F700)
#define AD10F74D6F74FB34__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C4F730)
#define AD10F74D6F74FB34__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AD10F74D6F74FB34_TypeDefinitionIndex = 11591;

class AD10F74D6F74FB34 : public ::System::Object
{
public:
	static ::E4EEB56CFE912B3E** StaticGet_ACEAB9620C11BB4C()
	{
		return (::E4EEB56CFE912B3E**)Il2CppClass::FromTypeDefinitionIndex(AD10F74D6F74FB34_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD10F74D6F74FB34__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AD10F74D6F74FB34__CCTOR_OFFSET))();
	}

	static ::System::Void A915E000A334BF9D(::System::Exception* E2B6D81F69EA0D9B)
	{
		return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + AD10F74D6F74FB34_A915E000A334BF9D_OFFSET))(E2B6D81F69EA0D9B);
	}
};
