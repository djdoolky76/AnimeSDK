#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_HIDEINEDITORMODEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB80780)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideInEditorModeAttribute_TypeDefinitionIndex = 7314;

	class HideInEditorModeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEINEDITORMODEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
