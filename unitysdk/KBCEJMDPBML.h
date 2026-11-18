#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/PLGEFGFNJAD.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OAMAMDGEJKH;
namespace MoleMole::Battle { class Entity; }

#define KBCEJMDPBML_DAOIHDHEFJL_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define KBCEJMDPBML_EMNALEAGFHI_OFFSET UNITYSDK_OFFSET(0x5D0520)
#define KBCEJMDPBML_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x784820)
#define KBCEJMDPBML_IBAOCOGCGAH_OFFSET UNITYSDK_OFFSET(0x40C7D0)
#define KBCEJMDPBML_IBNCFMCGHFC_OFFSET UNITYSDK_OFFSET(0x282350)
#define KBCEJMDPBML_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x784700)
#define KBCEJMDPBML_JAOGCKNPLKC_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define KBCEJMDPBML_KNBOLFKIGAF_OFFSET UNITYSDK_OFFSET(0x363D60)
#define KBCEJMDPBML_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x7847E0)
#define KBCEJMDPBML_OEILMHOEDEB_OFFSET UNITYSDK_OFFSET(0x784740)
#define KBCEJMDPBML__CCTOR_OFFSET UNITYSDK_OFFSET(0x1632BBE0)
#define KBCEJMDPBML__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7846A0)
#define KBCEJMDPBML__CTOR_2_OFFSET UNITYSDK_OFFSET(0x7846B0)
#define KBCEJMDPBML__CTOR_3_OFFSET UNITYSDK_OFFSET(0x7846F0)
#define KBCEJMDPBML__CTOR_OFFSET UNITYSDK_OFFSET(0x784680)

inline static constexpr unsigned int KBCEJMDPBML_TypeDefinitionIndex = 83098;

struct alignas(8) KBCEJMDPBML
{
	static ::KBCEJMDPBML* StaticGet_JLCAFBEAEDA()
	{
		return (::KBCEJMDPBML*)Il2CppClass::FromTypeDefinitionIndex(KBCEJMDPBML_TypeDefinitionIndex)->GetStaticField(0x48270);
	}
	::MoleMole::Battle::Entity* LDLMPHEEKBG; // 0x10
	::System::Int32 EKFAHDOOMAP; // 0x18
	::System::Int32 CMFMDDBMALB; // 0x1C
	::System::Boolean MMHNDIKDCHL; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* BFDPPMDEOFF, ::System::Int32 GDCEOHBJPGO, ::System::Int32 FODMKCNOMMO, ::System::Boolean NBOEENJLNFK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KBCEJMDPBML__CTOR_OFFSET))(this, BFDPPMDEOFF, GDCEOHBJPGO, FODMKCNOMMO, NBOEENJLNFK);
	}

	::System::Void _ctor_1(::OAMAMDGEJKH* FDFGNNAJLDN)
	{
		return ((::System::Void(*)(::PVOID, ::OAMAMDGEJKH*))((::PBYTE)hIl2Cpp + KBCEJMDPBML__CTOR_1_OFFSET))(this, FDFGNNAJLDN);
	}

	::System::Void _ctor_2(::MGHNAPKHBOG JKHNAGBKCOD)
	{
		return ((::System::Void(*)(::PVOID, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + KBCEJMDPBML__CTOR_2_OFFSET))(this, JKHNAGBKCOD);
	}

	::System::Void _ctor_3(::MoleMole::Battle::Entity* BFDPPMDEOFF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KBCEJMDPBML__CTOR_3_OFFSET))(this, BFDPPMDEOFF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBCEJMDPBML__CCTOR_OFFSET))();
	}

	::UnityEngine::Quaternion INMGLPLEEIK(::PLGEFGFNJAD AAINIBDIOGP)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::PLGEFGFNJAD))((::PBYTE)hIl2Cpp + KBCEJMDPBML_INMGLPLEEIK_OFFSET))(this, AAINIBDIOGP);
	}

	::System::Boolean OEILMHOEDEB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCEJMDPBML_OEILMHOEDEB_OFFSET))(this);
	}

	::System::Int32 JAOGCKNPLKC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCEJMDPBML_JAOGCKNPLKC_OFFSET))(this);
	}

	::System::Boolean IBAOCOGCGAH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCEJMDPBML_IBAOCOGCGAH_OFFSET))(this);
	}

	::UnityEngine::Vector3 LBCBPEJEHNB(::PLGEFGFNJAD AAINIBDIOGP)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::PLGEFGFNJAD))((::PBYTE)hIl2Cpp + KBCEJMDPBML_LBCBPEJEHNB_OFFSET))(this, AAINIBDIOGP);
	}

	::MoleMole::Battle::Entity* IBNCFMCGHFC()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCEJMDPBML_IBNCFMCGHFC_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCEJMDPBML_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void EMNALEAGFHI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBCEJMDPBML_EMNALEAGFHI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DAOIHDHEFJL(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBCEJMDPBML_DAOIHDHEFJL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KNBOLFKIGAF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCEJMDPBML_KNBOLFKIGAF_OFFSET))(this);
	}
};
