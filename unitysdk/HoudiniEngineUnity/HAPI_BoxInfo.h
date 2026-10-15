#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HAPI_BOXINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x304ADF0)

namespace HoudiniEngineUnity
{
	struct alignas(8) HAPI_BoxInfo
	{
		::Il2CppArray<::System::Single>* center; // 0x10
		::Il2CppArray<::System::Single>* size; // 0x18
		::Il2CppArray<::System::Single>* rotation; // 0x20
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HAPI_BOXINFO_CTOR_OFFSET))(this, a1);
		}

	};
}
