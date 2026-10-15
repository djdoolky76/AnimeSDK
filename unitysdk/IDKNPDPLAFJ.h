#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IDKNPDPLAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB075C0)

inline static constexpr unsigned int IDKNPDPLAFJ_TypeDefinitionIndex = 42265;

	class IDKNPDPLAFJ : public ::System::Object
	{
	public:
		::System::UInt32 EOBPGFDMKJC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKNPDPLAFJ_CTOR_OFFSET))(this);
		}

	};
