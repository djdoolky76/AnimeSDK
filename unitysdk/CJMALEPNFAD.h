#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

#define CJMALEPNFAD_ADINNANMLLC_OFFSET UNITYSDK_OFFSET(0x193E1920)

inline static constexpr unsigned int CJMALEPNFAD_TypeDefinitionIndex = 48178;

class CJMALEPNFAD : public ::System::Object
{
public:
	static ::Foundation::AssetPath ADINNANMLLC(::Foundation::AssetPath PJNJFACFJHP, ::System::Boolean IMFIAHBLBEH)
	{
		return ((::Foundation::AssetPath(*)(::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + CJMALEPNFAD_ADINNANMLLC_OFFSET))(PJNJFACFJHP, IMFIAHBLBEH);
	}
};
