#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBCF86BF24322808__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EBCF86BF24322808_TypeDefinitionIndex = 8226;

class EBCF86BF24322808 : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* B88CDC095530681A; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCF86BF24322808__CTOR_OFFSET))(this);
	}
};
