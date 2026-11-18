#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOSCENEMAP3DARROWPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEB3BC90)
#define MONOSCENEMAP3DARROWPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEB3BC40)
#define MONOSCENEMAP3DARROWPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xEB3BCF0)

inline static constexpr unsigned int MonoSceneMap3DArrowProxy_TypeDefinitionIndex = 48515;

class MonoSceneMap3DArrowProxy : public ::UnityEngine::MonoBehaviour
{
public:
	static ::MonoSceneMap3DArrowProxy** StaticGet_s_Map3dArrowProxy()
	{
		return (::MonoSceneMap3DArrowProxy**)Il2CppClass::FromTypeDefinitionIndex(MonoSceneMap3DArrowProxy_TypeDefinitionIndex)->GetStaticField(0x393F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DARROWPROXY__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DARROWPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DARROWPROXY_ONDISABLE_OFFSET))(this);
	}
};
