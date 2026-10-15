#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEDATABASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1563C050)

namespace EnviromentSystemV2Space
{
	class EnvProfileDataBase : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 version; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEDATABASE_CTOR_OFFSET))(this);
		}

	};
}
