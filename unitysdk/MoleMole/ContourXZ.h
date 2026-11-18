#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONTOURXZ__CTOR_OFFSET UNITYSDK_OFFSET(0x118F73F0)

namespace MoleMole
{
	inline static constexpr unsigned int ContourXZ_TypeDefinitionIndex = 55119;

	class ContourXZ : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* points; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONTOURXZ__CTOR_OFFSET))(this);
		}
	};
}
