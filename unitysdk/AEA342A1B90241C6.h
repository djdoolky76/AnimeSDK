#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEA342A1B90241C6_BAAB973748FB8917_OFFSET UNITYSDK_OFFSET(0x168A070)
#define AEA342A1B90241C6_E6FC19265BCC980C_OFFSET UNITYSDK_OFFSET(0x168A070)

inline static constexpr unsigned int AEA342A1B90241C6_TypeDefinitionIndex = 8097;

class AEA342A1B90241C6
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* E6FC19265BCC980C()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEA342A1B90241C6_E6FC19265BCC980C_OFFSET))(this);
	}

	::System::Nullable_1<::System::UInt32> BAAB973748FB8917()
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + AEA342A1B90241C6_BAAB973748FB8917_OFFSET))(this);
	}
};
