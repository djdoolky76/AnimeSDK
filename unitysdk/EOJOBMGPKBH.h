#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EOJOBMGPKBH__CTOR_OFFSET UNITYSDK_OFFSET(0x169B2F90)

inline static constexpr unsigned int EOJOBMGPKBH_TypeDefinitionIndex = 76521;

class EOJOBMGPKBH : public ::System::Object
{
public:
	::System::Int32 MGHHKOEFDJI; // 0x10
	::System::Int32 HBLCMAOOKAK; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJOBMGPKBH__CTOR_OFFSET))(this);
	}
};
