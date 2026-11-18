#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/System/Object.h"

class BGKBACMKBCL;

#define DBELCJFHFJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1205C780)

inline static constexpr unsigned int DBELCJFHFJM_TypeDefinitionIndex = 80281;

class DBELCJFHFJM : public ::System::Object
{
public:
	::BGKBACMKBCL* MHIFPEALGIM; // 0x10
	::System::Boolean LIEJIGMGGOL; // 0x18
	::System::Byte _padding0[0x3];
	::DJPBMMDAFKB OBNIAHNMHPF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBELCJFHFJM__CTOR_OFFSET))(this);
	}
};
