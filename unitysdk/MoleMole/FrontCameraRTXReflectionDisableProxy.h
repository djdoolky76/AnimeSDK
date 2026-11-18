#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_FRONTCAMERARTXREFLECTIONDISABLEPROXY_SWITCHMIRRORRTXREFLECTION_OFFSET UNITYSDK_OFFSET(0x180E9AF0)
#define MOLEMOLE_FRONTCAMERARTXREFLECTIONDISABLEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x180E9D90)

namespace MoleMole
{
	inline static constexpr unsigned int FrontCameraRTXReflectionDisableProxy_TypeDefinitionIndex = 44081;

	class FrontCameraRTXReflectionDisableProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::GameObject** StaticGet_GJGAFLPDDBG()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(FrontCameraRTXReflectionDisableProxy_TypeDefinitionIndex)->GetStaticField(0x520E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRONTCAMERARTXREFLECTIONDISABLEPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void SwitchMirrorRtxReflection(::System::Boolean GHJLAJDDCMI, ::UnityEngine::GameObject* FLCCGKAEMLP)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_FRONTCAMERARTXREFLECTIONDISABLEPROXY_SWITCHMIRRORRTXREFLECTION_OFFSET))(GHJLAJDDCMI, FLCCGKAEMLP);
		}
	};
}
