#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXENTITLEMENTSEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C94E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int XboxEntitlementsExtension_TypeDefinitionIndex = 8668;

	class XboxEntitlementsExtension : public ::System::Object
	{
	public:
		::System::String* collectionsId; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXENTITLEMENTSEXTENSION_CTOR_OFFSET))(this);
		}

	};
}
