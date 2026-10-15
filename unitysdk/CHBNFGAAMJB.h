#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHBNFGAAMJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B6450)

inline static constexpr unsigned int CHBNFGAAMJB_TypeDefinitionIndex = 42956;

	class CHBNFGAAMJB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNFGAAMJB_CTOR_OFFSET))(this);
		}

	};
