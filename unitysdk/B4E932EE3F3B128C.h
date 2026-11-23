#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B17FBCD2B9BB5F97;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B4E932EE3F3B128C_A144D276C48B8D29_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B4E932EE3F3B128C_A17392CFBE632ECD_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B4E932EE3F3B128C_F564506333CBEA76_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B4E932EE3F3B128C_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23B5ED0)
#define B4E932EE3F3B128C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B4E932EE3F3B128C_TypeDefinitionIndex = 3661;

class B4E932EE3F3B128C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B17FBCD2B9BB5F97*>* E722E81B57468822; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B4E932EE3F3B128C*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B4E932EE3F3B128C*&))((::PBYTE)hIl2Cpp + B4E932EE3F3B128C_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void A17392CFBE632ECD(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B17FBCD2B9BB5F97*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B17FBCD2B9BB5F97*>*))((::PBYTE)hIl2Cpp + B4E932EE3F3B128C_A17392CFBE632ECD_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4E932EE3F3B128C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B17FBCD2B9BB5F97*>* A144D276C48B8D29()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::B17FBCD2B9BB5F97*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B4E932EE3F3B128C_A144D276C48B8D29_OFFSET))(this);
	}

	static ::System::UInt32 F564506333CBEA76(::B17FBCD2B9BB5F97* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::B17FBCD2B9BB5F97*))((::PBYTE)hIl2Cpp + B4E932EE3F3B128C_F564506333CBEA76_OFFSET))(E937D4885DAA1AE8);
	}
};
