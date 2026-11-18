#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPHCMONINBH.h"
#include "unitysdk/LPHCMONINBH_PCBAFNPNEGI.h"
#include "unitysdk/EKLMJGLFFED.h"
#include "unitysdk/FBJMBBHJJNP_PPIHMJJGNCK.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PFMILGFHOEM;
namespace MoleMole::Config { class ConfigHollowCameraDrag; }

#define FBJMBBHJJNP_BJBAPNOKPOB_OFFSET UNITYSDK_OFFSET(0x11CF00C0)
#define FBJMBBHJJNP_DGKAJGELFII_OFFSET UNITYSDK_OFFSET(0x11CF0060)
#define FBJMBBHJJNP_IMKFHOHPIFF_OFFSET UNITYSDK_OFFSET(0x11CEFF00)
#define FBJMBBHJJNP_KAMPCJCPPMN_OFFSET UNITYSDK_OFFSET(0x11CF03B0)
#define FBJMBBHJJNP_LHCDAHFNOHH_OFFSET UNITYSDK_OFFSET(0x11CF0350)
#define FBJMBBHJJNP_LNFFPAGOEMM_OFFSET UNITYSDK_OFFSET(0x11CEFE80)
#define FBJMBBHJJNP_NEDFCEGCNBN_OFFSET UNITYSDK_OFFSET(0x11CEFE70)
#define FBJMBBHJJNP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11CEFE90)
#define FBJMBBHJJNP__CTOR_OFFSET UNITYSDK_OFFSET(0x11CF0340)

inline static constexpr unsigned int FBJMBBHJJNP_TypeDefinitionIndex = 88378;

class FBJMBBHJJNP : public ::LPHCMONINBH
{
public:
	::MoleMole::Config::ConfigHollowCameraDrag* IKAJJLGMNEB; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMBBHJJNP__CTOR_OFFSET))(this);
	}

	::LPHCMONINBH_PCBAFNPNEGI NEDFCEGCNBN()
	{
		return ((::LPHCMONINBH_PCBAFNPNEGI(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMBBHJJNP_NEDFCEGCNBN_OFFSET))(this);
	}

	::System::Boolean LNFFPAGOEMM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMBBHJJNP_LNFFPAGOEMM_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + FBJMBBHJJNP_OJENCMOGDKL_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::PFMILGFHOEM* IMKFHOHPIFF(::MoleMole::UICameraAtom GFCABMLNGDK, ::MoleMole::UICameraAtom HFAMGAICNHP)
	{
		return ((::PFMILGFHOEM*(*)(::PVOID, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + FBJMBBHJJNP_IMKFHOHPIFF_OFFSET))(this, GFCABMLNGDK, HFAMGAICNHP);
	}

	::System::Boolean BJBAPNOKPOB(::System::Single PMNLNNGEIFM, ::System::Single PENCLEDOJLL, ::MoleMole::UICameraAtom HFAMGAICNHP, ::MoleMole::UICameraAtom AIGOOKNCCNH, ::EKLMJGLFFED& AJMCCOEAIFE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::EKLMJGLFFED&))((::PBYTE)hIl2Cpp + FBJMBBHJJNP_BJBAPNOKPOB_OFFSET))(this, PMNLNNGEIFM, PENCLEDOJLL, HFAMGAICNHP, AIGOOKNCCNH, AJMCCOEAIFE);
	}

	::System::Void DGKAJGELFII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJMBBHJJNP_DGKAJGELFII_OFFSET))(this);
	}

	::System::Boolean LHCDAHFNOHH(::System::Single MIALFKCCCPI, ::System::Single KMGKAIDEIBA, ::MoleMole::UICameraAtom FDHMCIFPNCK, ::MoleMole::UICameraAtom MPBJAGIKPJM, ::EKLMJGLFFED& DDMDINPGCFI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom, ::MoleMole::UICameraAtom, ::EKLMJGLFFED&))((::PBYTE)hIl2Cpp + FBJMBBHJJNP_LHCDAHFNOHH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI);
	}

	static ::UnityEngine::Vector3 KAMPCJCPPMN(::FBJMBBHJJNP_PPIHMJJGNCK NMHJGEMJNHN)
	{
		return ((::UnityEngine::Vector3(*)(::FBJMBBHJJNP_PPIHMJJGNCK))((::PBYTE)hIl2Cpp + FBJMBBHJJNP_KAMPCJCPPMN_OFFSET))(NMHJGEMJNHN);
	}
};
