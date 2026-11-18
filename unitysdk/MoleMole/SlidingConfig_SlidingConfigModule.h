#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class SlidingConfig; }
namespace System { class String; }

#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14BC44E0)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETACCELERATION_OFFSET UNITYSDK_OFFSET(0x14BC49E0)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETCHECKINGRAYCASTLENGTH_OFFSET UNITYSDK_OFFSET(0x14BC5370)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETFRICTION_OFFSET UNITYSDK_OFFSET(0x14BC4730)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETGRAVITY_OFFSET UNITYSDK_OFFSET(0x14BC56D0)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETMAXDELTAANGLEPERSECONDINAIR_OFFSET UNITYSDK_OFFSET(0x14BC5250)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETMAXDELTAANGLEPERSECOND_OFFSET UNITYSDK_OFFSET(0x14BC4FE0)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETMAXXZSPEEDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x14BC4DA0)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETMAXYSPEEDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x14BC4EC0)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETMINVELOCITYTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x14BC4C80)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETSLIDINGDELTATHRESHOLD_OFFSET UNITYSDK_OFFSET(0x14BC5A60)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETSLIDINGRAYCASTLENGTH2_OFFSET UNITYSDK_OFFSET(0x14BC5490)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETSLIDINGRAYCASTLENGTH_OFFSET UNITYSDK_OFFSET(0x14BC55B0)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14BC4440)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_SLIDINGSMOOTHVALUE_OFFSET UNITYSDK_OFFSET(0x14BC57F0)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC43B0)
#define MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE___BASE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14BC5B80)

namespace MoleMole
{
	inline static constexpr unsigned int SlidingConfig_SlidingConfigModule_TypeDefinitionIndex = 70697;

	class SlidingConfig_SlidingConfigModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE__CTOR_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase phase)
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_PRELOADFORPHASE_OFFSET))(this, phase);
		}

		::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::SlidingConfig*>* CreateOp()
		{
			return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::SlidingConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_CREATEOP_OFFSET))(this);
		}

		::System::Single GetFriction(::System::String* key, ::System::Single downhillAngle)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETFRICTION_OFFSET))(this, key, downhillAngle);
		}

		::System::Single GetAcceleration(::System::String* key, ::System::Single angle)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETACCELERATION_OFFSET))(this, key, angle);
		}

		::System::Single GetMinVelocityThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETMINVELOCITYTHRESHOLD_OFFSET))(this);
		}

		::System::Single GetMaxXZSpeedThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETMAXXZSPEEDTHRESHOLD_OFFSET))(this);
		}

		::System::Single GetMaxYSpeedThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETMAXYSPEEDTHRESHOLD_OFFSET))(this);
		}

		::System::Single GetMaxDeltaAnglePerSecond(::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETMAXDELTAANGLEPERSECOND_OFFSET))(this, key);
		}

		::System::Single GetMaxDeltaAnglePerSecondInAir()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETMAXDELTAANGLEPERSECONDINAIR_OFFSET))(this);
		}

		::System::Single GetCheckingRaycastLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETCHECKINGRAYCASTLENGTH_OFFSET))(this);
		}

		::System::Single GetSlidingRaycastLength2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETSLIDINGRAYCASTLENGTH2_OFFSET))(this);
		}

		::System::Single GetSlidingRaycastLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETSLIDINGRAYCASTLENGTH_OFFSET))(this);
		}

		::System::Single GetGravity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETGRAVITY_OFFSET))(this);
		}

		::System::Single SlidingSmoothValue(::System::String* tag)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_SLIDINGSMOOTHVALUE_OFFSET))(this, tag);
		}

		::System::Single GetSlidingDeltaThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE_GETSLIDINGDELTATHRESHOLD_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOpHandle __base_PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase P0)
		{
			return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGCONFIG_SLIDINGCONFIGMODULE___BASE_PRELOADFORPHASE_OFFSET))(this, P0);
		}
	};
}
