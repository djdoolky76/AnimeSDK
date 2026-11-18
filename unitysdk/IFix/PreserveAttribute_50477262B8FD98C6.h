#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define IFIX_PRESERVEATTRIBUTE_50477262B8FD98C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBCF80)

namespace IFix
{
	inline static constexpr unsigned int PreserveAttribute_50477262B8FD98C6_TypeDefinitionIndex = 28176;

	class PreserveAttribute_50477262B8FD98C6 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_PRESERVEATTRIBUTE_50477262B8FD98C6__CTOR_OFFSET))(this);
		}
	};
}
