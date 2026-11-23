#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_B5A0EE31388C3FAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int B5A0EE31388C3FAB_TypeDefinitionIndex = 20125;

	class B5A0EE31388C3FAB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B5A0EE31388C3FAB__CTOR_OFFSET))(this);
		}
	};
}
