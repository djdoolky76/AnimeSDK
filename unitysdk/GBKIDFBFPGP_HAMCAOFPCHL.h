#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define GBKIDFBFPGP_HAMCAOFPCHL_DLJIJDKBABE_OFFSET UNITYSDK_OFFSET(0x11D99B00)
#define GBKIDFBFPGP_HAMCAOFPCHL_KCNOLNOLLJN_OFFSET UNITYSDK_OFFSET(0x11D99AF0)
#define GBKIDFBFPGP_HAMCAOFPCHL__CTOR_OFFSET UNITYSDK_OFFSET(0x11D99AE0)

inline static constexpr unsigned int GBKIDFBFPGP_HAMCAOFPCHL_TypeDefinitionIndex = 58615;

class GBKIDFBFPGP_HAMCAOFPCHL : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_HAMCAOFPCHL__CTOR_OFFSET))(this);
	}

	::System::Void KCNOLNOLLJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_HAMCAOFPCHL_KCNOLNOLLJN_OFFSET))(this);
	}

	::System::Void DLJIJDKBABE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_HAMCAOFPCHL_DLJIJDKBABE_OFFSET))(this);
	}
};
