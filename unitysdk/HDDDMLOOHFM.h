#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HDDDMLOOHFM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x149FE240)
#define HDDDMLOOHFM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x149FDFE0)
#define HDDDMLOOHFM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x149FEA70)
#define HDDDMLOOHFM__CTOR_OFFSET UNITYSDK_OFFSET(0x149FE8B0)

inline static constexpr unsigned int HDDDMLOOHFM_TypeDefinitionIndex = 62406;

class HDDDMLOOHFM : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* NHKNILFDKGG; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* LFDPDKIDPAK; // 0x20
	::KCMIFNGABDC_1<::System::String*>* MNLEAPLFGIB; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30
	::KCMIFNGABDC_1<::System::Single>* KKJKPJEGKJC; // 0x38
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDDMLOOHFM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDDMLOOHFM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HDDDMLOOHFM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDDMLOOHFM_GDEOPIBNOIN_OFFSET))(this);
	}
};
