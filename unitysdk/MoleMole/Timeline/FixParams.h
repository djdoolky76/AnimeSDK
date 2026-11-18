#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMELINE_FIXPARAMS_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x18126490)
#define MOLEMOLE_TIMELINE_FIXPARAMS_NGPBDFKGNIC_OFFSET UNITYSDK_OFFSET(0x181265F0)
#define MOLEMOLE_TIMELINE_FIXPARAMS_OBPDBKIJIGA_OFFSET UNITYSDK_OFFSET(0x18126330)
#define MOLEMOLE_TIMELINE_FIXPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x18126320)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FixParams_TypeDefinitionIndex = 92497;

	class FixParams : public ::System::Object
	{
	public:
		::System::Boolean FixShadowCoverageOutOfFrustume; // 0x10
		::System::Boolean fixShadowCoverageOutOfFrustume; // 0x11

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void OBPDBKIJIGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_OBPDBKIJIGA_OFFSET))(this);
		}

		::System::Void IBBLCAOMCKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_IBBLCAOMCKF_OFFSET))(this);
		}

		::System::Void NGPBDFKGNIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FIXPARAMS_NGPBDFKGNIC_OFFSET))(this);
		}
	};
}
