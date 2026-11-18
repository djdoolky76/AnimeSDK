#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NLKHBEJINGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB7970)

inline static constexpr unsigned int NLKHBEJINGK_TypeDefinitionIndex = 28987;

class NLKHBEJINGK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLKHBEJINGK__CTOR_OFFSET))(this);
	}
};
