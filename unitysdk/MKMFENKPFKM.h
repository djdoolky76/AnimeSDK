#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/BuddyFightModeType.h"

class AGJFDPBLDDF;
namespace System { class Action; }

#define MKMFENKPFKM_ELCKEENAILK_OFFSET UNITYSDK_OFFSET(0x14DEFAF0)
#define MKMFENKPFKM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14DEF900)
#define MKMFENKPFKM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14DEFA70)
#define MKMFENKPFKM_JLMEGPMJLGM_OFFSET UNITYSDK_OFFSET(0x14DEFB40)
#define MKMFENKPFKM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14DEF9E0)
#define MKMFENKPFKM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14DEF840)
#define MKMFENKPFKM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DEF950)
#define MKMFENKPFKM__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEF9D0)

inline static constexpr unsigned int MKMFENKPFKM_TypeDefinitionIndex = 56197;

class MKMFENKPFKM : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xDF; // 0x0
	::System::Action* BBFKJPBDBJI; // 0x48
	::AGJFDPBLDDF* PPLBNIIJHBB; // 0x50
	::AGJFDPBLDDF* MKIPFDHJHHO; // 0x58
	::System::Action* KKJJLIMJDBA; // 0x60
	::MoleMole::Config::BuddyFightModeType CINEKABMNLE; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKMFENKPFKM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMFENKPFKM__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMFENKPFKM_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMFENKPFKM_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMFENKPFKM_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MKMFENKPFKM* JFDOOELFAOA()
	{
		return ((::MKMFENKPFKM*(*)())((::PBYTE)hIl2Cpp + MKMFENKPFKM_JFDOOELFAOA_OFFSET))();
	}

	::System::Void ELCKEENAILK(::MoleMole::Config::BuddyFightModeType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BuddyFightModeType))((::PBYTE)hIl2Cpp + MKMFENKPFKM_ELCKEENAILK_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::BuddyFightModeType JLMEGPMJLGM()
	{
		return ((::MoleMole::Config::BuddyFightModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMFENKPFKM_JLMEGPMJLGM_OFFSET))(this);
	}
};
