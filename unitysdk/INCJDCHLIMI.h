#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAOENPMCFON.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Fire; }

#define INCJDCHLIMI_CTOR_OFFSET UNITYSDK_OFFSET(0x164E7FC0)
#define INCJDCHLIMI_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0x164E7900)
#define INCJDCHLIMI_IPAMHBBNLAF_OFFSET UNITYSDK_OFFSET(0x164E7980)
#define INCJDCHLIMI_JGBFDBBNLAF_OFFSET UNITYSDK_OFFSET(0x164E7790)
#define INCJDCHLIMI_KAJBAPMLIGF_OFFSET UNITYSDK_OFFSET(0x164E7DA0)

inline static constexpr unsigned int INCJDCHLIMI_TypeDefinitionIndex = 74181;

	class INCJDCHLIMI : public ::DAOENPMCFON
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCJDCHLIMI_CTOR_OFFSET))(this);
		}

		::System::Void JGBFDBBNLAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCJDCHLIMI_JGBFDBBNLAF_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::ParkourSkillConfig_Fire* FMHKLHAKMKO()
		{
			return ((::RPG::Client::ParkourGame::ParkourSkillConfig_Fire*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCJDCHLIMI_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector3> IPAMHBBNLAF()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + INCJDCHLIMI_IPAMHBBNLAF_OFFSET))(this);
		}

		::System::Boolean KAJBAPMLIGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCJDCHLIMI_KAJBAPMLIGF_OFFSET))(this);
		}

	};
