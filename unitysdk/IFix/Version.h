#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IFIX_VERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E432FA0)

namespace IFix
{
	inline static constexpr unsigned int Version_TypeDefinitionIndex = 6925;

	class Version : public ::System::Object
	{
	public:
		// static const ::System::String* FILE_FORMAT; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_VERSION__CTOR_OFFSET))(this);
		}
	};
}
