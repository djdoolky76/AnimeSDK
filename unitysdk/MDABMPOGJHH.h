#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class BLCIDFMMHIL;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MDABMPOGJHH_CLHLBOPBDBJ_OFFSET UNITYSDK_OFFSET(0x11F357B0)
#define MDABMPOGJHH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11F34DB0)
#define MDABMPOGJHH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11F34CD0)
#define MDABMPOGJHH_GBPOHAGHFAL_OFFSET UNITYSDK_OFFSET(0x11F34ED0)
#define MDABMPOGJHH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11F35800)
#define MDABMPOGJHH__CTOR_OFFSET UNITYSDK_OFFSET(0x11F356C0)

inline static constexpr unsigned int MDABMPOGJHH_TypeDefinitionIndex = 73842;

class MDABMPOGJHH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* IPOJKLKHHMP; // 0x28
	::KCMIFNGABDC_1<::System::String*>* NCJOBBPFMNH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDABMPOGJHH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDABMPOGJHH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MDABMPOGJHH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::BLCIDFMMHIL* GBPOHAGHFAL(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::BLCIDFMMHIL*(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MDABMPOGJHH_GBPOHAGHFAL_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDABMPOGJHH_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void CLHLBOPBDBJ(::System::String* POLOCJJNLMD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MDABMPOGJHH_CLHLBOPBDBJ_OFFSET))(this, POLOCJJNLMD);
	}
};
