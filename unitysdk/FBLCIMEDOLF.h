#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class KJJFDLCHCPE;
namespace MoleMole::Battle { class Entity; }

#define FBLCIMEDOLF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1418EEF0)
#define FBLCIMEDOLF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1418F060)
#define FBLCIMEDOLF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1418EFD0)
#define FBLCIMEDOLF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1418EE50)
#define FBLCIMEDOLF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1418EF40)
#define FBLCIMEDOLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1418EFC0)

inline static constexpr unsigned int FBLCIMEDOLF_TypeDefinitionIndex = 88296;

class FBLCIMEDOLF : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x7; // 0x0
	::KJJFDLCHCPE* BKDNDHPGKKG; // 0x48
	::MoleMole::Battle::Entity* NCIFALAELJN; // 0x50
	::MoleMole::Battle::Entity* KOLFOINKALI; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBLCIMEDOLF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLCIMEDOLF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLCIMEDOLF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLCIMEDOLF_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLCIMEDOLF_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::FBLCIMEDOLF* JFDOOELFAOA()
	{
		return ((::FBLCIMEDOLF*(*)())((::PBYTE)hIl2Cpp + FBLCIMEDOLF_JFDOOELFAOA_OFFSET))();
	}
};
