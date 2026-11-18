#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_RUNTIMECLIPMONTAGEKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x60E170)
#define NPCCROWD_ANIMATION_RUNTIMECLIPMONTAGEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x60E120)
#define NPCCROWD_ANIMATION_RUNTIMECLIPMONTAGEKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x60E260)
#define NPCCROWD_ANIMATION_RUNTIMECLIPMONTAGEKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x60E2C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int RuntimeClipMontageKey_TypeDefinitionIndex = 71173;

	struct alignas(4) RuntimeClipMontageKey
	{
		::System::Int32 clipID; // 0x10
		::System::Int32 layer; // 0x14

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_RUNTIMECLIPMONTAGEKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_RUNTIMECLIPMONTAGEKEY_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_RUNTIMECLIPMONTAGEKEY___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_RUNTIMECLIPMONTAGEKEY___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
