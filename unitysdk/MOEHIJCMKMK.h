#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFDAMBNHMFN.h"

class EHJOEHBIMJG_MFFHHFPCAOA;
namespace Foundation::Unreal { class FGameplayTagQuery; }

#define MOEHIJCMKMK_ADGCPPFAPIA_OFFSET UNITYSDK_OFFSET(0x11A2A010)
#define MOEHIJCMKMK_LNIINGEMJNO_OFFSET UNITYSDK_OFFSET(0x11A2A0D0)
#define MOEHIJCMKMK__CTOR_OFFSET UNITYSDK_OFFSET(0x11A2A000)

inline static constexpr unsigned int MOEHIJCMKMK_TypeDefinitionIndex = 52203;

class MOEHIJCMKMK : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTagQuery* DCJMPEILALM; // 0x10
	::Foundation::Unreal::FGameplayTagQuery* BMPDKEGBIAF; // 0x18

	::System::Void _ctor(::Foundation::Unreal::FGameplayTagQuery* NDIDPNFLCCN, ::Foundation::Unreal::FGameplayTagQuery* MALHIPKKNFG)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagQuery*, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + MOEHIJCMKMK__CTOR_OFFSET))(this, NDIDPNFLCCN, MALHIPKKNFG);
	}

	::System::Boolean ADGCPPFAPIA(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& PCKHKPFPKAB, ::EHJOEHBIMJG_MFFHHFPCAOA* CEPMNLOPKDF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*))((::PBYTE)hIl2Cpp + MOEHIJCMKMK_ADGCPPFAPIA_OFFSET))(this, BNPHMKKOOAE, PCKHKPFPKAB, CEPMNLOPKDF);
	}

	::System::Boolean LNIINGEMJNO(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& PCKHKPFPKAB, ::EHJOEHBIMJG_MFFHHFPCAOA* CEPMNLOPKDF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*))((::PBYTE)hIl2Cpp + MOEHIJCMKMK_LNIINGEMJNO_OFFSET))(this, BNPHMKKOOAE, PCKHKPFPKAB, CEPMNLOPKDF);
	}
};
