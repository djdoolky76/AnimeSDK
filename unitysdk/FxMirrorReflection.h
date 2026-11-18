#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define FXMIRRORREFLECTION_BINDPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1C822560)
#define FXMIRRORREFLECTION_GENERATEMIRRORPART_OFFSET UNITYSDK_OFFSET(0x1C822960)
#define FXMIRRORREFLECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C822390)
#define FXMIRRORREFLECTION_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1C8224E0)
#define FXMIRRORREFLECTION_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1C822490)
#define FXMIRRORREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C823120)

inline static constexpr unsigned int FxMirrorReflection_TypeDefinitionIndex = 26824;

class FxMirrorReflection : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_ONENABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void BindPropertyBlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_BINDPROPERTYBLOCK_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_ONREALENABLE_OFFSET))(this);
	}

	::System::Void GenerateMirrorPart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_GENERATEMIRRORPART_OFFSET))(this);
	}
};
