#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KGCNIONFKOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB80D0)

inline static constexpr unsigned int KGCNIONFKOM_TypeDefinitionIndex = 42984;

	class KGCNIONFKOM : public ::System::Object
	{
	public:
		::System::Single JBCFPAEELBL; // 0x10
		::System::Int32 NIJHJCPIKMH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCNIONFKOM_CTOR_OFFSET))(this);
		}

	};
