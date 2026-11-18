#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PRESERVEATTRIBUTE_820C962E41FDB21F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9702A0)

namespace IFix
{
	inline static constexpr unsigned int PreserveAttribute_820C962E41FDB21F_TypeDefinitionIndex = 27026;

	class PreserveAttribute_820C962E41FDB21F : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PRESERVEATTRIBUTE_820C962E41FDB21F__CTOR_OFFSET))(this);
		}
	};
}
