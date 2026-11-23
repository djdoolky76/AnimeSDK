#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class EBB5BC82D75869AA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E742A31229284158_A439C0B7CDFEFA58_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E742A31229284158_BF761375A7B99F20_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E742A31229284158_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E742A31229284158_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2444FB0)
#define E742A31229284158__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E742A31229284158_TypeDefinitionIndex = 2402;

class E742A31229284158 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EBB5BC82D75869AA*>* E6BA2E83AF4C9E1D; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E742A31229284158*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E742A31229284158*&))((::PBYTE)hIl2Cpp + E742A31229284158_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void A439C0B7CDFEFA58(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EBB5BC82D75869AA*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EBB5BC82D75869AA*>*))((::PBYTE)hIl2Cpp + E742A31229284158_A439C0B7CDFEFA58_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::EBB5BC82D75869AA* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::EBB5BC82D75869AA*))((::PBYTE)hIl2Cpp + E742A31229284158_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EBB5BC82D75869AA*>* BF761375A7B99F20()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EBB5BC82D75869AA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E742A31229284158_BF761375A7B99F20_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E742A31229284158__CTOR_OFFSET))(this);
	}
};
