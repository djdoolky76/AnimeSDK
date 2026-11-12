#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHBNFGAAMJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA65400)

inline static constexpr unsigned int CHBNFGAAMJB_TypeDefinitionIndex = 43937;

	class CHBNFGAAMJB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHBNFGAAMJB_CTOR_OFFSET))(this);
		}

	};
