#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPCECJIBEBN;
namespace UnityEngine { class AnimationCurve; }

#define LPCECJIBEBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6AC150)
#define LPCECJIBEBN_GET_ADDITIVEDURATION_OFFSET UNITYSDK_OFFSET(0x1A5C79F0)
#define LPCECJIBEBN_GET_ADDITIVEMAXDURATION_OFFSET UNITYSDK_OFFSET(0x1A5C79B0)
#define LPCECJIBEBN_GET_ADDITIVEMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1A5C79D0)
#define LPCECJIBEBN_GET_ADDITIVESPEEDCURVE_OFFSET UNITYSDK_OFFSET(0x1A5C7990)
#define LPCECJIBEBN_GET_ADDITIVESPEED_OFFSET UNITYSDK_OFFSET(0x1A5C7A10)
#define LPCECJIBEBN_GET_BLURFEATHER_OFFSET UNITYSDK_OFFSET(0x1B6AC0B0)
#define LPCECJIBEBN_GET_BLURRADIUS_OFFSET UNITYSDK_OFFSET(0x1B6AC070)
#define LPCECJIBEBN_GET_BLURSTART_OFFSET UNITYSDK_OFFSET(0x1B6AC090)
#define LPCECJIBEBN_GET_DIRECTIONCORRECTIONSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1A5C7A30)
#define LPCECJIBEBN_GET_FOVBLENDINCURVE_OFFSET UNITYSDK_OFFSET(0x1B6ABFF0)
#define LPCECJIBEBN_GET_FOVBLENDINTIME_OFFSET UNITYSDK_OFFSET(0x1B6AC010)
#define LPCECJIBEBN_GET_FOVBLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1B6AC030)
#define LPCECJIBEBN_GET_FOVBLENDOUTTIME_OFFSET UNITYSDK_OFFSET(0x1B6AC050)
#define LPCECJIBEBN_GET_FOV_OFFSET UNITYSDK_OFFSET(0x1B6ABFD0)
#define LPCECJIBEBN_GET_REQUIRECHARGEVALUE_OFFSET UNITYSDK_OFFSET(0x1A5C7970)
#define LPCECJIBEBN_OJPLDOMGBHI_OFFSET UNITYSDK_OFFSET(0x1B6AC0D0)
#define LPCECJIBEBN_SET_ADDITIVEDURATION_OFFSET UNITYSDK_OFFSET(0x1A5C7A00)
#define LPCECJIBEBN_SET_ADDITIVEMAXDURATION_OFFSET UNITYSDK_OFFSET(0x1A5C79C0)
#define LPCECJIBEBN_SET_ADDITIVEMAXSPEED_OFFSET UNITYSDK_OFFSET(0x1A5C79E0)
#define LPCECJIBEBN_SET_ADDITIVESPEEDCURVE_OFFSET UNITYSDK_OFFSET(0x1A5C79A0)
#define LPCECJIBEBN_SET_ADDITIVESPEED_OFFSET UNITYSDK_OFFSET(0x1A5C7A20)
#define LPCECJIBEBN_SET_BLURFEATHER_OFFSET UNITYSDK_OFFSET(0x1B6AC0C0)
#define LPCECJIBEBN_SET_BLURRADIUS_OFFSET UNITYSDK_OFFSET(0x1B6AC080)
#define LPCECJIBEBN_SET_BLURSTART_OFFSET UNITYSDK_OFFSET(0x1B6AC0A0)
#define LPCECJIBEBN_SET_DIRECTIONCORRECTIONSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1A5C7A40)
#define LPCECJIBEBN_SET_FOVBLENDINCURVE_OFFSET UNITYSDK_OFFSET(0x1B6AC000)
#define LPCECJIBEBN_SET_FOVBLENDINTIME_OFFSET UNITYSDK_OFFSET(0x1B6AC020)
#define LPCECJIBEBN_SET_FOVBLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0x1B6AC040)
#define LPCECJIBEBN_SET_FOVBLENDOUTTIME_OFFSET UNITYSDK_OFFSET(0x1B6AC060)
#define LPCECJIBEBN_SET_FOV_OFFSET UNITYSDK_OFFSET(0x1B6ABFE0)
#define LPCECJIBEBN_SET_REQUIRECHARGEVALUE_OFFSET UNITYSDK_OFFSET(0x1A5C7980)

