#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B072231037183410;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FA63951EA11B7DC8_BF02936576651174_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FA63951EA11B7DC8_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define FA63951EA11B7DC8_F177A94EB80ABA99_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FA63951EA11B7DC8_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x251B040)
#define FA63951EA11B7DC8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FA63951EA11B7DC8_TypeDefinitionIndex = 5221;

class FA63951EA11B7DC8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B072231037183410*>* BF3AA721D466F323; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B072231037183410*>* F177A94EB80ABA99()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B072231037183410*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FA63951EA11B7DC8_F177A94EB80ABA99_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::B072231037183410* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::B072231037183410*))((::PBYTE)hIl2Cpp + FA63951EA11B7DC8_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void BF02936576651174(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B072231037183410*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B072231037183410*>*))((::PBYTE)hIl2Cpp + FA63951EA11B7DC8_BF02936576651174_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA63951EA11B7DC8__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FA63951EA11B7DC8*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FA63951EA11B7DC8*&))((::PBYTE)hIl2Cpp + FA63951EA11B7DC8_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
