#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FIOHLEFGFPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157B1540)

inline static constexpr unsigned int FIOHLEFGFPJ_TypeDefinitionIndex = 80556;

	class FIOHLEFGFPJ : public ::System::Object
	{
	public:
		::System::UInt32 NJGKCPOOHDM; // 0x10
		::System::Boolean GNDCCBNILML; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FIOHLEFGFPJ_CTOR_OFFSET))(this, a1, a2);
		}

	};
