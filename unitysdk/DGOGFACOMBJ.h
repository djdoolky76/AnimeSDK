#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/FightModeType.h"

class AGJFDPBLDDF;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigSphereCollider; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define DGOGFACOMBJ_ECBMGMHHBAL_OFFSET UNITYSDK_OFFSET(0x15A466F0)
#define DGOGFACOMBJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15A46610)
#define DGOGFACOMBJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15A46910)
#define DGOGFACOMBJ_JJJNBCAMPFH_OFFSET UNITYSDK_OFFSET(0x15A46790)
#define DGOGFACOMBJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15A46700)
#define DGOGFACOMBJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15A46470)
#define DGOGFACOMBJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A46660)
#define DGOGFACOMBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15A466E0)

inline static constexpr unsigned int DGOGFACOMBJ_TypeDefinitionIndex = 72904;

class DGOGFACOMBJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::MoleMole::Config::FightModeType BKDBHJLBBNJ = 0x1; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x3A; // 0x0
	::MoleMole::MonoConfigurableCollider* FNIBFEJCEAK; // 0x48
	::System::Collections::Generic::HashSet_1<::System::UInt32>* KEIMHGKBIPO; // 0x50
	::System::Action* HCPMPPFKNGH; // 0x58
	::MoleMole::Config::ConfigSphereCollider* GNAEBLLIFMG; // 0x60
	::AGJFDPBLDDF* JFBFEGLAPGI; // 0x68
	::System::Action_1<::UnityEngine::Collider*>* DFFENHFLKKB; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* CIBPBOOBICI; // 0x78
	::AGJFDPBLDDF* PHMFABLNBDE; // 0x80
	::AGJFDPBLDDF* DPGEKIAJIDJ; // 0x88
	::System::Action* KIPNPKOCPAN; // 0x90
	::System::Action_1<::UnityEngine::Collider*>* GNGIADODBPG; // 0x98
	::AGJFDPBLDDF* PDCICBDGCIK; // 0xA0
	::MoleMole::Config::FightModeType JMBFGEFMMHD; // 0xA8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGOGFACOMBJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOGFACOMBJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOGFACOMBJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOGFACOMBJ_GETCLASSID_OFFSET))(this);
	}

	::MoleMole::Config::FightModeType ECBMGMHHBAL()
	{
		return ((::MoleMole::Config::FightModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOGFACOMBJ_ECBMGMHHBAL_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOGFACOMBJ_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void JJJNBCAMPFH(::MoleMole::Config::FightModeType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FightModeType))((::PBYTE)hIl2Cpp + DGOGFACOMBJ_JJJNBCAMPFH_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::DGOGFACOMBJ* JFDOOELFAOA()
	{
		return ((::DGOGFACOMBJ*(*)())((::PBYTE)hIl2Cpp + DGOGFACOMBJ_JFDOOELFAOA_OFFSET))();
	}
};
