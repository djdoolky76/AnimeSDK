#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define OLEHIMBAHNP_BFBMIOODGEK_1_OFFSET UNITYSDK_OFFSET(0x12948010)

inline static constexpr unsigned int OLEHIMBAHNP_TypeDefinitionIndex = 41171;

class OLEHIMBAHNP : public ::System::Object
{
public:
	static ::System::UInt32 BFBMIOODGEK_1(::System::Type* OBNIAHNMHPF)
	{
		return ((::System::UInt32(*)(::System::Type*))((::PBYTE)hIl2Cpp + OLEHIMBAHNP_BFBMIOODGEK_1_OFFSET))(OBNIAHNMHPF);
	}
};
