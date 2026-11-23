#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B8201752031CA1BD__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B8201752031CA1BD_TypeDefinitionIndex = 2215;

class B8201752031CA1BD : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* B3689756A2687011; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8201752031CA1BD__CTOR_OFFSET))(this);
	}
};
