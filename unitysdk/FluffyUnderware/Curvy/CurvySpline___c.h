#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2005B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2005F0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETNORMALSCACHE_B__193_0_OFFSET UNITYSDK_OFFSET(0x1F200680)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETPOSITIONSCACHE_B__188_0_OFFSET UNITYSDK_OFFSET(0x1F200620)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETTANGENTSCACHE_B__191_0_OFFSET UNITYSDK_OFFSET(0x1F200650)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C___CTOR_B__22_0_OFFSET UNITYSDK_OFFSET(0x1F200600)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline___c_TypeDefinitionIndex = 37469;

	class CurvySpline___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>** StaticGet___9__188_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline___c_TypeDefinitionIndex)->GetStaticField(0x2C0A0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline___c_TypeDefinitionIndex)->GetStaticField(0x2C0A8);
		}
		static ::System::Action_3<::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Int32, ::System::Int32>** StaticGet___9__22_0()
		{
			return (::System::Action_3<::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline___c_TypeDefinitionIndex)->GetStaticField(0x2C0B0);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>** StaticGet___9__193_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline___c_TypeDefinitionIndex)->GetStaticField(0x2C0B8);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>** StaticGet___9__191_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::CurvySplineSegment*, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>>**)Il2CppClass::FromTypeDefinitionIndex(CurvySpline___c_TypeDefinitionIndex)->GetStaticField(0x2C0C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__22_0(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::System::Int32 controlPointIndex, ::System::Int32 controlPointsCount)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C___CTOR_B__22_0_OFFSET))(this, controlPoint, controlPointIndex, controlPointsCount);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> _GetPositionsCache_b__188_0(::FluffyUnderware::Curvy::CurvySplineSegment* s)
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETPOSITIONSCACHE_B__188_0_OFFSET))(this, s);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> _GetTangentsCache_b__191_0(::FluffyUnderware::Curvy::CurvySplineSegment* s)
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETTANGENTSCACHE_B__191_0_OFFSET))(this, s);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> _GetNormalsCache_b__193_0(::FluffyUnderware::Curvy::CurvySplineSegment* s)
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE___C__GETNORMALSCACHE_B__193_0_OFFSET))(this, s);
		}
	};
}
