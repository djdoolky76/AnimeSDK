#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PHHBGEDJJNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9AD400)

inline static constexpr unsigned int PHHBGEDJJNO_TypeDefinitionIndex = 48653;

	class PHHBGEDJJNO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHBGEDJJNO_CTOR_OFFSET))(this);
		}

	};
