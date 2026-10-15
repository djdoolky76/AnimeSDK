#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FIOHLEFGFPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157A5940)

inline static constexpr unsigned int FIOHLEFGFPJ_TypeDefinitionIndex = 80555;

	class FIOHLEFGFPJ : public ::System::Object
	{
	public:
		::System::Boolean GNDCCBNILML; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 NJGKCPOOHDM; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + FIOHLEFGFPJ_CTOR_OFFSET))(this, a1, a2);
		}

	};
