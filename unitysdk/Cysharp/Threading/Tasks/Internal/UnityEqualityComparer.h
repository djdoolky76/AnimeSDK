#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/BoundsInt.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RangeInt.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RectInt.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F165080)
#define CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_GETDEFAULTHELPER_OFFSET UNITYSDK_OFFSET(0x1F164D20)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int UnityEqualityComparer_TypeDefinitionIndex = 39603;

	class UnityEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>** StaticGet_Vector4()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector4>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33140);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>** StaticGet_Vector2()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33148);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>** StaticGet_Quaternion()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Quaternion>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33150);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>** StaticGet_Vector3Int()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3Int>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33158);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>** StaticGet_RectInt()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RectInt>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33160);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>** StaticGet_RangeInt()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::RangeInt>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33168);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>** StaticGet_Vector2Int()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector2Int>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33170);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>** StaticGet_Color32()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color32>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33178);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>** StaticGet_Rect()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rect>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33180);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>** StaticGet_Bounds()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Bounds>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33188);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>** StaticGet_Color()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Color>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33190);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>** StaticGet_BoundsInt()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::BoundsInt>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x33198);
		}

		static ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>** StaticGet_Vector3()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Vector3>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x331A0);
		}

		static ::System::RuntimeTypeHandle* StaticGet_vector2Type()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E40);
		}

		static ::System::RuntimeTypeHandle* StaticGet_vector3IntType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E48);
		}

		static ::System::RuntimeTypeHandle* StaticGet_rectIntType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E50);
		}

		static ::System::RuntimeTypeHandle* StaticGet_vector4Type()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E58);
		}

		static ::System::RuntimeTypeHandle* StaticGet_colorType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E60);
		}

		static ::System::RuntimeTypeHandle* StaticGet_boundsIntType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E68);
		}

		static ::System::RuntimeTypeHandle* StaticGet_vector3Type()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E70);
		}

		static ::System::RuntimeTypeHandle* StaticGet_color32Type()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E78);
		}

		static ::System::RuntimeTypeHandle* StaticGet_rangeIntType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E80);
		}

		static ::System::RuntimeTypeHandle* StaticGet_rectType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E88);
		}

		static ::System::RuntimeTypeHandle* StaticGet_boundsType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E90);
		}

		static ::System::RuntimeTypeHandle* StaticGet_quaternionType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9E98);
		}

		static ::System::RuntimeTypeHandle* StaticGet_vector2IntType()
		{
			return (::System::RuntimeTypeHandle*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "UnityEqualityComparer")->GetStaticField(0x9EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_CCTOR_OFFSET))();
		}

		static ::System::Object* GetDefaultHelper(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_UNITYEQUALITYCOMPARER_GETDEFAULTHELPER_OFFSET))(a1);
		}

	};
}
