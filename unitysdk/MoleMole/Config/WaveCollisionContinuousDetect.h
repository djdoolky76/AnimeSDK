#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/FanCylinderCollisionContinuousDetect.h"

namespace MoleMole::Config { class AttackPatternMorphBase; }
namespace MoleMole::Config { class ConfigWaveMorphParam; }

#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_ATTACHPATTERNMETHODWITHGROUPID_OFFSET UNITYSDK_OFFSET(0x1B450D90)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0x1B450CD0)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_GETMORPHPARAM_OFFSET UNITYSDK_OFFSET(0x1B450C80)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B450E50)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT___BASE_ATTACHPATTERNMETHODWITHGROUPID_OFFSET UNITYSDK_OFFSET(0x1B450EF0)
#define MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT___BASE_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0x1B450EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int WaveCollisionContinuousDetect_TypeDefinitionIndex = 39576;

	class WaveCollisionContinuousDetect : public ::MoleMole::Config::FanCylinderCollisionContinuousDetect
	{
	public:
		::MoleMole::Config::ConfigWaveMorphParam* waveMorphParam; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::AttackPatternMorphBase* GetMorphParam()
		{
			return ((::MoleMole::Config::AttackPatternMorphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_GETMORPHPARAM_OFFSET))(this);
		}

		::System::Void AttachPatternMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_ATTACHPATTERNMETHOD_OFFSET))(this);
		}

		::System::Void AttachPatternMethodWithGroupId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT_ATTACHPATTERNMETHODWITHGROUPID_OFFSET))(this);
		}

		::System::Void __base_AttachPatternMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT___BASE_ATTACHPATTERNMETHOD_OFFSET))(this);
		}

		::System::Void __base_AttachPatternMethodWithGroupId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_WAVECOLLISIONCONTINUOUSDETECT___BASE_ATTACHPATTERNMETHODWITHGROUPID_OFFSET))(this);
		}
	};
}
