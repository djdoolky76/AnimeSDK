#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENKKLEFNAKG.h"
#include "unitysdk/System/Object.h"

class PMGMBGFOFKG;

#define PMGMBGFOFKG_AHEEAOELNKL_GDLDLABBAPB_OFFSET UNITYSDK_OFFSET(0x1D6314C0)
#define PMGMBGFOFKG_AHEEAOELNKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6314B0)

inline static constexpr unsigned int PMGMBGFOFKG_AHEEAOELNKL_TypeDefinitionIndex = 65878;

class PMGMBGFOFKG_AHEEAOELNKL : public ::System::Object
{
public:
	::PMGMBGFOFKG* KLHPEBKNIFB; // 0x10
	::ENKKLEFNAKG OIKMICDBAPP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_AHEEAOELNKL__CTOR_OFFSET))(this);
	}

	::System::Void GDLDLABBAPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_AHEEAOELNKL_GDLDLABBAPB_OFFSET))(this);
	}
};
