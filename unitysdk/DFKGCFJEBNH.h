#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define DFKGCFJEBNH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18336490)
#define DFKGCFJEBNH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18336230)
#define DFKGCFJEBNH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x183368C0)
#define DFKGCFJEBNH__CTOR_OFFSET UNITYSDK_OFFSET(0x18336700)

inline static constexpr unsigned int DFKGCFJEBNH_TypeDefinitionIndex = 61934;

class DFKGCFJEBNH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* EJHKMNKMMMM; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* EPJPCBPOPCN; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28
	::CPABOPKIGAL* MMFNFINOFPN; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* ONLCALPKIMF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKGCFJEBNH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKGCFJEBNH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DFKGCFJEBNH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKGCFJEBNH_GDEOPIBNOIN_OFFSET))(this);
	}
};
