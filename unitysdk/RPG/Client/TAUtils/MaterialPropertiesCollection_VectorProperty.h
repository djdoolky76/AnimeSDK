#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xEC3AA30)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xEC3D8D0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_VectorProperty_TypeDefinitionIndex = 75742;

	class MaterialPropertiesCollection_VectorProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
