#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DEST_MATH_SPHERE3_CALCAREA_OFFSET UNITYSDK_OFFSET(0x99E5F0)
#define DEST_MATH_SPHERE3_CALCVOLUME_OFFSET UNITYSDK_OFFSET(0x99E610)
#define DEST_MATH_SPHERE3_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x99E840)
#define DEST_MATH_SPHERE3_CONTAINS_OFFSET UNITYSDK_OFFSET(0x99E840)
#define DEST_MATH_SPHERE3_CREATECIRCUMSCRIBED_OFFSET UNITYSDK_OFFSET(0x1FD651B0)
#define DEST_MATH_SPHERE3_CREATEFROMPOINTSAAB_1_OFFSET UNITYSDK_OFFSET(0x1FD644C0)
#define DEST_MATH_SPHERE3_CREATEFROMPOINTSAAB_OFFSET UNITYSDK_OFFSET(0x1FD64210)
#define DEST_MATH_SPHERE3_CREATEFROMPOINTSAVERAGE_1_OFFSET UNITYSDK_OFFSET(0x1FD64DE0)
#define DEST_MATH_SPHERE3_CREATEFROMPOINTSAVERAGE_OFFSET UNITYSDK_OFFSET(0x1FD64640)
#define DEST_MATH_SPHERE3_CREATEINSCRIBED_OFFSET UNITYSDK_OFFSET(0x1FD65530)
#define DEST_MATH_SPHERE3_DISTANCETO_OFFSET UNITYSDK_OFFSET(0x99E740)
#define DEST_MATH_SPHERE3_EVAL_OFFSET UNITYSDK_OFFSET(0x99E630)
#define DEST_MATH_SPHERE3_INCLUDE_1_OFFSET UNITYSDK_OFFSET(0x99E970)
#define DEST_MATH_SPHERE3_INCLUDE_OFFSET UNITYSDK_OFFSET(0x99E890)
#define DEST_MATH_SPHERE3_PROJECT_OFFSET UNITYSDK_OFFSET(0x99E790)
#define DEST_MATH_SPHERE3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99EA80)
#define DEST_MATH_SPHERE3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CCA00)
#define DEST_MATH_SPHERE3__CTOR_OFFSET UNITYSDK_OFFSET(0x3CCA00)

namespace Dest::Math
{
	inline static constexpr unsigned int Sphere3_TypeDefinitionIndex = 35015;

	struct alignas(4) Sphere3
	{
		// static const ::System::Single _4div3mulPi; // 0x0
		::UnityEngine::Vector3 Center; // 0x10
		::System::Single Radius; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3& center, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3__CTOR_OFFSET))(this, center, radius);
		}

		::System::Void _ctor_1(::UnityEngine::Vector3 center, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3__CTOR_1_OFFSET))(this, center, radius);
		}

		/*
		static ::Dest::Math::Sphere3 CreateFromPointsAAB(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* points)
		{
			return ((::Dest::Math::Sphere3(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_CREATEFROMPOINTSAAB_OFFSET))(points);
		}
		*/

		/*
		static ::Dest::Math::Sphere3 CreateFromPointsAAB_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points)
		{
			return ((::Dest::Math::Sphere3(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_CREATEFROMPOINTSAAB_1_OFFSET))(points);
		}
		*/

		/*
		static ::Dest::Math::Sphere3 CreateFromPointsAverage(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* points)
		{
			return ((::Dest::Math::Sphere3(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_CREATEFROMPOINTSAVERAGE_OFFSET))(points);
		}
		*/

		/*
		static ::Dest::Math::Sphere3 CreateFromPointsAverage_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points)
		{
			return ((::Dest::Math::Sphere3(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_CREATEFROMPOINTSAVERAGE_1_OFFSET))(points);
		}
		*/

		/*
		static ::System::Boolean CreateCircumscribed(::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3 v3, ::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_CREATECIRCUMSCRIBED_OFFSET))(v0, v1, v2, v3, sphere);
		}
		*/

		/*
		static ::System::Boolean CreateInscribed(::UnityEngine::Vector3 v0, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3 v3, ::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_CREATEINSCRIBED_OFFSET))(v0, v1, v2, v3, sphere);
		}
		*/

		::System::Single CalcArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_CALCAREA_OFFSET))(this);
		}

		::System::Single CalcVolume()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_CALCVOLUME_OFFSET))(this);
		}

		::UnityEngine::Vector3 Eval(::System::Single theta, ::System::Single phi)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_EVAL_OFFSET))(this, theta, phi);
		}

		::System::Single DistanceTo(::UnityEngine::Vector3 point)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_DISTANCETO_OFFSET))(this, point);
		}

		::UnityEngine::Vector3 Project(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_PROJECT_OFFSET))(this, point);
		}

		::System::Boolean Contains(::UnityEngine::Vector3& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_CONTAINS_OFFSET))(this, point);
		}

		::System::Boolean Contains_1(::UnityEngine::Vector3 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_CONTAINS_1_OFFSET))(this, point);
		}

		/*
		::System::Void Include(::Dest::Math::Sphere3& sphere)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Sphere3&))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_INCLUDE_OFFSET))(this, sphere);
		}
		*/

		/*
		::System::Void Include_1(::Dest::Math::Sphere3 sphere)
		{
			return ((::System::Void(*)(::PVOID, ::Dest::Math::Sphere3))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_INCLUDE_1_OFFSET))(this, sphere);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_SPHERE3_TOSTRING_OFFSET))(this);
		}
	};
}
