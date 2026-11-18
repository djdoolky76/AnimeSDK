#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }

#define WEAPONTRANSMATMODIFIER_SETUPWEAPONTRANSPARENTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D8DCD40)
#define WEAPONTRANSMATMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DD0D0)

inline static constexpr unsigned int WeaponTransMatModifier_TypeDefinitionIndex = 26273;

class WeaponTransMatModifier : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Material* _gachaStageMaterial; // 0x18
	::Il2CppArray<::UnityEngine::Material*>* _materials; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONTRANSMATMODIFIER__CTOR_OFFSET))(this);
	}

	::System::Void SetupWeaponTransparentMaterial(::System::Boolean isGachaStage)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + WEAPONTRANSMATMODIFIER_SETUPWEAPONTRANSPARENTMATERIAL_OFFSET))(this, isGachaStage);
	}
};
