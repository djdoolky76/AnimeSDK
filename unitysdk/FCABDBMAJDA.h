#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKICACMNNDM.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimBaseCameraConfig; }

#define FCABDBMAJDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA663D0)
#define FCABDBMAJDA_IIIFGGKENLK_OFFSET UNITYSDK_OFFSET(0x1CA66380)
#define FCABDBMAJDA_NMCLGOHGBIO_OFFSET UNITYSDK_OFFSET(0x1CA66330)
#define FCABDBMAJDA_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0x1CA662F0)

inline static constexpr unsigned int FCABDBMAJDA_TypeDefinitionIndex = 43254;

	class FCABDBMAJDA : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimBaseCameraConfig* EABKOHGCHFP; // 0x10
		::PKICACMNNDM BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABDBMAJDA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimCameraPriority PLNCKLJOJME()
		{
			return ((::RPG::GameCore::FiveDimCameraPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABDBMAJDA_PLNCKLJOJME_OFFSET))(this);
		}

		::System::Boolean NMCLGOHGBIO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABDBMAJDA_NMCLGOHGBIO_OFFSET))(this);
		}

		::System::Boolean IIIFGGKENLK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCABDBMAJDA_IIIFGGKENLK_OFFSET))(this);
		}

	};
