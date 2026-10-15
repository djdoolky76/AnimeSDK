#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_REJECTDRAGANDDROPMATERIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49D320)

namespace UnityEngine
{
	class RejectDragAndDropMaterial : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REJECTDRAGANDDROPMATERIAL_CTOR_OFFSET))(this);
		}

	};
}
