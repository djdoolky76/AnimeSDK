#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MONOMATERIALPROPERTYBLOCKRESOLVER_INIT_OFFSET UNITYSDK_OFFSET(0x12C1EE70)
#define MONOMATERIALPROPERTYBLOCKRESOLVER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12C1F150)
#define MONOMATERIALPROPERTYBLOCKRESOLVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12C1EE10)
#define MONOMATERIALPROPERTYBLOCKRESOLVER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x12C1F100)
#define MONOMATERIALPROPERTYBLOCKRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1FD50)

inline static constexpr unsigned int MonoMaterialPropertyBlockResolver_TypeDefinitionIndex = 84065;

class MonoMaterialPropertyBlockResolver : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::MaterialPropertyBlock* _mpb; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _renderers; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* _rendererDatas; // 0x28
	::System::Boolean initialized; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMATERIALPROPERTYBLOCKRESOLVER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMATERIALPROPERTYBLOCKRESOLVER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMATERIALPROPERTYBLOCKRESOLVER_ONVALIDATE_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMATERIALPROPERTYBLOCKRESOLVER_INIT_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOMATERIALPROPERTYBLOCKRESOLVER_LATEUPDATE_OFFSET))(this);
	}
};
