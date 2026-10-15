#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORARRAYPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xE18DF90)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_VECTORARRAYPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE1903D0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_VectorArrayProperty_TypeDefinitionIndex = 73626;

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
