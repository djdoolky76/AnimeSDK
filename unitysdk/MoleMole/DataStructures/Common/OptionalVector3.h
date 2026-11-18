#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD730)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int OptionalVector3_TypeDefinitionIndex = 28174;

	class OptionalVector3
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector3 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_OPTIONALVECTOR3__CTOR_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
