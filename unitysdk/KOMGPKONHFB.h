#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PKDEEDPGBOD;

#define KOMGPKONHFB_INDCLCDONAA_OFFSET UNITYSDK_OFFSET(0x1996E850)

inline static constexpr unsigned int KOMGPKONHFB_TypeDefinitionIndex = 84940;

class KOMGPKONHFB : public ::System::Object
{
public:
	static ::System::Boolean INDCLCDONAA(::PKDEEDPGBOD* KNHIFHIKHIO, ::System::Int32& BEDFCMGLJHH)
	{
		return ((::System::Boolean(*)(::PKDEEDPGBOD*, ::System::Int32&))((::PBYTE)hIl2Cpp + KOMGPKONHFB_INDCLCDONAA_OFFSET))(KNHIFHIKHIO, BEDFCMGLJHH);
	}
};
