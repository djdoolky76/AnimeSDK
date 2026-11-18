#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define MHIADGINMFH_BFKBCGGCOJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A654C30)

inline static constexpr unsigned int MHIADGINMFH_BFKBCGGCOJP_TypeDefinitionIndex = 41444;

class MHIADGINMFH_BFKBCGGCOJP : public ::System::Object
{
public:
	::FluffyUnderware::Curvy::CurvySpline* IFHEOPLLDGC; // 0x10
	::Foundation::ViewObject::ViewObjectHandle GDMNDDJHBDJ; // 0x18
	::System::Single IMLLDOHDCNC; // 0x28
	::System::Single IJKOLMELBBC; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIADGINMFH_BFKBCGGCOJP__CTOR_OFFSET))(this);
	}
};
