#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TA_LOCALLIGHTTEST_CTOR_OFFSET UNITYSDK_OFFSET(0x1713F7C0)
#define TA_LOCALLIGHTTEST_START_OFFSET UNITYSDK_OFFSET(0x1713F5F0)
#define TA_LOCALLIGHTTEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1713F640)

inline static constexpr unsigned int TA_LocalLightTest_TypeDefinitionIndex = 48467;

	class TA_LocalLightTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 NPBFLDGDPAD; // 0x18
		::System::Int32 IFJFBBBLCIK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_LOCALLIGHTTEST_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_LOCALLIGHTTEST_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_LOCALLIGHTTEST_UPDATE_OFFSET))(this);
		}

	};
