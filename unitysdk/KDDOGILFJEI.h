#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDDOGILFJEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BF4E0)

inline static constexpr unsigned int KDDOGILFJEI_TypeDefinitionIndex = 94328;

class KDDOGILFJEI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDOGILFJEI__CTOR_OFFSET))(this);
	}
};
