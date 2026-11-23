#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B30DC5FA2348D2D5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AAC351F449C52412.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_SPLINES_CATMULLROM_SPLINE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x23F12F0)
#define ABC_SPLINES_CATMULLROM_SPLINE_GETSEGMENT_OFFSET UNITYSDK_OFFSET(0x23F1440)
#define ABC_SPLINES_CATMULLROM_SPLINE_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0x1E18F70)
#define ABC_SPLINES_CATMULLROM_SPLINE_GET_LEFTOFFST_OFFSET UNITYSDK_OFFSET(0x1B0A930)
#define ABC_SPLINES_CATMULLROM_SPLINE_GET_RIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x181DE90)
#define ABC_SPLINES_CATMULLROM_SPLINE_GET_SEGMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x23F1530)
#define ABC_SPLINES_CATMULLROM_SPLINE_SET_CLOSED_OFFSET UNITYSDK_OFFSET(0x1E18F80)
#define ABC_SPLINES_CATMULLROM_SPLINE_SET_LEFTOFFST_OFFSET UNITYSDK_OFFSET(0x23255F0)
#define ABC_SPLINES_CATMULLROM_SPLINE_SET_RIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x181DF10)
#define ABC_SPLINES_CATMULLROM_SPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x23F1520)

namespace ABC::Splines::CatmullRom
{
	inline static constexpr unsigned int Spline_TypeDefinitionIndex = 3865;

	class Spline : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::B30DC5FA2348D2D5>* Knots; // 0x10
		::System::Single _length; // 0x18
		::System::Boolean _Closed_k__BackingField; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single _LeftOffst_k__BackingField; // 0x20
		::System::Single _RightOffset_k__BackingField; // 0x24

		::System::Int32 get_SegmentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPLINES_CATMULLROM_SPLINE_GET_SEGMENTCOUNT_OFFSET))(this);
		}

		::System::Single GetLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPLINES_CATMULLROM_SPLINE_GETLENGTH_OFFSET))(this);
		}

		::System::Void set_Closed(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_SPLINES_CATMULLROM_SPLINE_SET_CLOSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_LeftOffst(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_SPLINES_CATMULLROM_SPLINE_SET_LEFTOFFST_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_LeftOffst()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPLINES_CATMULLROM_SPLINE_GET_LEFTOFFST_OFFSET))(this);
		}

		::System::Boolean get_Closed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPLINES_CATMULLROM_SPLINE_GET_CLOSED_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPLINES_CATMULLROM_SPLINE__CTOR_OFFSET))(this);
		}

		::AAC351F449C52412 GetSegment(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::AAC351F449C52412(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_SPLINES_CATMULLROM_SPLINE_GETSEGMENT_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Single get_RightOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPLINES_CATMULLROM_SPLINE_GET_RIGHTOFFSET_OFFSET))(this);
		}

		::System::Void set_RightOffset(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_SPLINES_CATMULLROM_SPLINE_SET_RIGHTOFFSET_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
