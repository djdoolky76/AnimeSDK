#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MBLFKBFEOPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B826550)

inline static constexpr unsigned int MBLFKBFEOPN_TypeDefinitionIndex = 79835;

	class MBLFKBFEOPN : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::System::UInt32 BGJMONEGGGO; // 0x18
		::System::UInt32 IHIDLDOEEBB; // 0x1C
		::System::UInt32 KDKPDJNMMCM; // 0x20
		::System::Boolean EGBEKMAPAIE; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFKBFEOPN_CTOR_OFFSET))(this);
		}

	};
