#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xE183870)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE185BF0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_BufferProperty_TypeDefinitionIndex = 73622;

	class MaterialPropertiesCollection_BufferProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_BUFFERPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
