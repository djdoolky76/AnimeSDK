#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/UpdateMode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NPCCROWD_LOD_TARGETPAIRINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x6CD120)
#define NPCCROWD_LOD_TARGETPAIRINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6CD130)
#define NPCCROWD_LOD_TARGETPAIRINT__CTOR_OFFSET UNITYSDK_OFFSET(0x6CD100)
#define NPCCROWD_LOD_TARGETPAIRINT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x6CD1A0)
#define NPCCROWD_LOD_TARGETPAIRINT___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6CD210)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int TargetPairInt_TypeDefinitionIndex = 40666;

	struct alignas(4) TargetPairInt
	{
		::System::Int32 p1; // 0x10
		::System::Int32 p2; // 0x14
		::NPCCrowd::Lod::UpdateMode mode; // 0x18

		::System::Void _ctor(::System::Int32 p1, ::System::Int32 p2, ::NPCCrowd::Lod::UpdateMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::NPCCrowd::Lod::UpdateMode))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_TARGETPAIRINT__CTOR_OFFSET))(this, p1, p2, mode);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_TARGETPAIRINT_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_TARGETPAIRINT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_TARGETPAIRINT___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_TARGETPAIRINT___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
