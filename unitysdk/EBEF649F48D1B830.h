#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/B18E174BBCE2DD62.h"

#define EBEF649F48D1B830__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EBEF649F48D1B830_TypeDefinitionIndex = 7641;

class EBEF649F48D1B830 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::B18E174BBCE2DD62 A063A11B0F0664A8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBEF649F48D1B830__CTOR_OFFSET))(this);
	}
};
