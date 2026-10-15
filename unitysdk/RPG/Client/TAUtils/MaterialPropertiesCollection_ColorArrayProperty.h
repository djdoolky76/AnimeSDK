#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORARRAYPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xE18E0F0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORARRAYPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE18FF60)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_ColorArrayProperty_TypeDefinitionIndex = 73627;

	class MaterialPropertiesCollection_ColorArrayProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORARRAYPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORARRAYPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
