#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define KFDICIKMNHB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xD3F2630)
#define KFDICIKMNHB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xD3F2310)
#define KFDICIKMNHB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xD3F2D50)
#define KFDICIKMNHB__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F2AD0)

inline static constexpr unsigned int KFDICIKMNHB_TypeDefinitionIndex = 81606;

class KFDICIKMNHB : public ::CGJEMKCKIJG
{
public:
	// static const ::System::String* NKKEPNGGIIM; // 0x0
	// static const ::System::String* NMFJEEOANFO; // 0x0
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* ECLOEMJNKNM; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* DCDFHBCOIEM; // 0x28
	::KCMIFNGABDC_1<::System::String*>* ENMEIJPEPDB; // 0x30
	::KCMIFNGABDC_1<::System::String*>* IDMKDFMOKNC; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* MNFGALDIPCJ; // 0x40
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x48
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDICIKMNHB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDICIKMNHB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KFDICIKMNHB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDICIKMNHB_GDEOPIBNOIN_OFFSET))(this);
	}
};
