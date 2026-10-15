#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNHEPGLMAFE.h"
class FPBFICAFCDO;
class IKHDMKIGNDL;

#define MDOLOOKKHJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71A940)
#define MDOLOOKKHJM_PBDFDNCIMIH_OFFSET UNITYSDK_OFFSET(0x1C71AA10)

inline static constexpr unsigned int MDOLOOKKHJM_TypeDefinitionIndex = 37188;

	class MDOLOOKKHJM : public ::JNHEPGLMAFE
	{
	public:
		::System::Void _ctor(::IKHDMKIGNDL* a1, ::FPBFICAFCDO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IKHDMKIGNDL*, ::FPBFICAFCDO*))((::PBYTE)hIl2Cpp + MDOLOOKKHJM_CTOR_OFFSET))(this, a1, a2);
		}

		::IKHDMKIGNDL* PBDFDNCIMIH()
		{
			return ((::IKHDMKIGNDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDOLOOKKHJM_PBDFDNCIMIH_OFFSET))(this);
		}

	};
