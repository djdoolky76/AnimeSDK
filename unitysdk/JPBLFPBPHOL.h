#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define JPBLFPBPHOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D058C20)

inline static constexpr unsigned int JPBLFPBPHOL_TypeDefinitionIndex = 24994;

	class JPBLFPBPHOL : public ::System::Attribute
	{
	public:
		::System::Boolean OKHOGAECGNB; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPBLFPBPHOL_CTOR_OFFSET))(this, a1);
		}

	};
