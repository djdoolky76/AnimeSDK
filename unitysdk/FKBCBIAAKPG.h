#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBAHJMANGHN;

#define FKBCBIAAKPG_CTOR_OFFSET UNITYSDK_OFFSET(0x157E5F30)
#define FKBCBIAAKPG_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x157E5C80)

inline static constexpr unsigned int FKBCBIAAKPG_TypeDefinitionIndex = 79333;

	class FKBCBIAAKPG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBCBIAAKPG_CTOR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::MBAHJMANGHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBAHJMANGHN*))((::PBYTE)hIl2Cpp + FKBCBIAAKPG_JJNFOPNOPBF_OFFSET))(this, a1);
		}

	};
