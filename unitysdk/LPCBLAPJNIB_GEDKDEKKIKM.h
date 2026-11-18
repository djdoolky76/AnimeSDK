#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIIncomeNumWidgetController; }

#define LPCBLAPJNIB_GEDKDEKKIKM_IGIFGDNAFMO_OFFSET UNITYSDK_OFFSET(0x1A62D9A0)
#define LPCBLAPJNIB_GEDKDEKKIKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62D990)

inline static constexpr unsigned int LPCBLAPJNIB_GEDKDEKKIKM_TypeDefinitionIndex = 47091;

class LPCBLAPJNIB_GEDKDEKKIKM : public ::System::Object
{
public:
	::MoleMole::UIIncomeNumWidgetController* IFIGCNBFECL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCBLAPJNIB_GEDKDEKKIKM__CTOR_OFFSET))(this);
	}

	::System::Void IGIFGDNAFMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCBLAPJNIB_GEDKDEKKIKM_IGIFGDNAFMO_OFFSET))(this);
	}
};
