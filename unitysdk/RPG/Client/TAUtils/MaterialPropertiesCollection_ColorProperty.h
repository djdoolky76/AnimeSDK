#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A3A50)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1C5A6320)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_ColorProperty_TypeDefinitionIndex = 75742;

	class MaterialPropertiesCollection_ColorProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_COLORPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
