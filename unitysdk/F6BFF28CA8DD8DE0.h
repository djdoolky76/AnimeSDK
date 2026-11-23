#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A35924EFAAABD206;
class E54DF5A49C0FEEFD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F6BFF28CA8DD8DE0_A348E18AE9149E69_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F6BFF28CA8DD8DE0_BC2451F1F9390772_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define F6BFF28CA8DD8DE0_E1A52D8039D2601F_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define F6BFF28CA8DD8DE0_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2653900)
#define F6BFF28CA8DD8DE0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F6BFF28CA8DD8DE0_TypeDefinitionIndex = 6119;

class F6BFF28CA8DD8DE0 : public ::System::Object
{
public:
	::A35924EFAAABD206* A1DE6CF21CB1683E; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E54DF5A49C0FEEFD*>* AF71854D247171F6; // 0x18

	::System::Void E1A52D8039D2601F(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E54DF5A49C0FEEFD*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E54DF5A49C0FEEFD*>*))((::PBYTE)hIl2Cpp + F6BFF28CA8DD8DE0_E1A52D8039D2601F_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E54DF5A49C0FEEFD*>* BC2451F1F9390772()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E54DF5A49C0FEEFD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F6BFF28CA8DD8DE0_BC2451F1F9390772_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6BFF28CA8DD8DE0__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F6BFF28CA8DD8DE0*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F6BFF28CA8DD8DE0*&))((::PBYTE)hIl2Cpp + F6BFF28CA8DD8DE0_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void A348E18AE9149E69(::A35924EFAAABD206* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::A35924EFAAABD206*))((::PBYTE)hIl2Cpp + F6BFF28CA8DD8DE0_A348E18AE9149E69_OFFSET))(this, E937D4885DAA1AE8);
	}
};
