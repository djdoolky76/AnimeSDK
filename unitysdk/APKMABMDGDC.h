#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFDMOPAMCMA.h"
namespace UnityEngine { class AnimationCurve; }

#define APKMABMDGDC_CTOR_OFFSET UNITYSDK_OFFSET(0x15BAD0A0)
#define APKMABMDGDC_GET_NEEDKICKOFFSPEED_OFFSET UNITYSDK_OFFSET(0x15BACD60)
#define APKMABMDGDC_GET_QTEBLURDURATION_OFFSET UNITYSDK_OFFSET(0x15BACFA0)
#define APKMABMDGDC_GET_QTEBLURFEATHER_OFFSET UNITYSDK_OFFSET(0x15BACF80)
#define APKMABMDGDC_GET_QTEBLURRADIUS_OFFSET UNITYSDK_OFFSET(0x15BACF40)
#define APKMABMDGDC_GET_QTEBLURSTART_OFFSET UNITYSDK_OFFSET(0x15BACF60)
#define APKMABMDGDC_GET_QTEENABLED_OFFSET UNITYSDK_OFFSET(0x15BACD80)
#define APKMABMDGDC_GET_QTEFOVBLENDINCURVE_OFFSET UNITYSDK_OFFSET(0x15BACEC0)
#define APKMABMDGDC_GET_QTEFOVBLENDINTIME_OFFSET UNITYSDK_OFFSET(0x15BACEE0)
#define APKMABMDGDC_GET_QTEFOVBLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0x15BACF00)
#define APKMABMDGDC_GET_QTEFOVBLENDOUTTIME_OFFSET UNITYSDK_OFFSET(0x15BACF20)
#define APKMABMDGDC_GET_QTEFOVDELTA_OFFSET UNITYSDK_OFFSET(0x15BACE80)
#define APKMABMDGDC_GET_QTEFOVDURATION_OFFSET UNITYSDK_OFFSET(0x15BACEA0)
#define APKMABMDGDC_GET_QTESPEEDMULTIPLEINCREASE_OFFSET UNITYSDK_OFFSET(0x15BACDA0)
#define APKMABMDGDC_GET_QTEWINDOWACTIVE_OFFSET UNITYSDK_OFFSET(0x15BACE60)
#define APKMABMDGDC_GET_QTEWINDOWLENGTHPERCENT_OFFSET UNITYSDK_OFFSET(0x15BACDE0)
#define APKMABMDGDC_GET_QTEWINDOWLOWERPERCENT_OFFSET UNITYSDK_OFFSET(0x15BACE20)
#define APKMABMDGDC_GET_QTEWINDOWRESOLVED_OFFSET UNITYSDK_OFFSET(0x15BACE40)
#define APKMABMDGDC_GET_QTEWINDOWSTARTOFFSETPERCENT_OFFSET UNITYSDK_OFFSET(0x15BACDC0)
#define APKMABMDGDC_GET_QTEWINDOWUPPERPERCENT_OFFSET UNITYSDK_OFFSET(0x15BACE00)
#define APKMABMDGDC_GET_SPEEDMULTIPLE_OFFSET UNITYSDK_OFFSET(0x15BACD40)
#define APKMABMDGDC_JMKEMKAGBNL_OFFSET UNITYSDK_OFFSET(0x15BACFC0)
#define APKMABMDGDC_SET_NEEDKICKOFFSPEED_OFFSET UNITYSDK_OFFSET(0x15BACD70)
#define APKMABMDGDC_SET_QTEBLURDURATION_OFFSET UNITYSDK_OFFSET(0x15BACFB0)
#define APKMABMDGDC_SET_QTEBLURFEATHER_OFFSET UNITYSDK_OFFSET(0x15BACF90)
#define APKMABMDGDC_SET_QTEBLURRADIUS_OFFSET UNITYSDK_OFFSET(0x15BACF50)
#define APKMABMDGDC_SET_QTEBLURSTART_OFFSET UNITYSDK_OFFSET(0x15BACF70)
#define APKMABMDGDC_SET_QTEENABLED_OFFSET UNITYSDK_OFFSET(0x15BACD90)
#define APKMABMDGDC_SET_QTEFOVBLENDINCURVE_OFFSET UNITYSDK_OFFSET(0x15BACED0)
#define APKMABMDGDC_SET_QTEFOVBLENDINTIME_OFFSET UNITYSDK_OFFSET(0x15BACEF0)
#define APKMABMDGDC_SET_QTEFOVBLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0x15BACF10)
#define APKMABMDGDC_SET_QTEFOVBLENDOUTTIME_OFFSET UNITYSDK_OFFSET(0x15BACF30)
#define APKMABMDGDC_SET_QTEFOVDELTA_OFFSET UNITYSDK_OFFSET(0x15BACE90)
#define APKMABMDGDC_SET_QTEFOVDURATION_OFFSET UNITYSDK_OFFSET(0x15BACEB0)
#define APKMABMDGDC_SET_QTESPEEDMULTIPLEINCREASE_OFFSET UNITYSDK_OFFSET(0x15BACDB0)
#define APKMABMDGDC_SET_QTEWINDOWACTIVE_OFFSET UNITYSDK_OFFSET(0x15BACE70)
#define APKMABMDGDC_SET_QTEWINDOWLENGTHPERCENT_OFFSET UNITYSDK_OFFSET(0x15BACDF0)
#define APKMABMDGDC_SET_QTEWINDOWLOWERPERCENT_OFFSET UNITYSDK_OFFSET(0x15BACE30)
#define APKMABMDGDC_SET_QTEWINDOWRESOLVED_OFFSET UNITYSDK_OFFSET(0x15BACE50)
#define APKMABMDGDC_SET_QTEWINDOWSTARTOFFSETPERCENT_OFFSET UNITYSDK_OFFSET(0x15BACDD0)
#define APKMABMDGDC_SET_QTEWINDOWUPPERPERCENT_OFFSET UNITYSDK_OFFSET(0x15BACE10)
#define APKMABMDGDC_SET_SPEEDMULTIPLE_OFFSET UNITYSDK_OFFSET(0x15BACD50)

	class APKMABMDGDC : public ::NFDMOPAMCMA
	{
	public:
		::UnityEngine::AnimationCurve* _QTEFOVBlendInCurve_k__BackingField; // 0x60
		::UnityEngine::AnimationCurve* _QTEFOVBlendOutCurve_k__BackingField; // 0x68
		::System::Single _QTEWindowLowerPercent_k__BackingField; // 0x70
		::System::Single _QTEBlurRadius_k__BackingField; // 0x74
		::System::Single _QTEBlurFeather_k__BackingField; // 0x78
		::System::Single _QTEBlurDuration_k__BackingField; // 0x7C
		::System::Single _QTEFOVBlendOutTime_k__BackingField; // 0x80
		::System::Single _QTEWindowStartOffsetPercent_k__BackingField; // 0x84
		::System::Single _QTEBlurStart_k__BackingField; // 0x88
		::System::Single _QTEFOVDuration_k__BackingField; // 0x8C
		::System::Single _QTEFOVDelta_k__BackingField; // 0x90
		::System::Single _QTEWindowUpperPercent_k__BackingField; // 0x94
		::System::Single _QTEWindowLengthPercent_k__BackingField; // 0x98
		::System::Boolean _QTEWindowResolved_k__BackingField; // 0x9C
		::System::Boolean _QTEEnabled_k__BackingField; // 0x9D
		::System::Boolean _QTEWindowActive_k__BackingField; // 0x9E
		::System::Boolean _NeedKickoffSpeed_k__BackingField; // 0x9F
		::System::Single _QTEFOVBlendInTime_k__BackingField; // 0xA0
		::System::Single _QTESpeedMultipleIncrease_k__BackingField; // 0xA4
		::System::Single _SpeedMultiple_k__BackingField; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_CTOR_OFFSET))(this);
		}

		::System::Single get_SpeedMultiple()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_SPEEDMULTIPLE_OFFSET))(this);
		}

		::System::Void set_SpeedMultiple(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_SPEEDMULTIPLE_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedKickoffSpeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_NEEDKICKOFFSPEED_OFFSET))(this);
		}

		::System::Void set_NeedKickoffSpeed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_NEEDKICKOFFSPEED_OFFSET))(this, a1);
		}

		::System::Boolean get_QTEEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEENABLED_OFFSET))(this);
		}

		::System::Void set_QTEEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEENABLED_OFFSET))(this, a1);
		}

		::System::Single get_QTESpeedMultipleIncrease()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTESPEEDMULTIPLEINCREASE_OFFSET))(this);
		}

		::System::Void set_QTESpeedMultipleIncrease(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTESPEEDMULTIPLEINCREASE_OFFSET))(this, a1);
		}

		::System::Single get_QTEWindowStartOffsetPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEWINDOWSTARTOFFSETPERCENT_OFFSET))(this);
		}

		::System::Void set_QTEWindowStartOffsetPercent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEWINDOWSTARTOFFSETPERCENT_OFFSET))(this, a1);
		}

		::System::Single get_QTEWindowLengthPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEWINDOWLENGTHPERCENT_OFFSET))(this);
		}

		::System::Void set_QTEWindowLengthPercent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEWINDOWLENGTHPERCENT_OFFSET))(this, a1);
		}

		::System::Single get_QTEWindowUpperPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEWINDOWUPPERPERCENT_OFFSET))(this);
		}

		::System::Void set_QTEWindowUpperPercent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEWINDOWUPPERPERCENT_OFFSET))(this, a1);
		}

		::System::Single get_QTEWindowLowerPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEWINDOWLOWERPERCENT_OFFSET))(this);
		}

		::System::Void set_QTEWindowLowerPercent(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEWINDOWLOWERPERCENT_OFFSET))(this, a1);
		}

		::System::Boolean get_QTEWindowResolved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEWINDOWRESOLVED_OFFSET))(this);
		}

		::System::Void set_QTEWindowResolved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEWINDOWRESOLVED_OFFSET))(this, a1);
		}

		::System::Boolean get_QTEWindowActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEWINDOWACTIVE_OFFSET))(this);
		}

		::System::Void set_QTEWindowActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEWINDOWACTIVE_OFFSET))(this, a1);
		}

		::System::Single get_QTEFOVDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEFOVDELTA_OFFSET))(this);
		}

		::System::Void set_QTEFOVDelta(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEFOVDELTA_OFFSET))(this, a1);
		}

		::System::Single get_QTEFOVDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEFOVDURATION_OFFSET))(this);
		}

		::System::Void set_QTEFOVDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEFOVDURATION_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_QTEFOVBlendInCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEFOVBLENDINCURVE_OFFSET))(this);
		}

		::System::Void set_QTEFOVBlendInCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEFOVBLENDINCURVE_OFFSET))(this, a1);
		}

		::System::Single get_QTEFOVBlendInTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEFOVBLENDINTIME_OFFSET))(this);
		}

		::System::Void set_QTEFOVBlendInTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEFOVBLENDINTIME_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* get_QTEFOVBlendOutCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEFOVBLENDOUTCURVE_OFFSET))(this);
		}

		::System::Void set_QTEFOVBlendOutCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEFOVBLENDOUTCURVE_OFFSET))(this, a1);
		}

		::System::Single get_QTEFOVBlendOutTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEFOVBLENDOUTTIME_OFFSET))(this);
		}

		::System::Void set_QTEFOVBlendOutTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEFOVBLENDOUTTIME_OFFSET))(this, a1);
		}

		::System::Single get_QTEBlurRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEBLURRADIUS_OFFSET))(this);
		}

		::System::Void set_QTEBlurRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEBLURRADIUS_OFFSET))(this, a1);
		}

		::System::Single get_QTEBlurStart()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEBLURSTART_OFFSET))(this);
		}

		::System::Void set_QTEBlurStart(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEBLURSTART_OFFSET))(this, a1);
		}

		::System::Single get_QTEBlurFeather()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEBLURFEATHER_OFFSET))(this);
		}

		::System::Void set_QTEBlurFeather(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEBLURFEATHER_OFFSET))(this, a1);
		}

		::System::Single get_QTEBlurDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + APKMABMDGDC_GET_QTEBLURDURATION_OFFSET))(this);
		}

		::System::Void set_QTEBlurDuration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_SET_QTEBLURDURATION_OFFSET))(this, a1);
		}

		::System::Void JMKEMKAGBNL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APKMABMDGDC_JMKEMKAGBNL_OFFSET))(this, a1);
		}

	};
