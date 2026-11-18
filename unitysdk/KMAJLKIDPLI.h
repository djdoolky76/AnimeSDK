#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJAHOIFKDNI.h"
#include "unitysdk/OCLOOAAGDIH.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/KMAJLKIDPLI_CHDDMEDJBNM.h"

class BLCIDFMMHIL;
class HHCFLCEDGMK;
class OEGFJABLDPO;
class PLLPFFOAPGG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMAJLKIDPLI_ANPAGCNFFMD_OFFSET UNITYSDK_OFFSET(0x15B9EEC0)
#define KMAJLKIDPLI_BFBFNOFMELH_OFFSET UNITYSDK_OFFSET(0x15B9F490)
#define KMAJLKIDPLI_CJACMCGEHOD_OFFSET UNITYSDK_OFFSET(0x15BA0480)
#define KMAJLKIDPLI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x15BA01C0)
#define KMAJLKIDPLI_DGGGKIDKCKA_OFFSET UNITYSDK_OFFSET(0x15B9F0E0)
#define KMAJLKIDPLI_DIFHMKAAGMK_OFFSET UNITYSDK_OFFSET(0x15B9ED00)
#define KMAJLKIDPLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B9E990)
#define KMAJLKIDPLI_DKLDPHKEHNF_OFFSET UNITYSDK_OFFSET(0x15B9EAF0)
#define KMAJLKIDPLI_DKNHBELNDCJ_OFFSET UNITYSDK_OFFSET(0x15B9EA00)
#define KMAJLKIDPLI_EKELFNAEHJD_OFFSET UNITYSDK_OFFSET(0x15B9FFF0)
#define KMAJLKIDPLI_ELADDKAOAIO_OFFSET UNITYSDK_OFFSET(0x15BA0BD0)
#define KMAJLKIDPLI_FCAOCACDEAM_OFFSET UNITYSDK_OFFSET(0x15BA07F0)
#define KMAJLKIDPLI_FCGMGCJLGAL_OFFSET UNITYSDK_OFFSET(0x15B9EDB0)
#define KMAJLKIDPLI_GHCMPIAEGMB_OFFSET UNITYSDK_OFFSET(0x15B9FA90)
#define KMAJLKIDPLI_GJHKLKCNHPC_OFFSET UNITYSDK_OFFSET(0x15BA0CE0)
#define KMAJLKIDPLI_GOHEINOHGMM_OFFSET UNITYSDK_OFFSET(0x15B9F4F0)
#define KMAJLKIDPLI_JLPOLPFOPNC_OFFSET UNITYSDK_OFFSET(0x15BA08A0)
#define KMAJLKIDPLI_JNEEJKNELJF_OFFSET UNITYSDK_OFFSET(0x15B9F1F0)
#define KMAJLKIDPLI_JPMOJGPHKGP_OFFSET UNITYSDK_OFFSET(0x15BA0D40)
#define KMAJLKIDPLI_KKAILNDCIOJ_OFFSET UNITYSDK_OFFSET(0x15BA0B70)
#define KMAJLKIDPLI_LNPNDGBDFFJ_OFFSET UNITYSDK_OFFSET(0x15B9F6D0)
#define KMAJLKIDPLI_MAIJPBIIKKA_OFFSET UNITYSDK_OFFSET(0x15BA0560)
#define KMAJLKIDPLI_NELFHOFGPOH_OFFSET UNITYSDK_OFFSET(0x15B9F3E0)
#define KMAJLKIDPLI_NKFLFJABODP_OFFSET UNITYSDK_OFFSET(0x15B9F900)
#define KMAJLKIDPLI_NOIJMLGNPCP_OFFSET UNITYSDK_OFFSET(0x15BA0550)
#define KMAJLKIDPLI_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x15BA0110)
#define KMAJLKIDPLI_PCKHFKHIDLO_OFFSET UNITYSDK_OFFSET(0x15BA02E0)
#define KMAJLKIDPLI_PDCMJBKNDJO_OFFSET UNITYSDK_OFFSET(0x15B9F630)
#define KMAJLKIDPLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B9F360)
#define KMAJLKIDPLI__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9F040)

