#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFGEPHCKAHM_CTOR_OFFSET UNITYSDK_OFFSET(0xF18DFB0)
#define DFGEPHCKAHM_GAOBNIHOCLL_OFFSET UNITYSDK_OFFSET(0xF18DF00)

inline static constexpr unsigned int DFGEPHCKAHM_TypeDefinitionIndex = 69270;

	class DFGEPHCKAHM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFGEPHCKAHM_CTOR_OFFSET))(this);
		}

		::System::Void GAOBNIHOCLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFGEPHCKAHM_GAOBNIHOCLL_OFFSET))(this, a1);
		}

	};
