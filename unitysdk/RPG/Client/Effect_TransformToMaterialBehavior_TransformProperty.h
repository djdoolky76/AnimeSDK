#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/MaterialPropertiesCollection_Property.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xCD6BD40)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xCD6BC50)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformToMaterialBehavior_TransformProperty_TypeDefinitionIndex = 70573;

	class Effect_TransformToMaterialBehavior_TransformProperty : public ::RPG::Client::TAUtils::MaterialPropertiesCollection_Property
	{
	public:
		::UnityEngine::Transform* transform; // 0x20
		::System::Boolean worldSpace; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
