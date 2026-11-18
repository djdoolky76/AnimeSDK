#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define IGDLBIOALAF_HJGFGEJCGCE_GAKEHCDLGLD_OFFSET UNITYSDK_OFFSET(0x13A98950)
#define IGDLBIOALAF_HJGFGEJCGCE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A98940)

inline static constexpr unsigned int IGDLBIOALAF_HJGFGEJCGCE_TypeDefinitionIndex = 43994;

class IGDLBIOALAF_HJGFGEJCGCE : public ::System::Object
{
public:
	::UnityEngine::GameObject* EIFONLCJOPG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDLBIOALAF_HJGFGEJCGCE__CTOR_OFFSET))(this);
	}

	::System::Void GAKEHCDLGLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDLBIOALAF_HJGFGEJCGCE_GAKEHCDLGLD_OFFSET))(this);
	}
};
