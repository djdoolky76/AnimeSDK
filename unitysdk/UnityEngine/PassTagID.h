#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define UNITYENGINE_PASSTAGID_CTOR_OFFSET UNITYSDK_OFFSET(0x14190)
#define UNITYENGINE_PASSTAGID_INITPASSTAG_1_OFFSET UNITYSDK_OFFSET(0x1F40A830)
#define UNITYENGINE_PASSTAGID_INITPASSTAG_OFFSET UNITYSDK_OFFSET(0x3C700F0)

namespace UnityEngine
{
	struct alignas(8) PassTagID
	{
		::System::String* name; // 0x10
		::System::Int32 id; // 0x18
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PASSTAGID_CTOR_OFFSET))(this, a1);
		}

		::System::Void InitPassTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PASSTAGID_INITPASSTAG_OFFSET))(this);
		}

		static ::System::Int32 InitPassTag_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PASSTAGID_INITPASSTAG_1_OFFSET))(a1);
		}

	};
}
