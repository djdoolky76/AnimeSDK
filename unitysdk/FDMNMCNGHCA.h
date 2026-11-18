#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDMNMCNGHCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F639FA0)

inline static constexpr unsigned int FDMNMCNGHCA_TypeDefinitionIndex = 94840;

class FDMNMCNGHCA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* DPOADNHHACA; // 0x10
	::System::Single FFJMNGFEHPP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMNMCNGHCA__CTOR_OFFSET))(this);
	}
};
