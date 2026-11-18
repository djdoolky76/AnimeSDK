#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class LGAFMFNMCOG;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class HackObjectTrait; }
template <typename T> class KCMIFNGABDC_1;

#define MAJPFJGJGMK_BCPGBBOMLGA_OFFSET UNITYSDK_OFFSET(0x1568E330)
#define MAJPFJGJGMK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1568DEE0)
#define MAJPFJGJGMK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1568DD90)
#define MAJPFJGJGMK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1568EC10)
#define MAJPFJGJGMK_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x1568EB80)
#define MAJPFJGJGMK_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x1568DC40)
#define MAJPFJGJGMK_NIPCOKDGCOO_OFFSET UNITYSDK_OFFSET(0x1568E960)
#define MAJPFJGJGMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1568E810)

inline static constexpr unsigned int MAJPFJGJGMK_TypeDefinitionIndex = 67963;

class MAJPFJGJGMK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* JBABKBDDLOI; // 0x28
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJPFJGJGMK__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + MAJPFJGJGMK_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJPFJGJGMK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MAJPFJGJGMK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::MoleMole::Config::HackObjectTrait* NIPCOKDGCOO(::MoleMole::Battle::Entity* FFHNMDNPGMC)
	{
		return ((::MoleMole::Config::HackObjectTrait*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MAJPFJGJGMK_NIPCOKDGCOO_OFFSET))(FFHNMDNPGMC);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + MAJPFJGJGMK_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJPFJGJGMK_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void BCPGBBOMLGA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MAJPFJGJGMK_BCPGBBOMLGA_OFFSET))(this, BKBGPKNGNMF);
	}
};
