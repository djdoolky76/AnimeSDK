#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E58E845DAD1BFE1D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B93748F33A5E0336_BBFD37DBD2348CA3_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B93748F33A5E0336_F1F4A92C47D3AEDC_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define B93748F33A5E0336_F27D3284B3F39BD3_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B93748F33A5E0336_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24B86B0)
#define B93748F33A5E0336__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B93748F33A5E0336_TypeDefinitionIndex = 4690;

class B93748F33A5E0336 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E58E845DAD1BFE1D*>* FD96520B8E919C98; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E58E845DAD1BFE1D*>* BBFD37DBD2348CA3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E58E845DAD1BFE1D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B93748F33A5E0336_BBFD37DBD2348CA3_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B93748F33A5E0336*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B93748F33A5E0336*&))((::PBYTE)hIl2Cpp + B93748F33A5E0336_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B93748F33A5E0336__CTOR_OFFSET))(this);
	}

	::System::Void F27D3284B3F39BD3(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E58E845DAD1BFE1D*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E58E845DAD1BFE1D*>*))((::PBYTE)hIl2Cpp + B93748F33A5E0336_F27D3284B3F39BD3_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 F1F4A92C47D3AEDC(::E58E845DAD1BFE1D* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E58E845DAD1BFE1D*))((::PBYTE)hIl2Cpp + B93748F33A5E0336_F1F4A92C47D3AEDC_OFFSET))(E937D4885DAA1AE8);
	}
};
