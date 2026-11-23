#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_B992AFD8109E86E6_AED54CEC3378D9D4_OFFSET UNITYSDK_OFFSET(0x410EEC0)
#define UNITYENGINE_B992AFD8109E86E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int B992AFD8109E86E6_TypeDefinitionIndex = 16993;

	class B992AFD8109E86E6 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B992AFD8109E86E6__CTOR_OFFSET))(this);
		}

		static ::System::Boolean AED54CEC3378D9D4()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_B992AFD8109E86E6_AED54CEC3378D9D4_OFFSET))();
		}
	};
}
