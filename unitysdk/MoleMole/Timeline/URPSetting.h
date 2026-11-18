#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_TIMELINE_URPSETTING_CFCBGEGKBFH_OFFSET UNITYSDK_OFFSET(0x14BD9CB0)
#define MOLEMOLE_TIMELINE_URPSETTING_DMEHOMIBHGH_OFFSET UNITYSDK_OFFSET(0x14BD9630)
#define MOLEMOLE_TIMELINE_URPSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD9620)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int URPSetting_TypeDefinitionIndex = 90580;

	class URPSetting : public ::System::Object
	{
	public:
		::System::Boolean isContactShadowOn; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 resolution; // 0x14
		::System::Boolean characterUISelfShadow; // 0x18
		::System::Boolean perObjectShadowOnFace; // 0x19
		::System::Boolean fixCharDirLightNoIntensityBlendWeight; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPSETTING__CTOR_OFFSET))(this);
		}

		::System::Void DMEHOMIBHGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPSETTING_DMEHOMIBHGH_OFFSET))(this);
		}

		::System::Void CFCBGEGKBFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_URPSETTING_CFCBGEGKBFH_OFFSET))(this);
		}
	};
}
