#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E865B8C6DD3B9988;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F58D0CF719E1196D_A1F95B07EFF0BCC8_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F58D0CF719E1196D_B0A2906A0C5952F5_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F58D0CF719E1196D_B9FAA12CBF609F72_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F58D0CF719E1196D_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2365200)
#define F58D0CF719E1196D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F58D0CF719E1196D_TypeDefinitionIndex = 3316;

class F58D0CF719E1196D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E865B8C6DD3B9988*>* B96DE22DB6EBAE6F; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F58D0CF719E1196D__CTOR_OFFSET))(this);
	}

	::System::Void B9FAA12CBF609F72(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E865B8C6DD3B9988*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E865B8C6DD3B9988*>*))((::PBYTE)hIl2Cpp + F58D0CF719E1196D_B9FAA12CBF609F72_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E865B8C6DD3B9988*>* A1F95B07EFF0BCC8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E865B8C6DD3B9988*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F58D0CF719E1196D_A1F95B07EFF0BCC8_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F58D0CF719E1196D*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F58D0CF719E1196D*&))((::PBYTE)hIl2Cpp + F58D0CF719E1196D_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 B0A2906A0C5952F5(::E865B8C6DD3B9988* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E865B8C6DD3B9988*))((::PBYTE)hIl2Cpp + F58D0CF719E1196D_B0A2906A0C5952F5_OFFSET))(E937D4885DAA1AE8);
	}
};
