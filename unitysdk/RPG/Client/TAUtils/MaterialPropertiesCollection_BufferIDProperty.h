#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERIDPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xE1839D0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERIDPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE185B80)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_BufferIDProperty_TypeDefinitionIndex = 73623;

	class MaterialPropertiesCollection_BufferIDProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERIDPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERIDPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
