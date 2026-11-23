#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFE47AD60EB94A25/B4CA28CF40398BB6.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/quaternion.h"
#include "unitysdk/Unity/Mathematics/float4x4.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_SPLINES_BEZIERKNOT_BAKETANGENTDIRECTIONTOROTATION_OFFSET UNITYSDK_OFFSET(0x40425F0)
#define UNITYENGINE_SPLINES_BEZIERKNOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x4042EC0)
#define UNITYENGINE_SPLINES_BEZIERKNOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x4042DA0)
#define UNITYENGINE_SPLINES_BEZIERKNOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4042F70)
#define UNITYENGINE_SPLINES_BEZIERKNOT_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x4043070)
#define UNITYENGINE_SPLINES_BEZIERKNOT_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_SPLINES_BEZIERKNOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4043110)
#define UNITYENGINE_SPLINES_BEZIERKNOT_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x40433A0)
#define UNITYENGINE_SPLINES_BEZIERKNOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4043C10)
#define UNITYENGINE_SPLINES_BEZIERKNOT__CTOR_OFFSET UNITYSDK_OFFSET(0x4043C50)

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int BezierKnot_TypeDefinitionIndex = 20623;

	struct alignas(4) BezierKnot
	{
		::Unity::Mathematics::float3 Position; // 0x10
		::Unity::Mathematics::float3 TangentIn; // 0x1C
		::Unity::Mathematics::float3 TangentOut; // 0x28
		::Unity::Mathematics::quaternion Rotation; // 0x34

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_BEZIERKNOT_GETHASHCODE_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::UnityEngine::Splines::BezierKnot BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Splines::BezierKnot))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_BEZIERKNOT_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_BEZIERKNOT_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void _ctor(::Unity::Mathematics::float3 EB211B01816ACA79)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_BEZIERKNOT__CTOR_OFFSET))(this, EB211B01816ACA79);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_BEZIERKNOT_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		/*
		::UnityEngine::Splines::BezierKnot Transform(::Unity::Mathematics::float4x4 B7BBCA45192B1B57)
		{
			return ((::UnityEngine::Splines::BezierKnot(*)(::PVOID, ::Unity::Mathematics::float4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_BEZIERKNOT_TRANSFORM_OFFSET))(this, B7BBCA45192B1B57);
		}
		*/

		::System::Boolean Equals_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_BEZIERKNOT_EQUALS_1_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_BEZIERKNOT_TOSTRING_OFFSET))(this);
		}

		::System::Void _ctor_1(::Unity::Mathematics::float3 EB211B01816ACA79, ::Unity::Mathematics::float3 AE7E49C554B74A00, ::Unity::Mathematics::float3 B3E9647BA3B569D8, ::Unity::Mathematics::quaternion A0556B8B541B6D55)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_BEZIERKNOT__CTOR_1_OFFSET))(this, EB211B01816ACA79, AE7E49C554B74A00, B3E9647BA3B569D8, A0556B8B541B6D55);
		}

		/*
		::UnityEngine::Splines::BezierKnot BakeTangentDirectionToRotation(::System::Boolean BE5857AEA9DDE917, ::BFE47AD60EB94A25::B4CA28CF40398BB6 E4597A15448B3252)
		{
			return ((::UnityEngine::Splines::BezierKnot(*)(::PVOID, ::System::Boolean, ::BFE47AD60EB94A25::B4CA28CF40398BB6))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_BEZIERKNOT_BAKETANGENTDIRECTIONTOROTATION_OFFSET))(this, BE5857AEA9DDE917, E4597A15448B3252);
		}
		*/
	};
}
