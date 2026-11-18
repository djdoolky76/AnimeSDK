#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLKBHPGPFMJ.h"
#include "unitysdk/System/Object.h"

class JNAHOHABAIC;

#define LPDGFGFDEGP_AMPAFAOMHID_OFFSET UNITYSDK_OFFSET(0x151B6DC0)
#define LPDGFGFDEGP__CTOR_OFFSET UNITYSDK_OFFSET(0x151B6DB0)

inline static constexpr unsigned int LPDGFGFDEGP_TypeDefinitionIndex = 93126;

class LPDGFGFDEGP : public ::System::Object
{
public:
	::JNAHOHABAIC* DAFGLDHNEGL; // 0x10
	::DLKBHPGPFMJ FFKOPDFAIJD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDGFGFDEGP__CTOR_OFFSET))(this);
	}

	::DLKBHPGPFMJ AMPAFAOMHID()
	{
		return ((::DLKBHPGPFMJ(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDGFGFDEGP_AMPAFAOMHID_OFFSET))(this);
	}
};
