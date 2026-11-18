#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

#define AAPCMKFLFDH_NGCMIKBMCKH__CTOR_OFFSET UNITYSDK_OFFSET(0x12CD0FD0)

inline static constexpr unsigned int AAPCMKFLFDH_NGCMIKBMCKH_TypeDefinitionIndex = 70236;

class AAPCMKFLFDH_NGCMIKBMCKH : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle PHHDHIBOCKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCMKFLFDH_NGCMIKBMCKH__CTOR_OFFSET))(this);
	}
};
