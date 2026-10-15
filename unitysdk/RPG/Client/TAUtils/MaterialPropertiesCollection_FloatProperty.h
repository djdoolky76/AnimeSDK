#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xE18D2F0)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE1900E0)

namespace RPG::Client::TAUtils
{
	class MaterialPropertiesCollection_FloatProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_FLOATPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
