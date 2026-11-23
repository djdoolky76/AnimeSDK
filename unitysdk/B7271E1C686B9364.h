#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFD069C4E3C9878C;
class F1C8A76FE26E681F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B7271E1C686B9364__CTOR_OFFSET UNITYSDK_OFFSET(0x20957D0)

inline static constexpr unsigned int B7271E1C686B9364_TypeDefinitionIndex = 8534;

class B7271E1C686B9364 : public ::System::Object
{
public:
	::BFD069C4E3C9878C* B23A5AEB952EF919; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* EA70971733289A41; // 0x18
	::System::Boolean E3D17824AB1D819C; // 0x20
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::F1C8A76FE26E681F*>* E3DF2D6FCC5492F2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7271E1C686B9364__CTOR_OFFSET))(this);
	}
};
