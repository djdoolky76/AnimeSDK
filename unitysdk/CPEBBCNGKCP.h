#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPEBBCNGKCP__CTOR_OFFSET UNITYSDK_OFFSET(0x147B6220)

inline static constexpr unsigned int CPEBBCNGKCP_TypeDefinitionIndex = 80936;

class CPEBBCNGKCP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GDIPFMEKKPB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEBBCNGKCP__CTOR_OFFSET))(this);
	}
};
