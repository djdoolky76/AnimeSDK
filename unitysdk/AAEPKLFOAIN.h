#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AAEPKLFOAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x143329E0)

inline static constexpr unsigned int AAEPKLFOAIN_TypeDefinitionIndex = 82033;

class AAEPKLFOAIN : public ::System::Object
{
public:
	::System::String* DFHEOENHJFD; // 0x10
	::System::Single CCDNKBONPLB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEPKLFOAIN__CTOR_OFFSET))(this);
	}
};
