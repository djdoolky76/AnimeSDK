#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E5B23C6835399024;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F23120C4E19E740B_B0D5C3BC4BDA9E71_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F23120C4E19E740B_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F23120C4E19E740B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24CE940)
#define F23120C4E19E740B_FC97336FFFF1867A_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F23120C4E19E740B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F23120C4E19E740B_TypeDefinitionIndex = 4907;

class F23120C4E19E740B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E5B23C6835399024*>* E8FED449BF37DC78; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F23120C4E19E740B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F23120C4E19E740B*&))((::PBYTE)hIl2Cpp + F23120C4E19E740B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void FC97336FFFF1867A(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E5B23C6835399024*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E5B23C6835399024*>*))((::PBYTE)hIl2Cpp + F23120C4E19E740B_FC97336FFFF1867A_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E5B23C6835399024*>* B0D5C3BC4BDA9E71()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E5B23C6835399024*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F23120C4E19E740B_B0D5C3BC4BDA9E71_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::E5B23C6835399024* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E5B23C6835399024*))((::PBYTE)hIl2Cpp + F23120C4E19E740B_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F23120C4E19E740B__CTOR_OFFSET))(this);
	}
};
