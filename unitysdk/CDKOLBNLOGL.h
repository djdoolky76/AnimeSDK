#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CDKOLBNLOGL_DFLCFJCOPHL_OFFSET UNITYSDK_OFFSET(0x168637C0)
#define CDKOLBNLOGL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16863750)
#define CDKOLBNLOGL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16863430)
#define CDKOLBNLOGL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16864670)
#define CDKOLBNLOGL__CTOR_OFFSET UNITYSDK_OFFSET(0x16864430)

inline static constexpr unsigned int CDKOLBNLOGL_TypeDefinitionIndex = 89087;

class CDKOLBNLOGL : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* OLBCFEPBDKL; // 0x18
	::KCMIFNGABDC_1<::System::Single>* DPCPPAFGCPJ; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* LCCPPDBEELG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* JCACKMABDMN; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* FNKLDCOOEKN; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* GBENMOEPDCI; // 0x48
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKOLBNLOGL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKOLBNLOGL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CDKOLBNLOGL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKOLBNLOGL_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void DFLCFJCOPHL(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CDKOLBNLOGL_DFLCFJCOPHL_OFFSET))(this, BKBGPKNGNMF);
	}
};
