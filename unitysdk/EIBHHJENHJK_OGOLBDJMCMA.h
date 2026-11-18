#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_OGOLBDJMCMA_IEIOKCCKNAG_OFFSET UNITYSDK_OFFSET(0x17111480)
#define EIBHHJENHJK_OGOLBDJMCMA__CTOR_OFFSET UNITYSDK_OFFSET(0x17111470)

inline static constexpr unsigned int EIBHHJENHJK_OGOLBDJMCMA_TypeDefinitionIndex = 71900;

class EIBHHJENHJK_OGOLBDJMCMA : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x10
	::MoleMole::UIControllerContextBase* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_OGOLBDJMCMA__CTOR_OFFSET))(this);
	}

	::System::Void IEIOKCCKNAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_OGOLBDJMCMA_IEIOKCCKNAG_OFFSET))(this);
	}
};
