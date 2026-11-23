#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine { class B196ACFA9D2AE729; }
namespace UnityEngine { class Texture2D; }

#define TA_ENVIRONMENTSYSTEM_ESRAMP_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x28DADC0)
#define TA_ENVIRONMENTSYSTEM_ESRAMP_INITGRADIENTTEXTUREIFNEEDED_OFFSET UNITYSDK_OFFSET(0x28DA880)
#define TA_ENVIRONMENTSYSTEM_ESRAMP_UPDATEGRADIENTTEXTURE_OFFSET UNITYSDK_OFFSET(0x28DA9C0)
#define TA_ENVIRONMENTSYSTEM_ESRAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x28DAB40)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESRamp_TypeDefinitionIndex = 16387;

	class ESRamp : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* _value; // 0x10
		::UnityEngine::B196ACFA9D2AE729* gradient; // 0x18
		::System::Boolean isLinear; // 0x20
		::System::Boolean _isInited; // 0x21
		::System::Boolean isDirty; // 0x22
		::System::Byte _padding0[0x5];
		::Il2CppArray<::UnityEngine::E46B881AA2636190>* _tempColorArrayForGradientTex; // 0x28

		::UnityEngine::Texture2D* get_Value()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESRAMP_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean InitGradientTextureIfNeeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESRAMP_INITGRADIENTTEXTUREIFNEEDED_OFFSET))(this);
		}

		::System::Void UpdateGradientTexture(::System::Boolean ED663A2DE16B068C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESRAMP_UPDATEGRADIENTTEXTURE_OFFSET))(this, ED663A2DE16B068C);
		}

		::System::Void _ctor(::System::Nullable_1<::UnityEngine::E46B881AA2636190> FD6BEC6563AC7110)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::E46B881AA2636190>))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESRAMP__CTOR_OFFSET))(this, FD6BEC6563AC7110);
		}
	};
}
