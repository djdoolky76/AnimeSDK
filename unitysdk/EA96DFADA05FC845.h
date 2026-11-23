#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/B18E174BBCE2DD62.h"

#define EA96DFADA05FC845__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EA96DFADA05FC845_TypeDefinitionIndex = 9237;

class EA96DFADA05FC845 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::B18E174BBCE2DD62 A063A11B0F0664A8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA96DFADA05FC845__CTOR_OFFSET))(this);
	}
};
