#pragma once
#include "unitysdk/unitysdk.h"

#define RICHTAP_RICHTAPMANAGER_ONAPPLICATIONAWAKEN_OFFSET UNITYSDK_OFFSET(0x1F61FF00)
#define RICHTAP_RICHTAPMANAGER_ONAPPLICATIONQUITTING_OFFSET UNITYSDK_OFFSET(0x1F620120)
#define RICHTAP_RICHTAPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6201A0)

namespace RichTap
{
	inline static constexpr unsigned int RichtapManager_TypeDefinitionIndex = 36741;

	class RichtapManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_RICHTAPMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void OnApplicationAwaken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_RICHTAPMANAGER_ONAPPLICATIONAWAKEN_OFFSET))(this);
		}

		::System::Void OnApplicationQuitting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_RICHTAPMANAGER_ONAPPLICATIONQUITTING_OFFSET))(this);
		}
	};
}
