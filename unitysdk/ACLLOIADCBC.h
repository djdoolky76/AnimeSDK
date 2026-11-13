#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ACLLOIADCBC_CTOR_OFFSET UNITYSDK_OFFSET(0x18293500)

inline static constexpr unsigned int ACLLOIADCBC_TypeDefinitionIndex = 79907;

	class ACLLOIADCBC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLLOIADCBC_CTOR_OFFSET))(this);
		}

	};
