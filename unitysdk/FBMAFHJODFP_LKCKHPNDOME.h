#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBMAFHJODFP;

#define FBMAFHJODFP_LKCKHPNDOME_IJAOMIBMAPF_OFFSET UNITYSDK_OFFSET(0x11CF08A0)
#define FBMAFHJODFP_LKCKHPNDOME__CTOR_OFFSET UNITYSDK_OFFSET(0x11CF0890)

inline static constexpr unsigned int FBMAFHJODFP_LKCKHPNDOME_TypeDefinitionIndex = 76176;

class FBMAFHJODFP_LKCKHPNDOME : public ::System::Object
{
public:
	::FBMAFHJODFP* KLHPEBKNIFB; // 0x10
	::System::Int32 CLGBONPPBNG; // 0x18
	::System::Int32 HNEHCKBPBHF; // 0x1C
	::System::Int32 BOGPAHGJOJK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_LKCKHPNDOME__CTOR_OFFSET))(this);
	}

	::System::Void IJAOMIBMAPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_LKCKHPNDOME_IJAOMIBMAPF_OFFSET))(this);
	}
};
