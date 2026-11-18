#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define FHODABCKNKP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xBB43820)
#define FHODABCKNKP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xBB432C0)
#define FHODABCKNKP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xBB44A10)
#define FHODABCKNKP__CTOR_OFFSET UNITYSDK_OFFSET(0xBB44520)

inline static constexpr unsigned int FHODABCKNKP_TypeDefinitionIndex = 64744;

class FHODABCKNKP : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* CJNEMGNJIEI; // 0x28
	::MKBBPOFGLOF* EKJHPHAOJIK; // 0x30
	::KCMIFNGABDC_1<::System::String*>* DNFFIPIIELL; // 0x38
	::KCMIFNGABDC_1<::System::String*>* EIKNCIBGGKC; // 0x40
	::CPABOPKIGAL* AKEEFCJLMKE; // 0x48
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* HCDMGOIIDDK; // 0x50
	::CPABOPKIGAL* FOBFLADNKBO; // 0x58
	::KCMIFNGABDC_1<::System::Int32>* BOBHGKFBPOE; // 0x60
	::CPABOPKIGAL* MMFNFINOFPN; // 0x68
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x70
	::KCMIFNGABDC_1<::System::String*>* PEDEPBBEOIP; // 0x78
	::KCMIFNGABDC_1<::System::Int32>* BIDMKDLMMDH; // 0x80
	::KCMIFNGABDC_1<::System::Boolean>* NFOEIKLFKDL; // 0x88
	::MKBBPOFGLOF* IDLODOCOAKN; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHODABCKNKP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHODABCKNKP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FHODABCKNKP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHODABCKNKP_GDEOPIBNOIN_OFFSET))(this);
	}
};
