#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T> class E891BA3236FD13E7; }

#define EB4AA693B6D01D37_ADFB98876F475FB4_EB89CD5DF1670154_OFFSET UNITYSDK_OFFSET(0x3C201B0)
#define EB4AA693B6D01D37_ADFB98876F475FB4__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C20200)
#define EB4AA693B6D01D37_ADFB98876F475FB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EB4AA693B6D01D37_ADFB98876F475FB4_TypeDefinitionIndex = 11426;

class EB4AA693B6D01D37_ADFB98876F475FB4 : public ::System::Object
{
public:
	static ::EB4AA693B6D01D37_ADFB98876F475FB4** StaticGet_FB0A7EB463FA294A()
	{
		return (::EB4AA693B6D01D37_ADFB98876F475FB4**)Il2CppClass::FromTypeDefinitionIndex(EB4AA693B6D01D37_ADFB98876F475FB4_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::E891BA3236FD13E7<::System::Type*>** StaticGet_E35D8A0C35B680FB()
	{
		return (::System::E891BA3236FD13E7<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(EB4AA693B6D01D37_ADFB98876F475FB4_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EB4AA693B6D01D37_ADFB98876F475FB4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB4AA693B6D01D37_ADFB98876F475FB4__CTOR_OFFSET))(this);
	}

	::System::Boolean EB89CD5DF1670154(::System::Type* BBCFEC7DB309E927)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + EB4AA693B6D01D37_ADFB98876F475FB4_EB89CD5DF1670154_OFFSET))(this, BBCFEC7DB309E927);
	}
};
