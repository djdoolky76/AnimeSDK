#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AA9011B8C3521CAB.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACB777C2F915E006_BD481FCD754AE452_OFFSET UNITYSDK_OFFSET(0x222FF40)
#define ACB777C2F915E006__CTOR_OFFSET UNITYSDK_OFFSET(0x2230010)

inline static constexpr unsigned int ACB777C2F915E006_TypeDefinitionIndex = 9136;

class ACB777C2F915E006 : public ::AA9011B8C3521CAB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACB777C2F915E006__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>* BD481FCD754AE452()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACB777C2F915E006_BD481FCD754AE452_OFFSET))(this);
	}
};
