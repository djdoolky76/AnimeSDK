#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_MATRIXARRAYPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0xE18E250)
#define RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_MATRIXARRAYPROPERTY_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE1901C0)

namespace RPG::Client::TAUtils
{
	inline static constexpr unsigned int MaterialPropertiesCollection_MatrixArrayProperty_TypeDefinitionIndex = 73628;

	class MaterialPropertiesCollection_MatrixArrayProperty
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_MATRIXARRAYPROPERTY_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAUTILS_MATERIALPROPERTIESCOLLECTION_MATRIXARRAYPROPERTY_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
}
