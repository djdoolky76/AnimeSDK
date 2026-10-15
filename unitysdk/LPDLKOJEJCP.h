#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LPDLKOJEJCP_CTOR_OFFSET UNITYSDK_OFFSET(0xB8185C0)

inline static constexpr unsigned int LPDLKOJEJCP_TypeDefinitionIndex = 80568;

	class LPDLKOJEJCP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDLKOJEJCP_CTOR_OFFSET))(this);
		}

	};
