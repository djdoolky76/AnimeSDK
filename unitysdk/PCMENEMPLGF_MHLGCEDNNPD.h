#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PCMENEMPLGF_MHLGCEDNNPD_NJBPAHHFFNN_OFFSET UNITYSDK_OFFSET(0x11955F50)
#define PCMENEMPLGF_MHLGCEDNNPD__CTOR_OFFSET UNITYSDK_OFFSET(0x11955F40)

inline static constexpr unsigned int PCMENEMPLGF_MHLGCEDNNPD_TypeDefinitionIndex = 62836;

class PCMENEMPLGF_MHLGCEDNNPD : public ::System::Object
{
public:
	::System::String* BKNCNFGEFGD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MHLGCEDNNPD__CTOR_OFFSET))(this);
	}

	::System::String* NJBPAHHFFNN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_MHLGCEDNNPD_NJBPAHHFFNN_OFFSET))(this);
	}
};
