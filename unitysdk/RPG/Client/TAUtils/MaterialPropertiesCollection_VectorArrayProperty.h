#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORARRAYPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xEC3B410)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORARRAYPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xEC3D850)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_VectorArrayProperty_TypeDefinitionIndex = 75749;

	class MaterialPropertiesCollection_VectorArrayProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORARRAYPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORARRAYPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
