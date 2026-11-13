#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATARRAYPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A4170)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATARRAYPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1C5A63A0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_FloatArrayProperty_TypeDefinitionIndex = 75747;

	class MaterialPropertiesCollection_FloatArrayProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATARRAYPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATARRAYPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
