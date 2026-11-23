#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class FD2465D85057C525;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E6B412129348AFB6_BD5BC6DAC01307C6_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E6B412129348AFB6_BEC8BA43E7A26B35_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E6B412129348AFB6_ED6468C94D52E168_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E6B412129348AFB6_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24D1080)
#define E6B412129348AFB6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E6B412129348AFB6_TypeDefinitionIndex = 4933;

class E6B412129348AFB6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FD2465D85057C525*>* F014EF0955405CB9; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6B412129348AFB6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FD2465D85057C525*>* BEC8BA43E7A26B35()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FD2465D85057C525*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E6B412129348AFB6_BEC8BA43E7A26B35_OFFSET))(this);
	}

	::System::Void BD5BC6DAC01307C6(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FD2465D85057C525*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FD2465D85057C525*>*))((::PBYTE)hIl2Cpp + E6B412129348AFB6_BD5BC6DAC01307C6_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E6B412129348AFB6*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E6B412129348AFB6*&))((::PBYTE)hIl2Cpp + E6B412129348AFB6_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 ED6468C94D52E168(::FD2465D85057C525* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::FD2465D85057C525*))((::PBYTE)hIl2Cpp + E6B412129348AFB6_ED6468C94D52E168_OFFSET))(E937D4885DAA1AE8);
	}
};
