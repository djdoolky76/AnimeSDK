#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEKLIGLLJKM;

#define BJCBJMNADIG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x139707E0)
#define BJCBJMNADIG__CTOR_OFFSET UNITYSDK_OFFSET(0x139707D0)

inline static constexpr unsigned int BJCBJMNADIG_TypeDefinitionIndex = 69748;

class BJCBJMNADIG : public ::System::Object
{
public:
	::MEKLIGLLJKM* POJEDACFDOF; // 0x10
	::System::Int32 EPECKAHNOKB; // 0x18
	::System::Int32 BEFLHMCGADE; // 0x1C
	::System::Int32 FMAFNOIOJKE; // 0x20
	::System::Int32 IAFHFEIEPHA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCBJMNADIG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCBJMNADIG_PHOADBJGFBE_OFFSET))(this);
	}
};
