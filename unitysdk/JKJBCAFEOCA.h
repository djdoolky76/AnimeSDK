#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class KPGMJJOHEHL;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JKJBCAFEOCA_BINDENTITY_OFFSET UNITYSDK_OFFSET(0x17B2FEA0)
#define JKJBCAFEOCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B2FE10)
#define JKJBCAFEOCA_HIDEENERGYBAR_OFFSET UNITYSDK_OFFSET(0x17B2FEF0)
#define JKJBCAFEOCA_ONAVATARPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x17B2FE50)
#define JKJBCAFEOCA_SHOWENERGYBAR_OFFSET UNITYSDK_OFFSET(0x17B2FF40)
#define JKJBCAFEOCA__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2FE00)

inline static constexpr unsigned int JKJBCAFEOCA_TypeDefinitionIndex = 72562;

class JKJBCAFEOCA : public ::System::Object
{
public:
	::UnityEngine::GameObject* DOPLIMEHHAB; // 0x10
	::UnityEngine::Transform* LMAMOJPPHKE; // 0x18

	::System::Void _ctor(::UnityEngine::Transform* IAPKABMDJNF, ::UnityEngine::GameObject* KEHEKEBLPPG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JKJBCAFEOCA__CTOR_OFFSET))(this, IAPKABMDJNF, KEHEKEBLPPG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJBCAFEOCA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnAvatarPropertyChange(::KPGMJJOHEHL* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::KPGMJJOHEHL*))((::PBYTE)hIl2Cpp + JKJBCAFEOCA_ONAVATARPROPERTYCHANGE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void BindEntity(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + JKJBCAFEOCA_BINDENTITY_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void HideEnergyBar()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJBCAFEOCA_HIDEENERGYBAR_OFFSET))(this);
	}

	::System::Void ShowEnergyBar()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJBCAFEOCA_SHOWENERGYBAR_OFFSET))(this);
	}
};
