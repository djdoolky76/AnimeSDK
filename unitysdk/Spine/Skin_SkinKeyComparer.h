#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Spine/Skin_SkinKey.h"
namespace Spine { class Skin_SkinKeyComparer; }

#define SPINE_SKIN_SKINKEYCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ECEA840)
#define SPINE_SKIN_SKINKEYCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECEA830)
#define SPINE_SKIN_SKINKEYCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_SKIN_SKINKEY__EQUALS_OFFSET UNITYSDK_OFFSET(0x1ECEA800)
#define SPINE_SKIN_SKINKEYCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_SKIN_SKINKEY__GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ECEA820)

namespace Spine
{
	class Skin_SkinKeyComparer : public ::System::Object
	{
	public:
		static ::Spine::Skin_SkinKeyComparer** StaticGet_Instance()
		{
			return (::Spine::Skin_SkinKeyComparer**)UnitySDK::FromName("Spine", "SkinKeyComparer")->GetStaticField(0x511B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINKEYCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINKEYCOMPARER_CCTOR_OFFSET))();
		}

		::System::Boolean System_Collections_Generic_IEqualityComparer_Spine_Skin_SkinKey__Equals(::Spine::Skin_SkinKey a1, ::Spine::Skin_SkinKey a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Skin_SkinKey, ::Spine::Skin_SkinKey))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINKEYCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_SKIN_SKINKEY__EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_Collections_Generic_IEqualityComparer_Spine_Skin_SkinKey__GetHashCode(::Spine::Skin_SkinKey a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Spine::Skin_SkinKey))((::PBYTE)hIl2Cpp + SPINE_SKIN_SKINKEYCOMPARER_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SPINE_SKIN_SKINKEY__GETHASHCODE_OFFSET))(this, a1);
		}

	};
}
