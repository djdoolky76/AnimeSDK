#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LCPKGBNFMGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC642C0)

inline static constexpr unsigned int LCPKGBNFMGL_TypeDefinitionIndex = 95336;

class LCPKGBNFMGL : public ::System::Object
{
public:
	::System::Int32 DJJGLILJKEA; // 0x10
	::System::Int32 ONGKNJDGBLJ; // 0x14
	::System::Int32 JOGJHDBEDPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPKGBNFMGL__CTOR_OFFSET))(this);
	}
};
