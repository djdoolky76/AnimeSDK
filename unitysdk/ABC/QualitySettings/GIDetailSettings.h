#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ADF037A9655B313A.h"
#include "unitysdk/UnityEngine/EE7661677E0C0DC0.h"
#include "unitysdk/UnityEngine/F41F7955E4CDD7C1.h"

#define ABC_QUALITYSETTINGS_GIDETAILSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2206170)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int GIDetailSettings_TypeDefinitionIndex = 9021;

	class GIDetailSettings : public ::System::Object
	{
	public:
		::System::Boolean enableGI; // 0x10
		::System::Boolean apvManuallyMode; // 0x11
		::System::Boolean intepolateAPVProbe; // 0x12
		::System::Boolean intepolateAPVProbeEx; // 0x13
		::System::Single relightSectorRatio; // 0x14
		::System::Single relightProbeRatio; // 0x18
		::System::Single fillAPVRatio; // 0x1C
		::UnityEngine::ADF037A9655B313A apvSHBand; // 0x20
		::UnityEngine::EE7661677E0C0DC0 apvBrickCountBudget; // 0x24
		::System::Int32 maxActiveSector; // 0x28
		::System::Boolean halfResLighting; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single coverRange; // 0x30
		::System::Boolean stripTODData; // 0x34
		::System::Byte _padding1[0x3];
		::UnityEngine::F41F7955E4CDD7C1 usingTimes; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_GIDETAILSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
