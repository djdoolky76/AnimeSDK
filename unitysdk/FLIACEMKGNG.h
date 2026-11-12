#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLIACEMKGNG;

#define FLIACEMKGNG_BFADFAELKLJ_OFFSET UNITYSDK_OFFSET(0x167A15C0)
#define FLIACEMKGNG_CTOR_OFFSET UNITYSDK_OFFSET(0x167A16C0)
#define FLIACEMKGNG_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x167A16D0)

inline static constexpr unsigned int FLIACEMKGNG_TypeDefinitionIndex = 70182;

	class FLIACEMKGNG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIACEMKGNG_CTOR_OFFSET))(this);
		}

		static ::FLIACEMKGNG* BFADFAELKLJ()
		{
			return ((::FLIACEMKGNG*(*)())((::PBYTE)hIl2Cpp + FLIACEMKGNG_BFADFAELKLJ_OFFSET))();
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIACEMKGNG_FFHNOMIDEDE_OFFSET))(this);
		}

	};
