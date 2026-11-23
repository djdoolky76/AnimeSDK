#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E807716D0054E2AF__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E807716D0054E2AF_TypeDefinitionIndex = 296;

class E807716D0054E2AF : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* E5B30A6D9AFC6A9D; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E807716D0054E2AF__CTOR_OFFSET))(this);
	}
};
