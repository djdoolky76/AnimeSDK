#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKIACFHHCGC;

#define JKNLCCEJEAH_HKPGCEHPCMG_CKMKIOPKFNB_OFFSET UNITYSDK_OFFSET(0x1A47A340)
#define JKNLCCEJEAH_HKPGCEHPCMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47A330)

inline static constexpr unsigned int JKNLCCEJEAH_HKPGCEHPCMG_TypeDefinitionIndex = 65816;

class JKNLCCEJEAH_HKPGCEHPCMG : public ::System::Object
{
public:
	::System::Int32 FPBKEMIBEDO; // 0x10
	::System::Int32 DFMGONBMJDL; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNLCCEJEAH_HKPGCEHPCMG__CTOR_OFFSET))(this);
	}

	::System::Boolean CKMKIOPKFNB(::MKIACFHHCGC* IAFGPIAHLFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MKIACFHHCGC*))((::PBYTE)hIl2Cpp + JKNLCCEJEAH_HKPGCEHPCMG_CKMKIOPKFNB_OFFSET))(this, IAFGPIAHLFP);
	}
};
