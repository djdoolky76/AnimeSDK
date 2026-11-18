#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOENNHPFJNL.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class GPKMJNCHPLG;
class ICDHAIENCLC;
class JGDPHEKIFKD;
class JGGKPOJFCKN;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AttackPatternMorphBase; }

#define BAAPFFNJAPN_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0xF7840E0)
#define BAAPFFNJAPN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF783E40)
#define BAAPFFNJAPN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xF783F80)
#define BAAPFFNJAPN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xF784050)
#define BAAPFFNJAPN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF783D00)
#define BAAPFFNJAPN__CCTOR_OFFSET UNITYSDK_OFFSET(0xF783E90)
#define BAAPFFNJAPN__CTOR_OFFSET UNITYSDK_OFFSET(0xF783F10)

inline static constexpr unsigned int BAAPFFNJAPN_TypeDefinitionIndex = 62591;

class BAAPFFNJAPN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xB; // 0x0
	::GPKMJNCHPLG* BEDECOAIEMO; // 0x48
	::MoleMole::Battle::Entity* MFMPICKHAMJ; // 0x50
	::ICDHAIENCLC* NOGBDIMMPJI; // 0x58
	::JGDPHEKIFKD* NECJHNLHBJJ; // 0x60
	::JGGKPOJFCKN* MBMLHGFFHNC; // 0x68
	::MoleMole::Config::AttackPatternMorphBase* EOMFGEGBOHE; // 0x70
	::System::Single MDPPNMIPDMP; // 0x78
	::LOENNHPFJNL MEFOCKANMPK; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAAPFFNJAPN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAPFFNJAPN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAPFFNJAPN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAPFFNJAPN_GETCLASSID_OFFSET))(this);
	}

	static ::BAAPFFNJAPN* JFDOOELFAOA()
	{
		return ((::BAAPFFNJAPN*(*)())((::PBYTE)hIl2Cpp + BAAPFFNJAPN_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAAPFFNJAPN_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::MoleMole::Config::AttackPatternMorphBase* EOMFGEGBOHE, ::System::Single MDPPNMIPDMP, ::MoleMole::Battle::Entity* MFMPICKHAMJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AttackPatternMorphBase*, ::System::Single, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BAAPFFNJAPN_GALGFCPKMGC_OFFSET))(this, EOMFGEGBOHE, MDPPNMIPDMP, MFMPICKHAMJ);
	}
};
