#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AE9CA07983A2AFB2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A5F44F529D03B5BA_A429AFBDDE837218_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A5F44F529D03B5BA_A6E48608BB4A0CDE_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A5F44F529D03B5BA_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A5F44F529D03B5BA_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23F07D0)
#define A5F44F529D03B5BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A5F44F529D03B5BA_TypeDefinitionIndex = 3880;

class A5F44F529D03B5BA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AE9CA07983A2AFB2*>* A501AF60943E5061; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AE9CA07983A2AFB2*>* A6E48608BB4A0CDE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AE9CA07983A2AFB2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A5F44F529D03B5BA_A6E48608BB4A0CDE_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A5F44F529D03B5BA*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A5F44F529D03B5BA*&))((::PBYTE)hIl2Cpp + A5F44F529D03B5BA_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5F44F529D03B5BA__CTOR_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::AE9CA07983A2AFB2* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::AE9CA07983A2AFB2*))((::PBYTE)hIl2Cpp + A5F44F529D03B5BA_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void A429AFBDDE837218(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AE9CA07983A2AFB2*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AE9CA07983A2AFB2*>*))((::PBYTE)hIl2Cpp + A5F44F529D03B5BA_A429AFBDDE837218_OFFSET))(this, E937D4885DAA1AE8);
	}
};
