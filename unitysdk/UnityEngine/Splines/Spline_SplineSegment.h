#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_GET_ENDT_OFFSET UNITYSDK_OFFSET(0x1F94D40)
#define UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_SET_ENDT_OFFSET UNITYSDK_OFFSET(0x1E74560)
#define UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_SET_LEFTOFFSET_OFFSET UNITYSDK_OFFSET(0x233F9D0)
#define UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_SET_RIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x233F9E0)
#define UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_SET_STARTT_OFFSET UNITYSDK_OFFSET(0x2327240)
#define UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_SET_SYMMETRICAL_OFFSET UNITYSDK_OFFSET(0x17D6420)
#define UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x404AA50)

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int Spline_SplineSegment_TypeDefinitionIndex = 20657;

	class Spline_SplineSegment : public ::System::Object
	{
	public:
		::System::Single m_StartT; // 0x10
		::System::Single m_EndT; // 0x14
		::System::Single m_LeftOffset; // 0x18
		::System::Single m_RightOffset; // 0x1C
		::System::Boolean m_Symmetrical; // 0x20

		::System::Void set_StartT(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_SET_STARTT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_EndT()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_GET_ENDT_OFFSET))(this);
		}

		::System::Void set_EndT(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_SET_ENDT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_LeftOffset(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_SET_LEFTOFFSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_RightOffset(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_SET_RIGHTOFFSET_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_Symmetrical(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT_SET_SYMMETRICAL_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor(::System::Single A3300A47B1C94D2B, ::System::Single A76F5B617FAEA668)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SPLINESEGMENT__CTOR_OFFSET))(this, A3300A47B1C94D2B, A76F5B617FAEA668);
		}
	};
}
