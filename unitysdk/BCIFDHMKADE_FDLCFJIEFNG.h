#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCIFDHMKADE_OPCKNPGJDLN.h"
class BCIFDHMKADE;

#define BCIFDHMKADE_FDLCFJIEFNG_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA8DC0)
#define BCIFDHMKADE_FDLCFJIEFNG_POAACIDJOKM_OFFSET UNITYSDK_OFFSET(0x15EA9160)

inline static constexpr unsigned int BCIFDHMKADE_FDLCFJIEFNG_TypeDefinitionIndex = 78639;

	class BCIFDHMKADE_FDLCFJIEFNG : public ::BCIFDHMKADE_OPCKNPGJDLN
	{
	public:
		::System::Void _ctor(::BCIFDHMKADE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCIFDHMKADE*))((::PBYTE)hIl2Cpp + BCIFDHMKADE_FDLCFJIEFNG_CTOR_OFFSET))(this, a1);
		}

		::System::Void POAACIDJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIFDHMKADE_FDLCFJIEFNG_POAACIDJOKM_OFFSET))(this);
		}

	};
