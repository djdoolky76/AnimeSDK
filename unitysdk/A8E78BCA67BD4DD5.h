#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E7558C320973D024;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A8E78BCA67BD4DD5_AF2722F617E08915_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A8E78BCA67BD4DD5_E9886F5DB9701AA8_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A8E78BCA67BD4DD5_F1F4A92C47D3AEDC_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A8E78BCA67BD4DD5_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2663CB0)
#define A8E78BCA67BD4DD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8E78BCA67BD4DD5_TypeDefinitionIndex = 6289;

class A8E78BCA67BD4DD5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E7558C320973D024*>* A966FAB4B83FC5F9; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A8E78BCA67BD4DD5*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A8E78BCA67BD4DD5*&))((::PBYTE)hIl2Cpp + A8E78BCA67BD4DD5_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void AF2722F617E08915(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E7558C320973D024*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E7558C320973D024*>*))((::PBYTE)hIl2Cpp + A8E78BCA67BD4DD5_AF2722F617E08915_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::UInt32 F1F4A92C47D3AEDC(::E7558C320973D024* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E7558C320973D024*))((::PBYTE)hIl2Cpp + A8E78BCA67BD4DD5_F1F4A92C47D3AEDC_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E7558C320973D024*>* E9886F5DB9701AA8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E7558C320973D024*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A8E78BCA67BD4DD5_E9886F5DB9701AA8_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8E78BCA67BD4DD5__CTOR_OFFSET))(this);
	}
};
