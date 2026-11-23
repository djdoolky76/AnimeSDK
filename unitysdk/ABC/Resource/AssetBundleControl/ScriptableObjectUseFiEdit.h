#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define ABC_RESOURCE_ASSETBUNDLECONTROL_SCRIPTABLEOBJECTUSEFIEDIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F270C0)

namespace ABC::Resource::AssetBundleControl
{
	inline static constexpr unsigned int ScriptableObjectUseFiEdit_TypeDefinitionIndex = 5197;

	class ScriptableObjectUseFiEdit : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_RESOURCE_ASSETBUNDLECONTROL_SCRIPTABLEOBJECTUSEFIEDIT__CTOR_OFFSET))(this);
		}
	};
}
