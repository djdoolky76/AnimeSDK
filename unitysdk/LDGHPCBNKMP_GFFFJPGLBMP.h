#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDGHPCBNKMP_GFFFJPGLBMP_HENJNFDPNML.h"
#include "unitysdk/LDGHPCBNKMP_NGHIAAIBLAK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class LDGHPCBNKMP;
class LDGHPCBNKMP_LCCMLOBCINM;
namespace System { template <typename T> class Predicate_1; }

#define LDGHPCBNKMP_GFFFJPGLBMP_FBLBEMNFMDO_OFFSET UNITYSDK_OFFSET(0x15BC6550)
#define LDGHPCBNKMP_GFFFJPGLBMP_GFALNLAFJFA_OFFSET UNITYSDK_OFFSET(0x15BC6150)
#define LDGHPCBNKMP_GFFFJPGLBMP_GOLKPPAMDLE_OFFSET UNITYSDK_OFFSET(0x15BC2230)
#define LDGHPCBNKMP_GFFFJPGLBMP_POLONIGBBGP_OFFSET UNITYSDK_OFFSET(0x15BC5B80)
#define LDGHPCBNKMP_GFFFJPGLBMP__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC21D0)

inline static constexpr unsigned int LDGHPCBNKMP_GFFFJPGLBMP_TypeDefinitionIndex = 72772;

class LDGHPCBNKMP_GFFFJPGLBMP : public ::System::Object
{
public:
	::System::Nullable_1<::System::Object*> EFIPIDPMJBG; // 0x10
	::System::Byte _padding0[0x20];
	::LDGHPCBNKMP_LCCMLOBCINM* LGGIJKBLAIN; // 0x38
	::System::Nullable_1<::System::Object*> HPECALJKJAG; // 0x40
	::System::Byte _padding1[0x30];
	::LDGHPCBNKMP_GFFFJPGLBMP_HENJNFDPNML JAANDPKANON; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_GFFFJPGLBMP__CTOR_OFFSET))(this);
	}

	::System::Int32 POLONIGBBGP(::LDGHPCBNKMP* LHPFMGBDFPN)
	{
		return ((::System::Int32(*)(::PVOID, ::LDGHPCBNKMP*))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_GFFFJPGLBMP_POLONIGBBGP_OFFSET))(this, LHPFMGBDFPN);
	}

	::LDGHPCBNKMP_NGHIAAIBLAK GFALNLAFJFA()
	{
		return ((::LDGHPCBNKMP_NGHIAAIBLAK(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_GFFFJPGLBMP_GFALNLAFJFA_OFFSET))(this);
	}

	::System::Boolean FBLBEMNFMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_GFFFJPGLBMP_FBLBEMNFMDO_OFFSET))(this);
	}

	::System::Void GOLKPPAMDLE(::LDGHPCBNKMP* LHPFMGBDFPN, ::System::Predicate_1<::System::Object*>* KHNLLKEOKCH, ::System::Boolean EKKJNEADDJK)
	{
		return ((::System::Void(*)(::PVOID, ::LDGHPCBNKMP*, ::System::Predicate_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_GFFFJPGLBMP_GOLKPPAMDLE_OFFSET))(this, LHPFMGBDFPN, KHNLLKEOKCH, EKKJNEADDJK);
	}
};
