#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::ProBuilder { class Bounds2D; }

#define UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_1_OFFSET UNITYSDK_OFFSET(0x204477B0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_2_OFFSET UNITYSDK_OFFSET(0x20448B20)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_OFFSET UNITYSDK_OFFSET(0x204471E0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x20446C50)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20445890)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_2_OFFSET UNITYSDK_OFFSET(0x204458B0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_3_OFFSET UNITYSDK_OFFSET(0x20445EA0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_4_OFFSET UNITYSDK_OFFSET(0x20446A40)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_5_OFFSET UNITYSDK_OFFSET(0x20446B70)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_OFFSET UNITYSDK_OFFSET(0x20445860)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_GET_CORNERS_OFFSET UNITYSDK_OFFSET(0x204457B0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_GET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x204457A0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x20445770)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTSLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x20446CB0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTS_1_OFFSET UNITYSDK_OFFSET(0x20447190)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x20447120)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_SETWITHPOINTS_1_OFFSET UNITYSDK_OFFSET(0x20445ED0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_SETWITHPOINTS_OFFSET UNITYSDK_OFFSET(0x204458E0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x20445780)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_SIZE_OFFSET UNITYSDK_OFFSET(0x20448170)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20449490)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Bounds2D_TypeDefinitionIndex = 45414;

	class Bounds2D : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 m_Extents; // 0x10
		::UnityEngine::Vector2 center; // 0x18
		::UnityEngine::Vector2 m_Size; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_4(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_5(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CTOR_5_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 get_size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_SET_SIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_extents()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_GET_EXTENTS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_corners()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_GET_CORNERS_OFFSET))(this);
		}

		::System::Boolean ContainsPoint(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CONTAINSPOINT_OFFSET))(this, a1);
		}

		::System::Boolean IntersectsLineSegment(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTSLINESEGMENT_OFFSET))(this, a1, a2);
		}

		::System::Boolean Intersects(::UnityEngine::ProBuilder::Bounds2D* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Bounds2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTS_OFFSET))(this, a1);
		}

		::System::Boolean Intersects_1(::UnityEngine::Rect a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTS_1_OFFSET))(this, a1);
		}

		::System::Void SetWithPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_SETWITHPOINTS_OFFSET))(this, a1);
		}

		::System::Void SetWithPoints_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_SETWITHPOINTS_1_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector2 Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 Center_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 Size(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_SIZE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 Center_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_2_OFFSET))(a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_TOSTRING_OFFSET))(this);
		}

	};
}
