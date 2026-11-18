#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

#define PEJCCBOKHCL_EDBJODNCCDA_CMLNMIMFNLL_OFFSET UNITYSDK_OFFSET(0x150BED90)
#define PEJCCBOKHCL_EDBJODNCCDA__CTOR_OFFSET UNITYSDK_OFFSET(0x150BED80)

inline static constexpr unsigned int PEJCCBOKHCL_EDBJODNCCDA_TypeDefinitionIndex = 72586;

class PEJCCBOKHCL_EDBJODNCCDA : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle DBMEFDJPDCB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EDBJODNCCDA__CTOR_OFFSET))(this);
	}

	::System::Boolean CMLNMIMFNLL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_EDBJODNCCDA_CMLNMIMFNLL_OFFSET))(this);
	}
};
