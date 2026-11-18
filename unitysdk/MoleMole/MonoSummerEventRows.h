#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSUMMEREVENTROWS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9360F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSummerEventRows_TypeDefinitionIndex = 78788;

	class MonoSummerEventRows : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Transform*>* roots; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTROWS__CTOR_OFFSET))(this);
		}
	};
}
