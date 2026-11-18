#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_UNITY_SKELETONGRAPHICPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF44DC0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphicParams_TypeDefinitionIndex = 38138;

	class SkeletonGraphicParams : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHICPARAMS__CTOR_OFFSET))(this);
		}
	};
}
