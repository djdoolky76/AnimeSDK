#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define A9AC03459705DA21__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A9AC03459705DA21_TypeDefinitionIndex = 3513;

class A9AC03459705DA21 : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* E61D324FBA62405F; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9AC03459705DA21__CTOR_OFFSET))(this);
	}
};
