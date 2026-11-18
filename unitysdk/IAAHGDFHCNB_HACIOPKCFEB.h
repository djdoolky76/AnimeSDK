#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAAHGDFHCNB_HACIOPKCFEB__CTOR_OFFSET UNITYSDK_OFFSET(0xEA0ED30)

inline static constexpr unsigned int IAAHGDFHCNB_HACIOPKCFEB_TypeDefinitionIndex = 88131;

class IAAHGDFHCNB_HACIOPKCFEB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* IGJICJDDILD; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* KAOHLKKENBB; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* PPMHKNEHCEH; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* HCMJDHFPHEC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_HACIOPKCFEB__CTOR_OFFSET))(this);
	}
};
