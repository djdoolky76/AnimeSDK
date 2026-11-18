#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define HIAGLJGFHHF_EGKKKCOAAGI_OFFSET UNITYSDK_OFFSET(0x1101BE30)
#define HIAGLJGFHHF_GMKGGHMONIB_OFFSET UNITYSDK_OFFSET(0x1101B960)
#define HIAGLJGFHHF_HBBGJPNIJEC_OFFSET UNITYSDK_OFFSET(0x1101B650)
#define HIAGLJGFHHF_HBKMAINILBP_OFFSET UNITYSDK_OFFSET(0x1101C070)
#define HIAGLJGFHHF_MLFFCEEFDBM_OFFSET UNITYSDK_OFFSET(0x1101C2D0)
#define HIAGLJGFHHF_OMKEEEPOJFF_OFFSET UNITYSDK_OFFSET(0x1101BBE0)
#define HIAGLJGFHHF_PEGNHBHHFGH_OFFSET UNITYSDK_OFFSET(0x1101B400)
#define HIAGLJGFHHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1101B3F0)

inline static constexpr unsigned int HIAGLJGFHHF_TypeDefinitionIndex = 45281;

class HIAGLJGFHHF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAGLJGFHHF__CTOR_OFFSET))(this);
	}

	static ::System::Void PEGNHBHHFGH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAGLJGFHHF_PEGNHBHHFGH_OFFSET))();
	}

	static ::System::Boolean HBBGJPNIJEC(::System::Int32 OPLNELNDLAK, ::System::String* FKOAGFOBLFM)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HIAGLJGFHHF_HBBGJPNIJEC_OFFSET))(OPLNELNDLAK, FKOAGFOBLFM);
	}

	static ::System::Boolean GMKGGHMONIB(::System::String* OBEGMFGKBCA, ::System::String* AELLPLBJELA, ::System::Action* PABLEDCGDGM)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HIAGLJGFHHF_GMKGGHMONIB_OFFSET))(OBEGMFGKBCA, AELLPLBJELA, PABLEDCGDGM);
	}

	static ::System::Void OMKEEEPOJFF(::System::Single DHHLAOMBKLM, ::System::Single NLODLGANNKI)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HIAGLJGFHHF_OMKEEEPOJFF_OFFSET))(DHHLAOMBKLM, NLODLGANNKI);
	}

	static ::System::Void EGKKKCOAAGI(::System::String* GEGHDAHPIAP, ::System::String* DJAGKIFBANP, ::System::Boolean HPINBCPMHJE, ::System::Int32 DKCINPPMGLN)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + HIAGLJGFHHF_EGKKKCOAAGI_OFFSET))(GEGHDAHPIAP, DJAGKIFBANP, HPINBCPMHJE, DKCINPPMGLN);
	}

	static ::System::Void HBKMAINILBP(::System::Boolean KFNLCDAAHHI)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HIAGLJGFHHF_HBKMAINILBP_OFFSET))(KFNLCDAAHHI);
	}

	static ::System::Void MLFFCEEFDBM(::System::Boolean HPINBCPMHJE, ::System::String* JBNFBGMMKJI)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + HIAGLJGFHHF_MLFFCEEFDBM_OFFSET))(HPINBCPMHJE, JBNFBGMMKJI);
	}
};
