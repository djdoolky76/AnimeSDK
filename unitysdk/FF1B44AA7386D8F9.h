#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class ACBFB25FB6EC05A6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FF1B44AA7386D8F9_B2B290A18892737C_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FF1B44AA7386D8F9_BA068DEA96B50366_OFFSET UNITYSDK_OFFSET(0x1F38580)
#define FF1B44AA7386D8F9_F00CD4E1E3BA5777_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FF1B44AA7386D8F9_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x243D8C0)
#define FF1B44AA7386D8F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FF1B44AA7386D8F9_TypeDefinitionIndex = 4258;

class FF1B44AA7386D8F9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::ACBFB25FB6EC05A6*>* A8BB45A85F3499B5; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::String*, ::ACBFB25FB6EC05A6*>* F00CD4E1E3BA5777()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::ACBFB25FB6EC05A6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1B44AA7386D8F9_F00CD4E1E3BA5777_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF1B44AA7386D8F9__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FF1B44AA7386D8F9*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FF1B44AA7386D8F9*&))((::PBYTE)hIl2Cpp + FF1B44AA7386D8F9_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::String* BA068DEA96B50366(::ACBFB25FB6EC05A6* E937D4885DAA1AE8)
	{
		return ((::System::String*(*)(::ACBFB25FB6EC05A6*))((::PBYTE)hIl2Cpp + FF1B44AA7386D8F9_BA068DEA96B50366_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void B2B290A18892737C(::System::Collections::Generic::Dictionary_2<::System::String*, ::ACBFB25FB6EC05A6*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ACBFB25FB6EC05A6*>*))((::PBYTE)hIl2Cpp + FF1B44AA7386D8F9_B2B290A18892737C_OFFSET))(this, E937D4885DAA1AE8);
	}
};
