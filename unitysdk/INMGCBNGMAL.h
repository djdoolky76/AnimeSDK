#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define INMGCBNGMAL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13C9ED60)
#define INMGCBNGMAL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13C9EA40)
#define INMGCBNGMAL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13C9F6C0)
#define INMGCBNGMAL__CTOR_OFFSET UNITYSDK_OFFSET(0x13C9F400)

inline static constexpr unsigned int INMGCBNGMAL_TypeDefinitionIndex = 40784;

class INMGCBNGMAL : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* DGLPCINAMAC; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* HHGILNNMNAK; // 0x30
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x40
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x48
	::KCMIFNGABDC_1<::System::Int32>* CEJENBBHBBG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMGCBNGMAL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMGCBNGMAL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + INMGCBNGMAL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INMGCBNGMAL_GDEOPIBNOIN_OFFSET))(this);
	}
};
