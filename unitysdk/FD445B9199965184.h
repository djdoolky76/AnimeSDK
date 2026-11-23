#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FD445B9199965184__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FD445B9199965184_TypeDefinitionIndex = 2143;

class FD445B9199965184 : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::System::UInt64>* B5518DD2D06BA188; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD445B9199965184__CTOR_OFFSET))(this);
	}
};
