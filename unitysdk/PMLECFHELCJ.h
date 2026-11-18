#pragma once
#include "unitysdk/unitysdk.h"

class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace System { class String; }

#define PMLECFHELCJ_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x1C1DD020)
#define PMLECFHELCJ_IOEFMIHKLKK_OFFSET UNITYSDK_OFFSET(0x1C1DCC60)
#define PMLECFHELCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1DD080)

inline static constexpr unsigned int PMLECFHELCJ_TypeDefinitionIndex = 66742;

class PMLECFHELCJ
{
public:
	::System::String* BODECKIDFGF; // 0x10
	::System::UInt32 KEHECMCDLFC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLECFHELCJ__CTOR_OFFSET))(this);
	}

	::System::Void IOEFMIHKLKK(::GEIHCPAOKKK* OHPJHPEOFLD, ::PJGGDJJPPJP* DCGAHNLABEF, ::System::Single PMNLNNGEIFM, ::System::Single CAOPDAMCNCN, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + PMLECFHELCJ_IOEFMIHKLKK_OFFSET))(this, OHPJHPEOFLD, DCGAHNLABEF, PMNLNNGEIFM, CAOPDAMCNCN, KADBFNFHENH);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLECFHELCJ_IAHPLEHJFGB_OFFSET))(this);
	}
};
