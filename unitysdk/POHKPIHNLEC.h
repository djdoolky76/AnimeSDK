#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHLIFAAOPDG.h"
#include "unitysdk/System/Object.h"

class AAPNJPIICDO;
class GAAHPPHMFDO;
namespace System::Collections { class IEnumerable; }

#define POHKPIHNLEC_APNKJBPLLDK_OFFSET UNITYSDK_OFFSET(0x1CE84F40)
#define POHKPIHNLEC_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1CEAEB50)
#define POHKPIHNLEC_BOAPJBCOLDB_OFFSET UNITYSDK_OFFSET(0x1CEB62F0)
#define POHKPIHNLEC_CCAPBDCMHLO_OFFSET UNITYSDK_OFFSET(0x1CE83E40)
#define POHKPIHNLEC_CIKEDGKFHLH_OFFSET UNITYSDK_OFFSET(0x1CE82F90)
#define POHKPIHNLEC_DIIBJKANFIM_OFFSET UNITYSDK_OFFSET(0x1CE83CA0)
#define POHKPIHNLEC_FAJLALLMOOD_OFFSET UNITYSDK_OFFSET(0x1CE81DF0)
#define POHKPIHNLEC_HCLAEPNDMLI_OFFSET UNITYSDK_OFFSET(0x1CEB61D0)
#define POHKPIHNLEC_IJECEILNONH_OFFSET UNITYSDK_OFFSET(0x1CEB5F80)
#define POHKPIHNLEC_ILAKOAKHOAP_OFFSET UNITYSDK_OFFSET(0x1CE83950)
#define POHKPIHNLEC_LAEFNCHCFIA_OFFSET UNITYSDK_OFFSET(0x1CE82B90)
#define POHKPIHNLEC_LPIHLGDFDPA_OFFSET UNITYSDK_OFFSET(0x1CE84230)
#define POHKPIHNLEC_MJNMFMEFCAO_OFFSET UNITYSDK_OFFSET(0x1CE82B00)
#define POHKPIHNLEC_MMGAGFCKEMF_1_OFFSET UNITYSDK_OFFSET(0x1CE85310)
#define POHKPIHNLEC_NEJJIHLDJGK_OFFSET UNITYSDK_OFFSET(0x1CEB5E50)
#define POHKPIHNLEC_OBFPIDJGMIB_OFFSET UNITYSDK_OFFSET(0x1CEB6110)
#define POHKPIHNLEC_PGPDCAJPMOA_OFFSET UNITYSDK_OFFSET(0x1CEB61C0)
#define POHKPIHNLEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB5F60)
#define POHKPIHNLEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE810D0)

inline static constexpr unsigned int POHKPIHNLEC_TypeDefinitionIndex = 34707;

class POHKPIHNLEC : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_BDONPMHIFDB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(POHKPIHNLEC_TypeDefinitionIndex)->GetStaticField(0x89C0);
	}
	static ::System::Boolean* StaticGet_CJPHOBLOPME()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(POHKPIHNLEC_TypeDefinitionIndex)->GetStaticField(0x89C1);
	}
	static ::AHLIFAAOPDG* StaticGet_MLOHNHLGEGF()
	{
		return (::AHLIFAAOPDG*)Il2CppClass::FromTypeDefinitionIndex(POHKPIHNLEC_TypeDefinitionIndex)->GetStaticField(0x89C4);
	}
	::GAAHPPHMFDO* LKHCIIJMOAF; // 0x10
	::AAPNJPIICDO* FCFBICBPMKE; // 0x18
	::AAPNJPIICDO* HKDCAMGBPJI; // 0x20
	::System::Boolean EOJEABJDOMC; // 0x28
	::System::Byte _padding0[0x3];
	::AHLIFAAOPDG PEHMMECLOJJ; // 0x2C

	::System::Void _ctor(::GAAHPPHMFDO* BGJOPBCCMOC, ::AAPNJPIICDO* MEMNJDKCMFO, ::AAPNJPIICDO* EBBAACLEHOM)
	{
		return ((::System::Void(*)(::PVOID, ::GAAHPPHMFDO*, ::AAPNJPIICDO*, ::AAPNJPIICDO*))((::PBYTE)hIl2Cpp + POHKPIHNLEC__CTOR_OFFSET))(this, BGJOPBCCMOC, MEMNJDKCMFO, EBBAACLEHOM);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POHKPIHNLEC__CCTOR_OFFSET))();
	}

	::System::Void FAJLALLMOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_FAJLALLMOOD_OFFSET))(this);
	}

	::System::Boolean LAEFNCHCFIA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_LAEFNCHCFIA_OFFSET))(this);
	}

	::System::Void IJECEILNONH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_IJECEILNONH_OFFSET))(this);
	}

	::System::Boolean OBFPIDJGMIB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_OBFPIDJGMIB_OFFSET))(this);
	}

	::AHLIFAAOPDG PGPDCAJPMOA()
	{
		return ((::AHLIFAAOPDG(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_PGPDCAJPMOA_OFFSET))(this);
	}

	::System::Void APNKJBPLLDK(::AHLIFAAOPDG ELHBLKCKIMK)
	{
		return ((::System::Void(*)(::PVOID, ::AHLIFAAOPDG))((::PBYTE)hIl2Cpp + POHKPIHNLEC_APNKJBPLLDK_OFFSET))(this, ELHBLKCKIMK);
	}

	::System::Void CCAPBDCMHLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_CCAPBDCMHLO_OFFSET))(this);
	}

	::System::Boolean MJNMFMEFCAO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_MJNMFMEFCAO_OFFSET))(this);
	}

	::System::Void LPIHLGDFDPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_LPIHLGDFDPA_OFFSET))(this);
	}

	::System::Void DIIBJKANFIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_DIIBJKANFIM_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Boolean HCLAEPNDMLI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_HCLAEPNDMLI_OFFSET))(this);
	}

	::System::Boolean MMGAGFCKEMF_1(::System::Collections::IEnumerable* KGGJCGPMAIH, ::System::Collections::IEnumerable* BPEGDPLGFPO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + POHKPIHNLEC_MMGAGFCKEMF_1_OFFSET))(this, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Boolean NEJJIHLDJGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_NEJJIHLDJGK_OFFSET))(this);
	}

	::System::Void ILAKOAKHOAP(::AHLIFAAOPDG ELHBLKCKIMK)
	{
		return ((::System::Void(*)(::PVOID, ::AHLIFAAOPDG))((::PBYTE)hIl2Cpp + POHKPIHNLEC_ILAKOAKHOAP_OFFSET))(this, ELHBLKCKIMK);
	}

	::System::Boolean BOAPJBCOLDB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POHKPIHNLEC_BOAPJBCOLDB_OFFSET))(this);
	}

	::System::Void CIKEDGKFHLH(::AHLIFAAOPDG ELHBLKCKIMK)
	{
		return ((::System::Void(*)(::PVOID, ::AHLIFAAOPDG))((::PBYTE)hIl2Cpp + POHKPIHNLEC_CIKEDGKFHLH_OFFSET))(this, ELHBLKCKIMK);
	}
};
