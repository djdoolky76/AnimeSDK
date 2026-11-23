#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E19FBE1E705551ED;
class E9781F34B22778CA;

#define ED3F41CFC41515AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x4041670)
#define ED3F41CFC41515AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int ED3F41CFC41515AB_TypeDefinitionIndex = 20374;

class ED3F41CFC41515AB : public ::System::Object
{
public:
	static ::E9781F34B22778CA** StaticGet_ABBB6DEFC5D9B568()
	{
		return (::E9781F34B22778CA**)Il2CppClass::FromTypeDefinitionIndex(ED3F41CFC41515AB_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::E19FBE1E705551ED* ADBB8F25FD0E9910; // 0x10

	::System::Void _ctor(::E19FBE1E705551ED* B48AAE4033BA5B00)
	{
		return ((::System::Void(*)(::PVOID, ::E19FBE1E705551ED*))((::PBYTE)hIl2Cpp + ED3F41CFC41515AB__CTOR_OFFSET))(this, B48AAE4033BA5B00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ED3F41CFC41515AB__CCTOR_OFFSET))();
	}
};
