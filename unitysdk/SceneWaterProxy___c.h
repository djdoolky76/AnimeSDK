#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class GameObject; }

#define SCENEWATERPROXY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD6E6A0)
#define SCENEWATERPROXY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD6E6E0)
#define SCENEWATERPROXY___C__SETWAVECENTERPOS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1FD6E6F0)

inline static constexpr unsigned int SceneWaterProxy___c_TypeDefinitionIndex = 36711;

class SceneWaterProxy___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(SceneWaterProxy___c_TypeDefinitionIndex)->GetStaticField(0x2BA70);
	}
	static ::System::Predicate_1<::UnityEngine::GameObject*>** StaticGet___9__7_0()
	{
		return (::System::Predicate_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(SceneWaterProxy___c_TypeDefinitionIndex)->GetStaticField(0x2BA78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENEWATERPROXY___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEWATERPROXY___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetWaveCenterPos_b__7_0(::UnityEngine::GameObject* go)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SCENEWATERPROXY___C__SETWAVECENTERPOS_B__7_0_OFFSET))(this, go);
	}
};
