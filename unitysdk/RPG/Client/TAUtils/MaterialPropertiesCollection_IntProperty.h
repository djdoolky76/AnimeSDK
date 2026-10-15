#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_INTPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xE183150)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_INTPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE185E50)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_IntProperty_TypeDefinitionIndex = 73617;

	class MaterialPropertiesCollection_IntProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_INTPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_INTPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
