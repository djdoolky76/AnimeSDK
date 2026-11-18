#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MAEGCCMKDCA;
class PHECEIPKGFA;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }

#define IKAFOFHODOJ_LIGCCGJCFPG_OFFSET UNITYSDK_OFFSET(0x197CFCE0)
#define IKAFOFHODOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x197CFCD0)

inline static constexpr unsigned int IKAFOFHODOJ_TypeDefinitionIndex = 68150;

class IKAFOFHODOJ : public ::System::Object
{
public:
	::MoleMole::MonoGamepadNavigatableList* BBIADLDPLAH; // 0x10
	::MAEGCCMKDCA* AHMFPFACACD; // 0x18
	::MoleMole::MonoGamepadNestedListDelegate* HOLMIMENHAJ; // 0x20
	::PHECEIPKGFA* BHJHMCIHJNL; // 0x28
	::System::Int32 NMOBIHLMHKF; // 0x30
	::System::Boolean HBNBMIOPGNP; // 0x34
	::System::Boolean NLINIHHIJDK; // 0x35
	::System::Byte _padding0[0x2];
	::System::Single IHEJNDJCEDP; // 0x38
	::System::Int32 JLACHJOMHEL; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAFOFHODOJ__CTOR_OFFSET))(this);
	}

	::MoleMole::MonoGamepadNavigatableList* LIGCCGJCFPG()
	{
		return ((::MoleMole::MonoGamepadNavigatableList*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAFOFHODOJ_LIGCCGJCFPG_OFFSET))(this);
	}
};
