#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEDF598498229496__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AEDF598498229496_TypeDefinitionIndex = 1601;

class AEDF598498229496 : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::System::UInt64>* B5518DD2D06BA188; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDF598498229496__CTOR_OFFSET))(this);
	}
};
