#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define SCENEHIDDENOBJECTSET_REFRESH_OFFSET UNITYSDK_OFFSET(0x119AD900)
#define SCENEHIDDENOBJECTSET_START_OFFSET UNITYSDK_OFFSET(0x119AD790)
#define SCENEHIDDENOBJECTSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x119ADBA0)
#define SCENEHIDDENOBJECTSET__CTOR_OFFSET UNITYSDK_OFFSET(0x119ADA60)

inline static constexpr unsigned int SceneHiddenObjectSet_TypeDefinitionIndex = 84496;

class SceneHiddenObjectSet : public ::UnityEngine::MonoBehaviour
{
public:
	static ::SceneHiddenObjectSet** StaticGet_Instance()
	{
		return (::SceneHiddenObjectSet**)Il2CppClass::FromTypeDefinitionIndex(SceneHiddenObjectSet_TypeDefinitionIndex)->GetStaticField(0x31930);
	}
	static ::System::Boolean* StaticGet_HideSceneSmallObject()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SceneHiddenObjectSet_TypeDefinitionIndex)->GetStaticField(0xA7D0);
	}
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* SmallObjectList; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* MiddleObjectList; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEHIDDENOBJECTSET__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENEHIDDENOBJECTSET__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEHIDDENOBJECTSET_START_OFFSET))(this);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEHIDDENOBJECTSET_REFRESH_OFFSET))(this);
	}
};
