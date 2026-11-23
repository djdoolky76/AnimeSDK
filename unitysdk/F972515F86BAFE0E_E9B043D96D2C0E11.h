#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F972515F86BAFE0E_E9B043D96D2C0E11_BCB0A4DD6EA3B4C9_OFFSET UNITYSDK_OFFSET(0x1D41590)
#define F972515F86BAFE0E_E9B043D96D2C0E11__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F972515F86BAFE0E_E9B043D96D2C0E11_TypeDefinitionIndex = 9993;

class F972515F86BAFE0E_E9B043D96D2C0E11 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::AB642D1382756991*, ::System::Object*>* E55D7E6B06DAB08F; // 0x10

	::System::Int32 BCB0A4DD6EA3B4C9(::AB642D1382756991* B35BBBE7E39341A2, ::AB642D1382756991* AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::AB642D1382756991*, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + F972515F86BAFE0E_E9B043D96D2C0E11_BCB0A4DD6EA3B4C9_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F972515F86BAFE0E_E9B043D96D2C0E11__CTOR_OFFSET))(this);
	}
};
