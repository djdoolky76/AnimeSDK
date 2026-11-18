#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define GGLMIJGJAAO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x189FD8F0)
#define GGLMIJGJAAO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x189FD740)
#define GGLMIJGJAAO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x189FDB90)
#define GGLMIJGJAAO__CTOR_OFFSET UNITYSDK_OFFSET(0x189FDA50)

inline static constexpr unsigned int GGLMIJGJAAO_TypeDefinitionIndex = 69368;

class GGLMIJGJAAO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* NNNPLPPOCCA; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* CIFLENFEEGN; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLMIJGJAAO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLMIJGJAAO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GGLMIJGJAAO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLMIJGJAAO_GDEOPIBNOIN_OFFSET))(this);
	}
};
