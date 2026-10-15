#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKCNCLIOFDA_JMPJNHALMMF.h"

#define GKCNCLIOFDA_CCMJMPIGHIC_CDBEKELOIKI_OFFSET UNITYSDK_OFFSET(0x15A903F0)
#define GKCNCLIOFDA_CCMJMPIGHIC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8F7C0)

inline static constexpr unsigned int GKCNCLIOFDA_CCMJMPIGHIC_TypeDefinitionIndex = 53534;

	class GKCNCLIOFDA_CCMJMPIGHIC : public ::GKCNCLIOFDA_JMPJNHALMMF
	{
	public:
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CCMJMPIGHIC_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean CDBEKELOIKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_CCMJMPIGHIC_CDBEKELOIKI_OFFSET))(this);
		}

	};
