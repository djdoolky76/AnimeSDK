#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }

#define SCENEMATERIALPARAMETERREWRITER_APPLY_OFFSET UNITYSDK_OFFSET(0x1D168B10)
#define SCENEMATERIALPARAMETERREWRITER_CLEARCONTENT_OFFSET UNITYSDK_OFFSET(0x1D168C00)
#define SCENEMATERIALPARAMETERREWRITER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D168BB0)
#define SCENEMATERIALPARAMETERREWRITER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D168AC0)
#define SCENEMATERIALPARAMETERREWRITER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D168CA0)
#define SCENEMATERIALPARAMETERREWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D168CF0)

inline static constexpr unsigned int SceneMaterialParameterRewriter_TypeDefinitionIndex = 26793;

class SceneMaterialParameterRewriter : public ::UnityEngine::MonoBehaviour
{
public:
	::Il2CppArray<::System::Object*>* animatedRenderItemList; // 0x18
	::System::Boolean needRefrashEveryFrame; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_ONDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_UPDATE_OFFSET))(this);
	}

	::System::Void Apply()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_APPLY_OFFSET))(this);
	}

	::System::Void ClearContent()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_CLEARCONTENT_OFFSET))(this);
	}
};
