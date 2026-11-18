#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace MoleMole::Battle { class Entity; }

#define JHDCNGLCGED_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1527D3E0)
#define JHDCNGLCGED_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1527D350)
#define JHDCNGLCGED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1527D2D0)
#define JHDCNGLCGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1527D340)

inline static constexpr unsigned int JHDCNGLCGED_TypeDefinitionIndex = 76532;

class JHDCNGLCGED : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xE; // 0x0
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHDCNGLCGED__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDCNGLCGED__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDCNGLCGED_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDCNGLCGED_FIGPAOKNJLN_OFFSET))(this);
	}
};
