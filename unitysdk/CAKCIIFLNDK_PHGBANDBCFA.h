#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJGEHPBJKDM.h"
#include "unitysdk/System/Object.h"

class EKHEOJOFLLA;
class HLGHMFKACOB;

#define CAKCIIFLNDK_PHGBANDBCFA_MEBHKBHEOGJ_OFFSET UNITYSDK_OFFSET(0x14C72040)
#define CAKCIIFLNDK_PHGBANDBCFA__CTOR_OFFSET UNITYSDK_OFFSET(0x14C70620)

inline static constexpr unsigned int CAKCIIFLNDK_PHGBANDBCFA_TypeDefinitionIndex = 76211;

class CAKCIIFLNDK_PHGBANDBCFA : public ::System::Object
{
public:
	::HLGHMFKACOB* EHJFKODGGBM; // 0x10
	::FJGEHPBJKDM EKOHIHINMMO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_PHGBANDBCFA__CTOR_OFFSET))(this);
	}

	::System::Void MEBHKBHEOGJ(::EKHEOJOFLLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_PHGBANDBCFA_MEBHKBHEOGJ_OFFSET))(this, AAOCANGHBDG);
	}
};
