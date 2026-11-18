#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CDILMBABHHJ;
class LGAFMFNMCOG;
namespace MoleMole::Config { class ConfigDynamicValueString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define EGAJKCDDDAE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1722E150)
#define EGAJKCDDDAE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1722DDC0)
#define EGAJKCDDDAE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1722F860)
#define EGAJKCDDDAE_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x1722F7D0)
#define EGAJKCDDDAE_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x1722DAF0)
#define EGAJKCDDDAE_MOLMEJFGBLG_OFFSET UNITYSDK_OFFSET(0x1722F370)
#define EGAJKCDDDAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1722F400)

inline static constexpr unsigned int EGAJKCDDDAE_TypeDefinitionIndex = 90950;

class EGAJKCDDDAE : public ::MHMFINLCNFN
{
public:
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* CDLDOCBNODE; // 0x28
	::CDILMBABHHJ* KDOIHCNOKIG; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* JAOGGPNEIPI; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JPOGHHJFKJG; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* CCOGEOPOOKN; // 0x48
	::KCMIFNGABDC_1<::System::Single>* JLLKNGOIOEO; // 0x50
	::KCMIFNGABDC_1<::System::Int32>* DPGJCKAIADP; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JNAJJIAJIEM; // 0x60
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* BAGIKECJIFP; // 0x68
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* LILEMKBNHMK; // 0x70
	::KCMIFNGABDC_1<::System::Single>* JPHKFOAEMHF; // 0x78
	::MoleMole::Config::ConfigDynamicValueString* LLBOMPKGAIE; // 0x80
	::KCMIFNGABDC_1<::System::Boolean>* NDBHJILJKLN; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAJKCDDDAE__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 MOLMEJFGBLG(::System::Int32 MBOBEIJGABG, ::System::Int32 DGMEEKJAGOM, ::System::Int32 FDJBPHOIGKK)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_MOLMEJFGBLG_OFFSET))(this, MBOBEIJGABG, DGMEEKJAGOM, FDJBPHOIGKK);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_GDEOPIBNOIN_OFFSET))(this);
	}
};
