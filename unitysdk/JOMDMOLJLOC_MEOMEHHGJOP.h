#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define JOMDMOLJLOC_MEOMEHHGJOP_CKLAOOBMMAE_OFFSET UNITYSDK_OFFSET(0x17B59850)
#define JOMDMOLJLOC_MEOMEHHGJOP__CTOR_OFFSET UNITYSDK_OFFSET(0x17B59840)

inline static constexpr unsigned int JOMDMOLJLOC_MEOMEHHGJOP_TypeDefinitionIndex = 77102;

class JOMDMOLJLOC_MEOMEHHGJOP : public ::System::Object
{
public:
	::UnityEngine::Transform* GKBJOPJKCLB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_MEOMEHHGJOP__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 CKLAOOBMMAE()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMDMOLJLOC_MEOMEHHGJOP_CKLAOOBMMAE_OFFSET))(this);
	}
};
