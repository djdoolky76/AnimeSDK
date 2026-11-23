#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EC73AE1FA38CF716_F3192A6EDA6A2E85_ACF07FBEE5A31307_OFFSET UNITYSDK_OFFSET(0x3FE09F0)
#define EC73AE1FA38CF716_F3192A6EDA6A2E85_E6B259742AA920D5_OFFSET UNITYSDK_OFFSET(0x3FE0860)
#define EC73AE1FA38CF716_F3192A6EDA6A2E85_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x3FE0980)

inline static constexpr unsigned int EC73AE1FA38CF716_F3192A6EDA6A2E85_TypeDefinitionIndex = 14447;

struct alignas(8) EC73AE1FA38CF716_F3192A6EDA6A2E85
{
	::System::Nullable_1<::System::Int32> E8074BBF0ADF3A7B; // 0x10
	::System::Nullable_1<::System::Int32> A79426F8D4D8FAF7; // 0x18
	::System::Nullable_1<::System::Int32> B3D783D103CAED1F; // 0x20
	::System::Nullable_1<::System::Int32> A740190FCEFD781D; // 0x28
	::System::Nullable_1<::System::Int32> FC47D94CCF84A75F; // 0x30
	::System::Nullable_1<::System::Int32> EF5B5842132F4809; // 0x38
	::System::Nullable_1<::System::Int32> FCB78015D756C511; // 0x40
	::System::Nullable_1<::System::Int32> FC65E8A882BD5F99; // 0x48
	::System::Nullable_1<::System::Int32> E274556EED4E110A; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* A4C1752213C7536F; // 0x58

	/*
	static ::System::Void F0D2AFBD3CAE7F65(::EC73AE1FA38CF716_F3192A6EDA6A2E85& E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::EC73AE1FA38CF716_F3192A6EDA6A2E85&))((::PBYTE)hIl2Cpp + EC73AE1FA38CF716_F3192A6EDA6A2E85_F0D2AFBD3CAE7F65_OFFSET))(E5EB06E4FD2C32F7);
	}
	*/

	::System::Void ACF07FBEE5A31307(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EC73AE1FA38CF716_F3192A6EDA6A2E85_ACF07FBEE5A31307_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Int32 E6B259742AA920D5(::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EC73AE1FA38CF716_F3192A6EDA6A2E85_E6B259742AA920D5_OFFSET))(this, B48C66E5FB2449C6);
	}
};
