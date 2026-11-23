#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B8E74C64BF4CE04B;
class EA158B20E7D0766D;
class F295CC4A24B189F7;
class F7D297B66996DF22;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F937C1DFC280ADB0_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23BEB70)
#define F937C1DFC280ADB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F937C1DFC280ADB0_TypeDefinitionIndex = 3676;

class F937C1DFC280ADB0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::F295CC4A24B189F7*>* EBB91C239B7DFD1A; // 0x10
	::System::Collections::Generic::List_1<::F7D297B66996DF22*>* ADD3CEAF72C3151B; // 0x18
	::System::Collections::Generic::List_1<::B8E74C64BF4CE04B*>* E73ABD86F841B0F6; // 0x20
	::System::Collections::Generic::List_1<::EA158B20E7D0766D*>* AB3CB47823BA47C9; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F937C1DFC280ADB0__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F937C1DFC280ADB0*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F937C1DFC280ADB0*&))((::PBYTE)hIl2Cpp + F937C1DFC280ADB0_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
