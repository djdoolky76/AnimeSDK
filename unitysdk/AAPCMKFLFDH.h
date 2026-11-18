#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define AAPCMKFLFDH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14336580)
#define AAPCMKFLFDH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x143363D0)
#define AAPCMKFLFDH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14336EB0)
#define AAPCMKFLFDH__CTOR_OFFSET UNITYSDK_OFFSET(0x14336CE0)

inline static constexpr unsigned int AAPCMKFLFDH_TypeDefinitionIndex = 70235;

class AAPCMKFLFDH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* HHGILNNMNAK; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x38
	::CPABOPKIGAL* BOHNBOELHDG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCMKFLFDH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCMKFLFDH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AAPCMKFLFDH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCMKFLFDH_GDEOPIBNOIN_OFFSET))(this);
	}
};
