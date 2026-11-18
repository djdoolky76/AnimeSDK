#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderType.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_EQUALS_OFFSET UNITYSDK_OFFSET(0x785090)
#define MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7850F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_ColliderTypeCompare_TypeDefinitionIndex = 81619;

	struct alignas(4) AnimatorZoneChangeColliderSize_ColliderTypeCompare
	{
		::System::Boolean Equals(::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType a, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType b)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_EQUALS_OFFSET))(this, a, b);
		}

		::System::Int32 GetHashCode(::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType obj)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECHANGECOLLIDERSIZE_COLLIDERTYPECOMPARE_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
