#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPPKNDHKKHN.h"
#include "unitysdk/System/Object.h"

class OHAILKANOOK;

#define KNBCLDIGJEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1269D750)

inline static constexpr unsigned int KNBCLDIGJEK_TypeDefinitionIndex = 74568;

class KNBCLDIGJEK : public ::System::Object
{
public:
	::OHAILKANOOK* MNBAALEHLAJ; // 0x10
	::OPPKNDHKKHN FCBAAOPFKLB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBCLDIGJEK__CTOR_OFFSET))(this);
	}
};