inline static constexpr unsigned int LPCECJIBEBN_TypeDefinitionIndex = 78156;

	class LPCECJIBEBN : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* _FOVBlendOutCurve_k__BackingField; // 0x10
		::UnityEngine::AnimationCurve* _AdditiveSpeedCurve_k__BackingField; // 0x18
		::UnityEngine::AnimationCurve* _FOVBlendInCurve_k__BackingField; // 0x20
		::System::Single _BlurStart_k__BackingField; // 0x28
		::System::Single _RequireChargeValue_k__BackingField; // 0x2C
		::System::Single _DirectionCorrectionStartTime_k__BackingField; // 0x30
		::System::Single _AdditiveMaxSpeed_k__BackingField; // 0x34
		::System::Single _FOVBlendOutTime_k__BackingField; // 0x38
		::System::Single _BlurRadius_k__BackingField; // 0x3C
		::System::Single _AdditiveMaxDuration_k__BackingField; // 0x40
		::System::Single _BlurFeather_k__BackingField; // 0x44
		::System::Single _FOV_k__BackingField; // 0x48
		::System::Single _AdditiveDuration_k__BackingField; // 0x4C
		::System::Single _FOVBlendInTime_k__BackingField; // 0x50
		::System::Single _AdditiveSpeed_k__BackingField; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_CTOR_OFFSET))(this);
		}

		::System::Single get_RequireChargeValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_REQUIRECHARGEVALUE_OFFSET))(this);
		}

		::System::Void set_RequireChargeValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_REQUIRECHARGEVALUE_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_AdditiveSpeedCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_ADDITIVESPEEDCURVE_OFFSET))(this);
		}

		::System::Void set_AdditiveSpeedCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_ADDITIVESPEEDCURVE_OFFSET))(this, a1);
		}

		::System::Single get_AdditiveMaxDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_ADDITIVEMAXDURATION_OFFSET))(this);
		}

		::System::Void set_AdditiveMaxDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_ADDITIVEMAXDURATION_OFFSET))(this, a1);
		}

		::System::Single get_AdditiveMaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_ADDITIVEMAXSPEED_OFFSET))(this);
		}

		::System::Void set_AdditiveMaxSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_ADDITIVEMAXSPEED_OFFSET))(this, a1);
		}

		::System::Single get_AdditiveDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_ADDITIVEDURATION_OFFSET))(this);
		}

		::System::Void set_AdditiveDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_ADDITIVEDURATION_OFFSET))(this, a1);
		}

		::System::Single get_AdditiveSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_ADDITIVESPEED_OFFSET))(this);
		}

		::System::Void set_AdditiveSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_ADDITIVESPEED_OFFSET))(this, a1);
		}

		::System::Single get_DirectionCorrectionStartTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_DIRECTIONCORRECTIONSTARTTIME_OFFSET))(this);
		}

		::System::Void set_DirectionCorrectionStartTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_DIRECTIONCORRECTIONSTARTTIME_OFFSET))(this, a1);
		}

		::System::Single get_FOV()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_FOV_OFFSET))(this);
		}

		::System::Void set_FOV(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_FOV_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_FOVBlendInCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_FOVBLENDINCURVE_OFFSET))(this);
		}

		::System::Void set_FOVBlendInCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_FOVBLENDINCURVE_OFFSET))(this, a1);
		}

		::System::Single get_FOVBlendInTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_FOVBLENDINTIME_OFFSET))(this);
		}

		::System::Void set_FOVBlendInTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_FOVBLENDINTIME_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_FOVBlendOutCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_FOVBLENDOUTCURVE_OFFSET))(this);
		}

		::System::Void set_FOVBlendOutCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_FOVBLENDOUTCURVE_OFFSET))(this, a1);
		}

		::System::Single get_FOVBlendOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_FOVBLENDOUTTIME_OFFSET))(this);
		}

		::System::Void set_FOVBlendOutTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_FOVBLENDOUTTIME_OFFSET))(this, a1);
		}

		::System::Single get_BlurRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_BLURRADIUS_OFFSET))(this);
		}

		::System::Void set_BlurRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_BLURRADIUS_OFFSET))(this, a1);
		}

		::System::Single get_BlurStart()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_BLURSTART_OFFSET))(this);
		}

		::System::Void set_BlurStart(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_BLURSTART_OFFSET))(this, a1);
		}

		::System::Single get_BlurFeather()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCECJIBEBN_GET_BLURFEATHER_OFFSET))(this);
		}

		::System::Void set_BlurFeather(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPCECJIBEBN_SET_BLURFEATHER_OFFSET))(this, a1);
		}

		static ::LPCECJIBEBN* OJPLDOMGBHI()
		{
			return ((::LPCECJIBEBN*(*)())((::PBYTE)hIl2Cpp + LPCECJIBEBN_OJPLDOMGBHI_OFFSET))();
		}

	};
