#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define FKGMDHGLCDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1429CF00)

inline static constexpr unsigned int FKGMDHGLCDP_TypeDefinitionIndex = 77119;

class FKGMDHGLCDP : public ::System::Object
{
public:
	::System::Type* BNOJPLGFOOF; // 0x10
	::System::Single KMJFMKJBOFH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGMDHGLCDP__CTOR_OFFSET))(this);
	}
};
