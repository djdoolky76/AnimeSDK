#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Terrain; }

#define E56AEFDD62D5F539_E7C6D5E78B15C99C_EDB92A9FA8C8900E_F625E62EB6F77D99_OFFSET UNITYSDK_OFFSET(0x41CA690)
#define E56AEFDD62D5F539_E7C6D5E78B15C99C_EDB92A9FA8C8900E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace E56AEFDD62D5F539
{
	inline static constexpr unsigned int E7C6D5E78B15C99C_EDB92A9FA8C8900E_TypeDefinitionIndex = 21050;

	class E7C6D5E78B15C99C_EDB92A9FA8C8900E : public ::System::Object
	{
	public:
		::System::Int32 A23C6E8960E4FE83; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E56AEFDD62D5F539_E7C6D5E78B15C99C_EDB92A9FA8C8900E__CTOR_OFFSET))(this);
		}

		::System::Boolean F625E62EB6F77D99(::UnityEngine::Terrain* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Terrain*))((::PBYTE)hIl2Cpp + E56AEFDD62D5F539_E7C6D5E78B15C99C_EDB92A9FA8C8900E_F625E62EB6F77D99_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
