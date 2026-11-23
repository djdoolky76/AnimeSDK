#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E254E20CEF2E5D8E;
namespace System { class Type; }
template <typename T1, typename T2> class F34A365CFD193D25;

#define FC54536DDA7C9686_B6B00D56C6537B9E_OFFSET UNITYSDK_OFFSET(0x3B5BF50)
#define FC54536DDA7C9686__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B5C0A0)

inline static constexpr unsigned int FC54536DDA7C9686_TypeDefinitionIndex = 10257;

class FC54536DDA7C9686 : public ::System::Object
{
public:
	static ::F34A365CFD193D25<::System::Type*, ::E254E20CEF2E5D8E*>** StaticGet_EC73DAE9B3BBE2A2()
	{
		return (::F34A365CFD193D25<::System::Type*, ::E254E20CEF2E5D8E*>**)Il2CppClass::FromTypeDefinitionIndex(FC54536DDA7C9686_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FC54536DDA7C9686__CCTOR_OFFSET))();
	}

	static ::E254E20CEF2E5D8E* B6B00D56C6537B9E(::System::Type* BBCFEC7DB309E927)
	{
		return ((::E254E20CEF2E5D8E*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FC54536DDA7C9686_B6B00D56C6537B9E_OFFSET))(BBCFEC7DB309E927);
	}
};
