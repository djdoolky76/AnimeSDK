#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMAGJGLPIIF.h"

#define RPG_VECTOR4CURVEFRAME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3C4FE00)
#define RPG_VECTOR4CURVEFRAME_CTOR_OFFSET UNITYSDK_OFFSET(0x3C4FE60)
#define RPG_VECTOR4CURVEFRAME_GETTIME_OFFSET UNITYSDK_OFFSET(0x1D00)
#define RPG_VECTOR4CURVEFRAME_GETVALUE_OFFSET UNITYSDK_OFFSET(0xECDA0)

namespace RPG
{
	inline static constexpr unsigned int Vector4CurveFrame_TypeDefinitionIndex = 6340;

	struct alignas(4) Vector4CurveFrame
	{
		::System::Single TimePoint; // 0x10
		::BMAGJGLPIIF Value; // 0x14
		::System::Void _ctor(::System::Single a1, ::BMAGJGLPIIF a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::BMAGJGLPIIF))((::PBYTE)hIl2Cpp + RPG_VECTOR4CURVEFRAME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single GetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VECTOR4CURVEFRAME_GETTIME_OFFSET))(this);
		}

		::BMAGJGLPIIF GetValue()
		{
			return ((::BMAGJGLPIIF(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VECTOR4CURVEFRAME_GETVALUE_OFFSET))(this);
		}

		/*
		::System::Int32 CompareTo(::RPG::Vector4CurveFrame a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Vector4CurveFrame))((::PBYTE)hIl2Cpp + RPG_VECTOR4CURVEFRAME_COMPARETO_OFFSET))(this, a1);
		}
		*/

	};
}
