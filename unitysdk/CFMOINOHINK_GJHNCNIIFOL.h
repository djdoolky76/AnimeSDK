#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMOINOHINK;
namespace MoleMole::Battle { class Entity; }

#define CFMOINOHINK_GJHNCNIIFOL_DCACEIBCLKB_OFFSET UNITYSDK_OFFSET(0x16A231F0)
#define CFMOINOHINK_GJHNCNIIFOL_KBPKNLFAPID_OFFSET UNITYSDK_OFFSET(0x16A23150)
#define CFMOINOHINK_GJHNCNIIFOL_MEGHCCOJKCP_OFFSET UNITYSDK_OFFSET(0x16A23210)
#define CFMOINOHINK_GJHNCNIIFOL__CTOR_OFFSET UNITYSDK_OFFSET(0x16A23140)

inline static constexpr unsigned int CFMOINOHINK_GJHNCNIIFOL_TypeDefinitionIndex = 39607;

class CFMOINOHINK_GJHNCNIIFOL : public ::System::Object
{
public:
	::CFMOINOHINK* DJCNCELJPOM; // 0x10
	::System::Int32 PJJPKPCBFNI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMOINOHINK_GJHNCNIIFOL__CTOR_OFFSET))(this);
	}

	::System::Single KBPKNLFAPID(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFMOINOHINK_GJHNCNIIFOL_KBPKNLFAPID_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean DCACEIBCLKB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFMOINOHINK_GJHNCNIIFOL_DCACEIBCLKB_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Single MEGHCCOJKCP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFMOINOHINK_GJHNCNIIFOL_MEGHCCOJKCP_OFFSET))(this, KECKGDFIALJ);
	}
};
