#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Delegate; }
namespace System { class Type; }

#define UNITYENGINE_RENDERING_DELEGATEUTILITY_CAST_OFFSET UNITYSDK_OFFSET(0x1F2C1030)

namespace UnityEngine::Rendering
{
	class DelegateUtility : public ::System::Object
	{
	public:
		static ::System::Delegate* Cast(::System::Delegate* a1, ::System::Type* a2)
		{
			return ((::System::Delegate*(*)(::System::Delegate*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DELEGATEUTILITY_CAST_OFFSET))(a1, a2);
		}

	};
}
