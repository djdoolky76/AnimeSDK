#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterSize.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define IGNISFATUUSPLANEAUTOSIZE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16ABB8C0)
#define IGNISFATUUSPLANEAUTOSIZE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x16ABB9A0)
#define IGNISFATUUSPLANEAUTOSIZE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16ABB9F0)
#define IGNISFATUUSPLANEAUTOSIZE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16ABB2E0)
#define IGNISFATUUSPLANEAUTOSIZE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x16ABB920)
#define IGNISFATUUSPLANEAUTOSIZE_SCALESIZE_OFFSET UNITYSDK_OFFSET(0x16ABB4F0)
#define IGNISFATUUSPLANEAUTOSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x16ABBA40)

inline static constexpr unsigned int IgnisFatuusPlaneAutoSize_TypeDefinitionIndex = 65885;

class IgnisFatuusPlaneAutoSize : public ::UnityEngine::MonoBehaviour
{
public:
	::MoleMole::Config::CharacterSize avatarSize; // 0x18
	::System::Byte _padding0[0x4];
	::Il2CppArray<::System::Single>* planeSizeScale; // 0x20
	::MoleMole::Config::CharacterSize avatarSizePre; // 0x28
	::System::Byte _padding1[0x4];
	::UnityEngine::MeshRenderer* planeRenderer; // 0x30
	::UnityEngine::MaterialPropertyBlock* propertyBlock; // 0x38
	::System::Int32 uvScalefromePlaneSize; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_ONENABLE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_LATEUPDATE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_ONVALIDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_ONDISABLE_OFFSET))(this);
	}

	::System::Void ScaleSize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNISFATUUSPLANEAUTOSIZE_SCALESIZE_OFFSET))(this);
	}
};
