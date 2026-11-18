#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HDAGICFMMJP;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define AFNKIOKHIHP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1439B4C0)
#define AFNKIOKHIHP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1439B0F0)
#define AFNKIOKHIHP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1439C270)
#define AFNKIOKHIHP_JDFPKIKFPLG_OFFSET UNITYSDK_OFFSET(0x1439C390)
#define AFNKIOKHIHP_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x1439C300)
#define AFNKIOKHIHP_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x1439AFA0)
#define AFNKIOKHIHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1439BEC0)

inline static constexpr unsigned int AFNKIOKHIHP_TypeDefinitionIndex = 79095;

class AFNKIOKHIHP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* PKKLIFFIMMB; // 0x20
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* MJHNLHBMMDN; // 0x28
	::MKBBPOFGLOF* JAIGFKHCMPE; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* FMDCCMLPJDM; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* LFPCKGNFIME; // 0x40
	::CPABOPKIGAL* CJNEMGNJIEI; // 0x48
	::CPABOPKIGAL* MMFNFINOFPN; // 0x50
	::MKBBPOFGLOF* DGLPCINAMAC; // 0x58
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* JLACDANBCAN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNKIOKHIHP__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean JDFPKIKFPLG(::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>* AFDHMLPNABC, ::HDAGICFMMJP* PLCALBLENED)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>*, ::HDAGICFMMJP*))((::PBYTE)hIl2Cpp + AFNKIOKHIHP_JDFPKIKFPLG_OFFSET))(AFDHMLPNABC, PLCALBLENED);
	}
};