inline static constexpr unsigned int KMAJLKIDPLI_TypeDefinitionIndex = 50086;

class KMAJLKIDPLI : public ::System::Object
{
public:
	static ::Unity::Profiling::ProfilerMarker* StaticGet_JDKNMMKFPLH()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(KMAJLKIDPLI_TypeDefinitionIndex)->GetStaticField(0xE4A0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_LIEKKKLMDMC()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(KMAJLKIDPLI_TypeDefinitionIndex)->GetStaticField(0xE4A8);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_DNPCLLOLHAA()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(KMAJLKIDPLI_TypeDefinitionIndex)->GetStaticField(0xE4B0);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_PCFNBDJJHDK()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(KMAJLKIDPLI_TypeDefinitionIndex)->GetStaticField(0xE4B8);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OCLOOAAGDIH>* OEIPMCEPHAM; // 0x10
	::PLLPFFOAPGG* NLDDDMJLLLH; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HHCFLCEDGMK*>* IIHOGCLLONA; // 0x20
	::Unity::Collections::NativeList_1<::OCLOOAAGDIH> NJDFCEBNGEB; // 0x28
	::System::Byte _padding0[0x8];
	::Unity::Collections::NativeList_1<::MJAHOIFKDNI> ALINPGDCMGL; // 0x38
	::System::Byte _padding1[0x8];
	::Unity::Jobs::JobHandle EDEGODAFOJC; // 0x48
	::System::Int32 PILBPGHGDPG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMAJLKIDPLI__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_DISPOSE_OFFSET))(this);
	}

	::System::Boolean DIFHMKAAGMK(::System::Collections::Specialized::NotifyCollectionChangedAction MHGFKGMMKJJ, ::BLCIDFMMHIL* ODOLPFOAFAG, ::BLCIDFMMHIL* MJODFDBNJIP, ::HHCFLCEDGMK* OHHGOMIPDIJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedAction, ::BLCIDFMMHIL*, ::BLCIDFMMHIL*, ::HHCFLCEDGMK*))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_DIFHMKAAGMK_OFFSET))(this, MHGFKGMMKJJ, ODOLPFOAFAG, MJODFDBNJIP, OHHGOMIPDIJ);
	}

	::System::Boolean NELFHOFGPOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_NELFHOFGPOH_OFFSET))(this);
	}

	::System::Void GOHEINOHGMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_GOHEINOHGMM_OFFSET))(this);
	}

	::System::Int32 BFBFNOFMELH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_BFBFNOFMELH_OFFSET))(this);
	}

	::System::Int32 NKFLFJABODP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_NKFLFJABODP_OFFSET))(this);
	}

	::System::Void DGGGKIDKCKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_DGGGKIDKCKA_OFFSET))(this);
	}

	::System::Void FCGMGCJLGAL(::BLCIDFMMHIL* KLJABKLIMIN, ::HHCFLCEDGMK* CFLAJMMODKB)
	{
		return ((::System::Void(*)(::PVOID, ::BLCIDFMMHIL*, ::HHCFLCEDGMK*))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_FCGMGCJLGAL_OFFSET))(this, KLJABKLIMIN, CFLAJMMODKB);
	}

	::System::Void OKJCHFGIKBH(::System::Single FNIOPKPHDEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_OKJCHFGIKBH_OFFSET))(this, FNIOPKPHDEH, PMNLNNGEIFM);
	}

	static ::KMAJLKIDPLI* COKNIICCODC()
	{
		return ((::KMAJLKIDPLI*(*)())((::PBYTE)hIl2Cpp + KMAJLKIDPLI_COKNIICCODC_OFFSET))();
	}

	::System::Void PCKHFKHIDLO(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_PCKHFKHIDLO_OFFSET))(this, JHFKDGBCOBA);
	}

	::HHCFLCEDGMK* CJACMCGEHOD(::BLCIDFMMHIL*& LOKCJNCCBGD)
	{
		return ((::HHCFLCEDGMK*(*)(::PVOID, ::BLCIDFMMHIL*&))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_CJACMCGEHOD_OFFSET))(this, LOKCJNCCBGD);
	}

	::PLLPFFOAPGG* NOIJMLGNPCP()
	{
		return ((::PLLPFFOAPGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_NOIJMLGNPCP_OFFSET))(this);
	}

	static ::System::Void MAIJPBIIKKA(::OEGFJABLDPO* GBMLHHANFFN, ::KMAJLKIDPLI_CHDDMEDJBNM& param_1)
	{
		return ((::System::Void(*)(::OEGFJABLDPO*, ::KMAJLKIDPLI_CHDDMEDJBNM&))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_MAIJPBIIKKA_OFFSET))(GBMLHHANFFN, param_1);
	}

	::HHCFLCEDGMK* EKELFNAEHJD(::BLCIDFMMHIL*& LOKCJNCCBGD, ::HHCFLCEDGMK*& CFLAJMMODKB)
	{
		return ((::HHCFLCEDGMK*(*)(::PVOID, ::BLCIDFMMHIL*&, ::HHCFLCEDGMK*&))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_EKELFNAEHJD_OFFSET))(this, LOKCJNCCBGD, CFLAJMMODKB);
	}

	::System::Void PDCMJBKNDJO(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_PDCMJBKNDJO_OFFSET))(this, JHFKDGBCOBA);
	}

	::System::Void JNEEJKNELJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_JNEEJKNELJF_OFFSET))(this);
	}

	::System::Boolean FCAOCACDEAM(::System::Int32 ACHBBPJIBIE, ::OCLOOAAGDIH& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OCLOOAAGDIH&))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_FCAOCACDEAM_OFFSET))(this, ACHBBPJIBIE, IGAAKDOIPNN);
	}

	::System::Void LNPNDGBDFFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_LNPNDGBDFFJ_OFFSET))(this);
	}

	static ::System::Void JLPOLPFOPNC(::MJAHOIFKDNI& HLFFCMIFFIB, ::OEGFJABLDPO* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::MJAHOIFKDNI&, ::OEGFJABLDPO*))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_JLPOLPFOPNC_OFFSET))(HLFFCMIFFIB, HODAIDNDKHD);
	}

	::System::Void GHCMPIAEGMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_GHCMPIAEGMB_OFFSET))(this);
	}

	::System::Void ANPAGCNFFMD(::BLCIDFMMHIL* KLJABKLIMIN)
	{
		return ((::System::Void(*)(::PVOID, ::BLCIDFMMHIL*))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_ANPAGCNFFMD_OFFSET))(this, KLJABKLIMIN);
	}

	::System::Boolean ELADDKAOAIO(::System::Int32& ACHBBPJIBIE, ::HHCFLCEDGMK*& CFLAJMMODKB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::HHCFLCEDGMK*&))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_ELADDKAOAIO_OFFSET))(this, ACHBBPJIBIE, CFLAJMMODKB);
	}

	::System::Void DKNHBELNDCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_DKNHBELNDCJ_OFFSET))(this);
	}

	::System::Void GJHKLKCNHPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_GJHKLKCNHPC_OFFSET))(this);
	}

	::System::Void JPMOJGPHKGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_JPMOJGPHKGP_OFFSET))(this);
	}

	::System::Void DKLDPHKEHNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_DKLDPHKEHNF_OFFSET))(this);
	}

	static ::System::Void KKAILNDCIOJ(::MJAHOIFKDNI& HLFFCMIFFIB, ::KMAJLKIDPLI_CHDDMEDJBNM& param_1)
	{
		return ((::System::Void(*)(::MJAHOIFKDNI&, ::KMAJLKIDPLI_CHDDMEDJBNM&))((::PBYTE)hIl2Cpp + KMAJLKIDPLI_KKAILNDCIOJ_OFFSET))(HLFFCMIFFIB, param_1);
	}
};
