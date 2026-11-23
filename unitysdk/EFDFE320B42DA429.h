#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EFDFE320B42DA429__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EFDFE320B42DA429_TypeDefinitionIndex = 6917;

class EFDFE320B42DA429 : public ::System::Object
{
public:
	::System::String* AAD46A807EC9A97C; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDFE320B42DA429__CTOR_OFFSET))(this);
	}
};
