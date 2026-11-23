#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A87F31C906584C71;
class B039DBCCDAE8D7F2;
class E7AD2F6CF872AFB3;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BE2F8678A95BDBCA_A2CC11BF491FFAC2_E0F1A3902FA65D9E_OFFSET UNITYSDK_OFFSET(0x193A660)
#define BE2F8678A95BDBCA_A2CC11BF491FFAC2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BE2F8678A95BDBCA_A2CC11BF491FFAC2_TypeDefinitionIndex = 1556;

class BE2F8678A95BDBCA_A2CC11BF491FFAC2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E7AD2F6CF872AFB3*>* BD15E28FCF5C244A; // 0x10
	::A87F31C906584C71* ACDE58E97E37D13C; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE2F8678A95BDBCA_A2CC11BF491FFAC2__CTOR_OFFSET))(this);
	}

	::System::Boolean E0F1A3902FA65D9E(::B039DBCCDAE8D7F2* B4A02C0E29F48225)
	{
		return ((::System::Boolean(*)(::PVOID, ::B039DBCCDAE8D7F2*))((::PBYTE)hIl2Cpp + BE2F8678A95BDBCA_A2CC11BF491FFAC2_E0F1A3902FA65D9E_OFFSET))(this, B4A02C0E29F48225);
	}
};
