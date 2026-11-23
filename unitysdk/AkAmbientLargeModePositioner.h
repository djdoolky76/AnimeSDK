#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define AKAMBIENTLARGEMODEPOSITIONER_A190466725AC5C92_OFFSET UNITYSDK_OFFSET(0x2913B50)
#define AKAMBIENTLARGEMODEPOSITIONER_B7229E80C45D9543_OFFSET UNITYSDK_OFFSET(0x2913B00)
#define AKAMBIENTLARGEMODEPOSITIONER_FEB6A7185C09DDB2_OFFSET UNITYSDK_OFFSET(0x2913BA0)
#define AKAMBIENTLARGEMODEPOSITIONER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int AkAmbientLargeModePositioner_TypeDefinitionIndex = 20453;

class AkAmbientLargeModePositioner : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 FEB6A7185C09DDB2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENTLARGEMODEPOSITIONER_FEB6A7185C09DDB2_OFFSET))(this);
	}

	::UnityEngine::Vector3 B7229E80C45D9543()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENTLARGEMODEPOSITIONER_B7229E80C45D9543_OFFSET))(this);
	}

	::UnityEngine::Vector3 A190466725AC5C92()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENTLARGEMODEPOSITIONER_A190466725AC5C92_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENTLARGEMODEPOSITIONER__CTOR_OFFSET))(this);
	}
};
