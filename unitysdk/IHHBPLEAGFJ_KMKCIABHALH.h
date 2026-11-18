#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define IHHBPLEAGFJ_KMKCIABHALH_HBKGFFDBMDO_OFFSET UNITYSDK_OFFSET(0xEBD7930)
#define IHHBPLEAGFJ_KMKCIABHALH__CTOR_OFFSET UNITYSDK_OFFSET(0xEBD7920)

inline static constexpr unsigned int IHHBPLEAGFJ_KMKCIABHALH_TypeDefinitionIndex = 80588;

class IHHBPLEAGFJ_KMKCIABHALH : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI; // 0x10
	::System::String* FAAALPJNGJB; // 0x20
	::System::Boolean JJMIMGONMCM; // 0x28
	::System::Boolean HPFBPFMPPIO; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_KMKCIABHALH__CTOR_OFFSET))(this);
	}

	::System::Void HBKGFFDBMDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHBPLEAGFJ_KMKCIABHALH_HBKGFFDBMDO_OFFSET))(this);
	}
};
