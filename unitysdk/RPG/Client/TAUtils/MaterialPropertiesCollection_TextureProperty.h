#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_TEXTUREPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xE183710)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_TEXTUREPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE186060)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_TextureProperty_TypeDefinitionIndex = 73621;

	class MaterialPropertiesCollection_TextureProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_TEXTUREPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_TEXTUREPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
