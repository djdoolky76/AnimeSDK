#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFCHPMGNMOM;
class IALBJEGDCFI;
class JOOHEPGEHNK;
class NDCLBAKBEIP;

#define IALBJEGDCFI_CMFPKDNNFAF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E0C130)
#define IALBJEGDCFI_CMFPKDNNFAF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0C120)

inline static constexpr unsigned int IALBJEGDCFI_CMFPKDNNFAF_TypeDefinitionIndex = 79497;

	class IALBJEGDCFI_CMFPKDNNFAF : public ::System::Object
	{
	public:
		::JOOHEPGEHNK* PONKAEHCHGF; // 0x10
		::NDCLBAKBEIP* AFKPGPDBMKH; // 0x18
		::System::Void _ctor(::NDCLBAKBEIP* a1, ::JOOHEPGEHNK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDCLBAKBEIP*, ::JOOHEPGEHNK*))((::PBYTE)hIl2Cpp + IALBJEGDCFI_CMFPKDNNFAF_CTOR_OFFSET))(this, a1, a2);
		}

		::IALBJEGDCFI* BPLPBPMEODA(::HFCHPMGNMOM* a1)
		{
			return ((::IALBJEGDCFI*(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + IALBJEGDCFI_CMFPKDNNFAF_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
