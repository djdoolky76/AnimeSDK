#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DMGGALIOHLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2EEF0)

inline static constexpr unsigned int DMGGALIOHLJ_TypeDefinitionIndex = 42104;

	class DMGGALIOHLJ : public ::System::Object
	{
	public:
		::System::Single BGCCFFPEALM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGGALIOHLJ_CTOR_OFFSET))(this);
		}

	};
