#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MPCPHMBAIPB__CTOR_OFFSET UNITYSDK_OFFSET(0x14075680)

inline static constexpr unsigned int MPCPHMBAIPB_TypeDefinitionIndex = 56159;

class MPCPHMBAIPB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCPHMBAIPB__CTOR_OFFSET))(this);
	}
};
