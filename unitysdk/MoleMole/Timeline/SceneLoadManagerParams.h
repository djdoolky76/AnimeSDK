#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x1A0B15E0)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_NGPBDFKGNIC_OFFSET UNITYSDK_OFFSET(0x1A0B1560)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_OBPDBKIJIGA_OFFSET UNITYSDK_OFFSET(0x1A0B15A0)
#define MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B1550)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SceneLoadManagerParams_TypeDefinitionIndex = 51011;

	class SceneLoadManagerParams : public ::System::Object
	{
	public:
		::System::Boolean LoadSmallObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void NGPBDFKGNIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_NGPBDFKGNIC_OFFSET))(this);
		}

		::System::Void OBPDBKIJIGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_OBPDBKIJIGA_OFFSET))(this);
		}

		::System::Void IBBLCAOMCKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENELOADMANAGERPARAMS_IBBLCAOMCKF_OFFSET))(this);
		}
	};
}
