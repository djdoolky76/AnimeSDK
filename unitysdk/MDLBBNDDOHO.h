#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFLONJKEAKP.h"
#include "unitysdk/EEDKGBHGAPN.h"
class IAFKJCICCOP;
class IGACELAIJCM;

#define MDLBBNDDOHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A7580)
#define MDLBBNDDOHO_OPBFNDKICAC_OFFSET UNITYSDK_OFFSET(0xB8A75D0)

inline static constexpr unsigned int MDLBBNDDOHO_TypeDefinitionIndex = 67187;

	class MDLBBNDDOHO : public ::DFLONJKEAKP
	{
	public:
		::IAFKJCICCOP* OFKHJNMELII; // 0x10
		::EEDKGBHGAPN CFKHNPGEAJA; // 0x18
		::System::Void _ctor(::IAFKJCICCOP* a1, ::EEDKGBHGAPN a2)
		{
			return ((::System::Void(*)(::PVOID, ::IAFKJCICCOP*, ::EEDKGBHGAPN))((::PBYTE)hIl2Cpp + MDLBBNDDOHO_CTOR_OFFSET))(this, a1, a2);
		}

		::IGACELAIJCM* OPBFNDKICAC()
		{
			return ((::IGACELAIJCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLBBNDDOHO_OPBFNDKICAC_OFFSET))(this);
		}

	};
