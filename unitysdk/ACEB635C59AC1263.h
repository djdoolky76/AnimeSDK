#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }

#define ACEB635C59AC1263_E41863E42408537E_OFFSET UNITYSDK_OFFSET(0x207D8D0)
#define ACEB635C59AC1263_E7BCF830FE542584_OFFSET UNITYSDK_OFFSET(0x207E6D0)
#define ACEB635C59AC1263_EB1BEB3E93D00B20_OFFSET UNITYSDK_OFFSET(0x207F160)

inline static constexpr unsigned int ACEB635C59AC1263_TypeDefinitionIndex = 8496;

class ACEB635C59AC1263 : public ::System::Object
{
public:
	static ::UnityEngine::Mesh* E41863E42408537E()
	{
		return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + ACEB635C59AC1263_E41863E42408537E_OFFSET))();
	}

	static ::UnityEngine::Vector3 EB1BEB3E93D00B20(::UnityEngine::Vector3 E56921A8A02EE740, ::UnityEngine::Vector3 ED6BA5E2880F301C, ::UnityEngine::Vector3 BB265210A5A17434)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ACEB635C59AC1263_EB1BEB3E93D00B20_OFFSET))(E56921A8A02EE740, ED6BA5E2880F301C, BB265210A5A17434);
	}

	static ::UnityEngine::Mesh* E7BCF830FE542584()
	{
		return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + ACEB635C59AC1263_E7BCF830FE542584_OFFSET))();
	}
};
