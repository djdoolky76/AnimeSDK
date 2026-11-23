#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E98C5898182526E1;
class EA8F3A1D3636761E;
namespace System { template <typename T> class Func_1; }

#define ABCAEC9D71669B01_BF14E1279ABF6408_OFFSET UNITYSDK_OFFSET(0x4337870)

inline static constexpr unsigned int ABCAEC9D71669B01_TypeDefinitionIndex = 13545;

class ABCAEC9D71669B01 : public ::System::Object
{
public:
	static ::System::Func_1<::E98C5898182526E1*>** StaticGet_B8FF6042728492F9()
	{
		return (::System::Func_1<::E98C5898182526E1*>**)Il2CppClass::FromTypeDefinitionIndex(ABCAEC9D71669B01_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::E98C5898182526E1** StaticGet_B4AA56E69F6C3A51()
	{
		return (::E98C5898182526E1**)Il2CppClass::FromTypeDefinitionIndex(ABCAEC9D71669B01_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::E98C5898182526E1** StaticGet_F6D262F4F371DCB0()
	{
		return (::E98C5898182526E1**)Il2CppClass::FromTypeDefinitionIndex(ABCAEC9D71669B01_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::E98C5898182526E1* BF14E1279ABF6408(::EA8F3A1D3636761E* B88E0DC1063F2196)
	{
		return ((::E98C5898182526E1*(*)(::EA8F3A1D3636761E*))((::PBYTE)hIl2Cpp + ABCAEC9D71669B01_BF14E1279ABF6408_OFFSET))(B88E0DC1063F2196);
	}
};
