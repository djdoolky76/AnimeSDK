#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A583227F2EF40AEB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E9FAADC5A40A29BB_B68024E67B09C99F_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E9FAADC5A40A29BB_F3ADA74D4DB4BAAC_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define E9FAADC5A40A29BB_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x249F690)
#define E9FAADC5A40A29BB_FCCC1311DB9553EC_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E9FAADC5A40A29BB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9FAADC5A40A29BB_TypeDefinitionIndex = 4635;

class E9FAADC5A40A29BB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A583227F2EF40AEB*>* B43D9D1BC8ADD4EB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9FAADC5A40A29BB__CTOR_OFFSET))(this);
	}

	::System::Void FCCC1311DB9553EC(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A583227F2EF40AEB*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A583227F2EF40AEB*>*))((::PBYTE)hIl2Cpp + E9FAADC5A40A29BB_FCCC1311DB9553EC_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E9FAADC5A40A29BB*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E9FAADC5A40A29BB*&))((::PBYTE)hIl2Cpp + E9FAADC5A40A29BB_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A583227F2EF40AEB*>* B68024E67B09C99F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A583227F2EF40AEB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E9FAADC5A40A29BB_B68024E67B09C99F_OFFSET))(this);
	}

	static ::System::UInt32 F3ADA74D4DB4BAAC(::A583227F2EF40AEB* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::A583227F2EF40AEB*))((::PBYTE)hIl2Cpp + E9FAADC5A40A29BB_F3ADA74D4DB4BAAC_OFFSET))(E937D4885DAA1AE8);
	}
};
