#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define LDNLBGAJNBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70C1C0)

inline static constexpr unsigned int LDNLBGAJNBC_TypeDefinitionIndex = 36881;

	class LDNLBGAJNBC : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNLBGAJNBC_CTOR_OFFSET))(this);
		}

	};
