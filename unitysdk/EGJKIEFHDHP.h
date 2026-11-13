#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EGJKIEFHDHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E5B20)

inline static constexpr unsigned int EGJKIEFHDHP_TypeDefinitionIndex = 44692;

	class EGJKIEFHDHP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJKIEFHDHP_CTOR_OFFSET))(this);
		}

	};
