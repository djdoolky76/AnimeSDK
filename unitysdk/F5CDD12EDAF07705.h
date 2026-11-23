#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define F5CDD12EDAF07705_AB8EC58AE1D7437F_OFFSET UNITYSDK_OFFSET(0x3C43FC0)
#define F5CDD12EDAF07705__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C43FE0)

inline static constexpr unsigned int F5CDD12EDAF07705_TypeDefinitionIndex = 11562;

class F5CDD12EDAF07705 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_F1BC34CA4E71678E()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(F5CDD12EDAF07705_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F5CDD12EDAF07705__CCTOR_OFFSET))();
	}

	static ::System::Int32 AB8EC58AE1D7437F(::System::Int32 B7D9F0E0B4E6BBE5, ::System::Int32 B4198727A7DF2CAD)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + F5CDD12EDAF07705_AB8EC58AE1D7437F_OFFSET))(B7D9F0E0B4E6BBE5, B4198727A7DF2CAD);
	}
};
