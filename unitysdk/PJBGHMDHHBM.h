#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJMEDGEANLF;
class LMEDFOINBOG;

#define PJBGHMDHHBM_EOMCCGCJMII_OFFSET UNITYSDK_OFFSET(0x1F35EC50)
#define PJBGHMDHHBM_FGDNDCLAPEJ_OFFSET UNITYSDK_OFFSET(0x1F35EBF0)
#define PJBGHMDHHBM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1F35EB90)
#define PJBGHMDHHBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F35EBE0)

inline static constexpr unsigned int PJBGHMDHHBM_TypeDefinitionIndex = 28923;

class PJBGHMDHHBM : public ::System::Object
{
public:
	::LMEDFOINBOG* NJCMMBIIGHC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBGHMDHHBM__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBGHMDHHBM_NPOLNFDBOOD_OFFSET))(this);
	}

	::BJMEDGEANLF* FGDNDCLAPEJ()
	{
		return ((::BJMEDGEANLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBGHMDHHBM_FGDNDCLAPEJ_OFFSET))(this);
	}

	::System::Void EOMCCGCJMII(::LMEDFOINBOG* FFPINCENMJG)
	{
		return ((::System::Void(*)(::PVOID, ::LMEDFOINBOG*))((::PBYTE)hIl2Cpp + PJBGHMDHHBM_EOMCCGCJMII_OFFSET))(this, FFPINCENMJG);
	}
};
