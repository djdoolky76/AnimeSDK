#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CABCCMNPEOI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1398E260)
#define CABCCMNPEOI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1398E000)
#define CABCCMNPEOI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1398EEC0)
#define CABCCMNPEOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1398ECC0)

inline static constexpr unsigned int CABCCMNPEOI_TypeDefinitionIndex = 45160;

class CABCCMNPEOI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* FNOOFNKKABC; // 0x18
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* HPEFMJFCIHN; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HHMPFIANODF; // 0x30
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x38
	::CPABOPKIGAL* MMFNFINOFPN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCCMNPEOI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCCMNPEOI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CABCCMNPEOI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCCMNPEOI_GDEOPIBNOIN_OFFSET))(this);
	}
};
