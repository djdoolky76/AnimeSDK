#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class BAE350A78277C002;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F9B447126E45FD3C_B56AB583C60BDF15_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F9B447126E45FD3C_B8892B9B00C409DF_OFFSET UNITYSDK_OFFSET(0x1F38580)
#define F9B447126E45FD3C_B89CB82883E38519_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F9B447126E45FD3C_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25108A0)
#define F9B447126E45FD3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F9B447126E45FD3C_TypeDefinitionIndex = 5201;

class F9B447126E45FD3C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BAE350A78277C002*>* B200FF19E986513D; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9B447126E45FD3C__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F9B447126E45FD3C*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F9B447126E45FD3C*&))((::PBYTE)hIl2Cpp + F9B447126E45FD3C_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BAE350A78277C002*>* B89CB82883E38519()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BAE350A78277C002*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F9B447126E45FD3C_B89CB82883E38519_OFFSET))(this);
	}

	static ::System::UInt64 B8892B9B00C409DF(::BAE350A78277C002* E937D4885DAA1AE8)
	{
		return ((::System::UInt64(*)(::BAE350A78277C002*))((::PBYTE)hIl2Cpp + F9B447126E45FD3C_B8892B9B00C409DF_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void B56AB583C60BDF15(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BAE350A78277C002*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BAE350A78277C002*>*))((::PBYTE)hIl2Cpp + F9B447126E45FD3C_B56AB583C60BDF15_OFFSET))(this, E937D4885DAA1AE8);
	}
};
