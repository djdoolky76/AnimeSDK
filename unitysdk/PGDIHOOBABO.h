#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGDIHOOBABO__CTOR_OFFSET UNITYSDK_OFFSET(0x15538D40)

inline static constexpr unsigned int PGDIHOOBABO_TypeDefinitionIndex = 61555;

class PGDIHOOBABO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* BIKAHHBDJGA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDIHOOBABO__CTOR_OFFSET))(this);
	}
};
