#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GFDHIDGGKGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E57F1E0)

inline static constexpr unsigned int GFDHIDGGKGN_TypeDefinitionIndex = 94528;

class GFDHIDGGKGN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDHIDGGKGN__CTOR_OFFSET))(this);
	}
};
