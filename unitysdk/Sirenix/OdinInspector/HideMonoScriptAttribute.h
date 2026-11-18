#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEMONOSCRIPTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB80820)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideMonoScriptAttribute_TypeDefinitionIndex = 7324;

	class HideMonoScriptAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEMONOSCRIPTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
