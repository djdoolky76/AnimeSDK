#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NADNOPDELGL;
namespace MoleMole::Battle { class Entity; }

#define MHJBMEMFFOG_KCHAIDJGFKO_NBMCPMGKDDJ_OFFSET UNITYSDK_OFFSET(0x177BE940)
#define MHJBMEMFFOG_KCHAIDJGFKO__CTOR_OFFSET UNITYSDK_OFFSET(0x177BE930)

inline static constexpr unsigned int MHJBMEMFFOG_KCHAIDJGFKO_TypeDefinitionIndex = 48349;

class MHJBMEMFFOG_KCHAIDJGFKO : public ::System::Object
{
public:
	::NADNOPDELGL* OOGDKOJDOBC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJBMEMFFOG_KCHAIDJGFKO__CTOR_OFFSET))(this);
	}

	::System::Void NBMCPMGKDDJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MHJBMEMFFOG_KCHAIDJGFKO_NBMCPMGKDDJ_OFFSET))(this, KECKGDFIALJ);
	}
};
