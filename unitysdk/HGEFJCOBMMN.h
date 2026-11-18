#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MPJKPJAIOEM;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HGEFJCOBMMN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16CEEFB0)
#define HGEFJCOBMMN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16CEEE00)
#define HGEFJCOBMMN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16CEF4B0)
#define HGEFJCOBMMN__CTOR_OFFSET UNITYSDK_OFFSET(0x16CEF380)

inline static constexpr unsigned int HGEFJCOBMMN_TypeDefinitionIndex = 76352;

class HGEFJCOBMMN : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* ELEMEAGFJIF; // 0x18
	::KCMIFNGABDC_1<::System::String*>* CDAJBBJCABG; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::MPJKPJAIOEM* IDHECOGLAJJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEFJCOBMMN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEFJCOBMMN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HGEFJCOBMMN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEFJCOBMMN_GDEOPIBNOIN_OFFSET))(this);
	}
};
