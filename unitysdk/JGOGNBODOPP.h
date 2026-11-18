#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define JGOGNBODOPP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x152627E0)
#define JGOGNBODOPP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x152628C0)
#define JGOGNBODOPP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15262940)
#define JGOGNBODOPP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x152627A0)
#define JGOGNBODOPP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15262830)
#define JGOGNBODOPP__CTOR_OFFSET UNITYSDK_OFFSET(0x152628B0)

inline static constexpr unsigned int JGOGNBODOPP_TypeDefinitionIndex = 80349;

class JGOGNBODOPP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x39; // 0x0
	::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* GAGGDCJGPCN; // 0x48
	::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* CLCKPCMLOAP; // 0x50
	::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* CNDCBDLBPJC; // 0x58
	::System::Action_1<::MoleMole::Battle::Entity*>* NJENDLHPLLA; // 0x60
	::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* HJCLFLNLHOB; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGOGNBODOPP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOGNBODOPP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOGNBODOPP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOGNBODOPP_GETCLASSID_OFFSET))(this);
	}

	static ::JGOGNBODOPP* JFDOOELFAOA()
	{
		return ((::JGOGNBODOPP*(*)())((::PBYTE)hIl2Cpp + JGOGNBODOPP_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGOGNBODOPP_MEFBHFEOKGH_OFFSET))(this);
	}
};
