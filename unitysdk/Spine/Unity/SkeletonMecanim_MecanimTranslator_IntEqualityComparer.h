#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED21A80)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED21A70)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ED21A50)
#define SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED21A60)

namespace Spine::Unity
{
	class SkeletonMecanim_MecanimTranslator_IntEqualityComparer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::Int32>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::Int32>**)UnitySDK::FromName("Spine.Unity", "IntEqualityComparer")->GetStaticField(0x139F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONMECANIM_MECANIMTRANSLATOR_INTEQUALITYCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
