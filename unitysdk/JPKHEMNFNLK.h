#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/BuddyBehaviourType.h"
#include "unitysdk/MoleMole/Config/BuddyTeamType.h"
#include "unitysdk/NMICPPGOBJH.h"

class AGJFDPBLDDF;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPKHEMNFNLK_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x152B7780)
#define JPKHEMNFNLK_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x152B7360)
#define JPKHEMNFNLK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x152B76A0)
#define JPKHEMNFNLK_KHDMABGKDIB_OFFSET UNITYSDK_OFFSET(0x152B7720)
#define JPKHEMNFNLK_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x152B7AB0)
#define JPKHEMNFNLK_NININOKJNGN_OFFSET UNITYSDK_OFFSET(0x152B7A50)
#define JPKHEMNFNLK_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x152B6DB0)
#define JPKHEMNFNLK__CCTOR_OFFSET UNITYSDK_OFFSET(0x152B73B0)
#define JPKHEMNFNLK__CTOR_OFFSET UNITYSDK_OFFSET(0x152B7430)

inline static constexpr unsigned int JPKHEMNFNLK_TypeDefinitionIndex = 39425;

class JPKHEMNFNLK : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x9C; // 0x0
	::System::Collections::Generic::Dictionary_2<::NMICPPGOBJH, ::MoleMole::Config::BuddyBehaviourType>* HHAHPLLOLBB; // 0x48
	::AGJFDPBLDDF* GAEOFOLPNFB; // 0x50
	::MoleMole::Config::ConfigPosRot* HHMIIHINOOI; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* NMAFIHCOJGF; // 0x60
	::System::Collections::Generic::Dictionary_2<::NMICPPGOBJH, ::System::Boolean>* NLMPLMIDIPG; // 0x68
	::MoleMole::Battle::AnimatorParamControl* DBFONPGCMEP; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OLOMOJDHKMM; // 0x78
	::MoleMole::Battle::AnimatorParamControl* FIFNEJMNCHL; // 0x80
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuddyTeamType, ::System::Collections::Generic::HashSet_1<::System::String*>*>* GGGCPHAAEDI; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* HBHMCAHKKAE; // 0x90
	::System::Action_2<::NMICPPGOBJH, ::System::Boolean>* MDHCJBLPMOD; // 0x98
	::System::Collections::Generic::Dictionary_2<::NMICPPGOBJH, ::System::Collections::Generic::List_1<::MoleMole::Config::BuddyBehaviourType>*>* MBDFOEEKIJE; // 0xA0
	::System::Action_2<::NMICPPGOBJH, ::MoleMole::Config::BuddyBehaviourType>* LMEINFDIMML; // 0xA8
	::System::Collections::Generic::Dictionary_2<::NMICPPGOBJH, ::System::Boolean>* HOAIIOBBBEK; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* IEEGNJAKGPD; // 0xB8
	::System::Boolean IPIGLGLJKKO; // 0xC0
	::System::Boolean EJPGLGOFMLO; // 0xC1
	::System::Boolean HBNJNGFLAND; // 0xC2
	::System::Boolean IIEHFBIMDBH; // 0xC3
	::System::Int32 GLDEGHHBBAB; // 0xC4
	::System::Single OAHIHPLLFEK; // 0xC8
	::System::Single PBBMGMDJEKN; // 0xCC
	::System::Boolean PBMLALFMDGO; // 0xD0
	::System::Boolean CDHKCFKKOKP; // 0xD1
	::System::Boolean KDFHDJPACIM; // 0xD2
	::System::Boolean MCEOEEILLIB; // 0xD3
	::System::Int32 LICOCKMAGCF; // 0xD4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPKHEMNFNLK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKHEMNFNLK__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKHEMNFNLK_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKHEMNFNLK_GETCLASSID_OFFSET))(this);
	}

	static ::JPKHEMNFNLK* JFDOOELFAOA()
	{
		return ((::JPKHEMNFNLK*(*)())((::PBYTE)hIl2Cpp + JPKHEMNFNLK_JFDOOELFAOA_OFFSET))();
	}

	::System::Single KHDMABGKDIB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKHEMNFNLK_KHDMABGKDIB_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKHEMNFNLK_GALGFCPKMGC_OFFSET))(this);
	}

	::System::Single NININOKJNGN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKHEMNFNLK_NININOKJNGN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKHEMNFNLK_MEFBHFEOKGH_OFFSET))(this);
	}
};
