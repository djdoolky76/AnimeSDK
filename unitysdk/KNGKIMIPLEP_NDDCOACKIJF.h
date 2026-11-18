#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNGKIMIPLEP;

#define KNGKIMIPLEP_NDDCOACKIJF_BLPHAHEFHOB_OFFSET UNITYSDK_OFFSET(0x17671B80)
#define KNGKIMIPLEP_NDDCOACKIJF__CTOR_OFFSET UNITYSDK_OFFSET(0x176719C0)

inline static constexpr unsigned int KNGKIMIPLEP_NDDCOACKIJF_TypeDefinitionIndex = 74925;

class KNGKIMIPLEP_NDDCOACKIJF : public ::System::Object
{
public:
	::KNGKIMIPLEP* KLHPEBKNIFB; // 0x10
	::System::Int32 PPKEDEIDCGD; // 0x18
	::System::Int32 AOCOIDIMLIH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGKIMIPLEP_NDDCOACKIJF__CTOR_OFFSET))(this);
	}

	::System::Void BLPHAHEFHOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGKIMIPLEP_NDDCOACKIJF_BLPHAHEFHOB_OFFSET))(this);
	}
};
