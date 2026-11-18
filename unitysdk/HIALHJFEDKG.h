#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HIALHJFEDKG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1101C710)
#define HIALHJFEDKG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1101C500)
#define HIALHJFEDKG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1101D3F0)
#define HIALHJFEDKG_LNFDIMKBOMN_OFFSET UNITYSDK_OFFSET(0x1101CFD0)
#define HIALHJFEDKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1101D250)

inline static constexpr unsigned int HIALHJFEDKG_TypeDefinitionIndex = 78890;

class HIALHJFEDKG : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* CIPEPBLBGJG; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* HPNBNMPCBOM; // 0x38
	::AAMKEDEDHPD_1<::System::Boolean>* HHGILNNMNAK; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* JMAGAOIAHNN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIALHJFEDKG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIALHJFEDKG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HIALHJFEDKG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Void LNFDIMKBOMN(::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::System::Void(*)(::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + HIALHJFEDKG_LNFDIMKBOMN_OFFSET))(MKCOMJHINNJ);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIALHJFEDKG_GDEOPIBNOIN_OFFSET))(this);
	}
};
