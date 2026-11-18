#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine { class GameObject; }

#define NACICAMOOIA_FMGMOOODOEF_OFFSET UNITYSDK_OFFSET(0x13B4C070)
#define NACICAMOOIA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13B4BF70)
#define NACICAMOOIA__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4BF30)

inline static constexpr unsigned int NACICAMOOIA_TypeDefinitionIndex = 84891;

class NACICAMOOIA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACICAMOOIA__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACICAMOOIA_NPOLNFDBOOD_OFFSET))(this);
	}

	::UnityEngine::GameObject* FMGMOOODOEF()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NACICAMOOIA_FMGMOOODOEF_OFFSET))(this);
	}
};
