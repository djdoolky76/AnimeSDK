#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;

#define PCMENEMPLGF_FNGECMHGIMB__CTOR_OFFSET UNITYSDK_OFFSET(0x155334E0)

inline static constexpr unsigned int PCMENEMPLGF_FNGECMHGIMB_TypeDefinitionIndex = 62859;

class PCMENEMPLGF_FNGECMHGIMB : public ::System::Object
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x10
	::System::Boolean FINHEBPKHFA; // 0x18
	::System::Boolean LBHPIIKHBCC; // 0x19
	::System::Boolean NBPEPCOGBEM; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_FNGECMHGIMB__CTOR_OFFSET))(this);
	}
};
