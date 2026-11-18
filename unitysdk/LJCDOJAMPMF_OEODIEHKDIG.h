#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define LJCDOJAMPMF_OEODIEHKDIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16853250)

inline static constexpr unsigned int LJCDOJAMPMF_OEODIEHKDIG_TypeDefinitionIndex = 71953;

class LJCDOJAMPMF_OEODIEHKDIG : public ::System::Object
{
public:
	::FluffyUnderware::Curvy::CurvySpline* IFHEOPLLDGC; // 0x10
	::Foundation::ViewObject::ViewObjectHandle GDMNDDJHBDJ; // 0x18
	::MoleMole::EntityHandle KECKGDFIALJ; // 0x28
	::System::Single IJKOLMELBBC; // 0x38
	::System::Single IMLLDOHDCNC; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_OEODIEHKDIG__CTOR_OFFSET))(this);
	}
};
