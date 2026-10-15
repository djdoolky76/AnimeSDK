#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AAKKBPEKHMI_CGIIIAGIDCN_OFFSET UNITYSDK_OFFSET(0xEC40)
#define AAKKBPEKHMI_JKOCKAONAOF_OFFSET UNITYSDK_OFFSET(0xEC90)
#define AAKKBPEKHMI_PHEODABLPGO_OFFSET UNITYSDK_OFFSET(0xEBF0)
#define AAKKBPEKHMI_PKDCLKNJPBO_OFFSET UNITYSDK_OFFSET(0xECE0)

inline static constexpr unsigned int AAKKBPEKHMI_TypeDefinitionIndex = 57013;

	struct alignas(4) AAKKBPEKHMI
	{
		::UnityEngine::RaycastHit NMGFKGDBCKE; // 0x10
		::UnityEngine::RaycastHit FHCCCCIGMIF; // 0x40
		::UnityEngine::RaycastHit DNBLIDFGJIG; // 0x70
		::UnityEngine::RaycastHit BDAIMJBFKCL; // 0xA0
		::UnityEngine::Vector3 CPFJCKCGEIC; // 0xD0
		::UnityEngine::Vector3 ABKDOCOEELA; // 0xDC
		::System::Boolean PHEODABLPGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKKBPEKHMI_PHEODABLPGO_OFFSET))(this);
		}

		::System::Boolean CGIIIAGIDCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKKBPEKHMI_CGIIIAGIDCN_OFFSET))(this);
		}

		::System::Boolean JKOCKAONAOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKKBPEKHMI_JKOCKAONAOF_OFFSET))(this);
		}

		::System::Boolean PKDCLKNJPBO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKKBPEKHMI_PKDCLKNJPBO_OFFSET))(this);
		}

	};
