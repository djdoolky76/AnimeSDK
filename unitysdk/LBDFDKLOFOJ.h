#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/Object.h"

#define LBDFDKLOFOJ_JFFBLLOAKGA_OFFSET UNITYSDK_OFFSET(0x1299E130)
#define LBDFDKLOFOJ_LAALJDOKFAL_OFFSET UNITYSDK_OFFSET(0x129B5050)

inline static constexpr unsigned int LBDFDKLOFOJ_TypeDefinitionIndex = 68504;

class LBDFDKLOFOJ : public ::System::Object
{
public:
	static ::System::Boolean JFFBLLOAKGA(::Share::EItemType JCHOHDBNCKJ)
	{
		return ((::System::Boolean(*)(::Share::EItemType))((::PBYTE)hIl2Cpp + LBDFDKLOFOJ_JFFBLLOAKGA_OFFSET))(JCHOHDBNCKJ);
	}

	static ::System::Boolean LAALJDOKFAL(::Share::EItemType JCHOHDBNCKJ)
	{
		return ((::System::Boolean(*)(::Share::EItemType))((::PBYTE)hIl2Cpp + LBDFDKLOFOJ_LAALJDOKFAL_OFFSET))(JCHOHDBNCKJ);
	}
};
