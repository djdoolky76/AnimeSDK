#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define LAEFOAMOECB_CGIDPBMNEAN_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x129B2290)
#define LAEFOAMOECB_CGIDPBMNEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x129B2280)

inline static constexpr unsigned int LAEFOAMOECB_CGIDPBMNEAN_TypeDefinitionIndex = 67221;

class LAEFOAMOECB_CGIDPBMNEAN : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEFOAMOECB_CGIDPBMNEAN__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEFOAMOECB_CGIDPBMNEAN_LIDNPLMPHAL_OFFSET))(this);
	}
};
