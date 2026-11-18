#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKENOHMEEGI;
class GLBLKNMAJOE;

#define CKENOHMEEGI_LIHOIDMHJIL__CTOR_OFFSET UNITYSDK_OFFSET(0x16A30250)

inline static constexpr unsigned int CKENOHMEEGI_LIHOIDMHJIL_TypeDefinitionIndex = 75213;

class CKENOHMEEGI_LIHOIDMHJIL : public ::System::Object
{
public:
	::GLBLKNMAJOE* DFMKILICPFB; // 0x10
	::CKENOHMEEGI* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKENOHMEEGI_LIHOIDMHJIL__CTOR_OFFSET))(this);
	}
};
