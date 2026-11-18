#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCHHPNLHOEL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class JNAHOHABAIC;
class KCFPFKJBODB;
namespace MoleMole { class UIInterKnowCoursePanelWidgetController; }

#define PPCKCJGHHEH_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x1CB5DD00)
#define PPCKCJGHHEH_GJKEECFLKBC_OFFSET UNITYSDK_OFFSET(0x1CB5DA80)
#define PPCKCJGHHEH_IEANEBHNMML_OFFSET UNITYSDK_OFFSET(0x1CB5DB40)
#define PPCKCJGHHEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5DA70)

inline static constexpr unsigned int PPCKCJGHHEH_TypeDefinitionIndex = 70820;

class PPCKCJGHHEH : public ::System::Object
{
public:
	::KCFPFKJBODB* AOJGBONCPEN; // 0x10
	::MoleMole::UIInterKnowCoursePanelWidgetController* FBLKNJCKGEI; // 0x18
	::JCHHPNLHOEL JKBLDFBGBPK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCKCJGHHEH__CTOR_OFFSET))(this);
	}

	::System::Void GJKEECFLKBC(::JCHHPNLHOEL HMLADJHKPML)
	{
		return ((::System::Void(*)(::PVOID, ::JCHHPNLHOEL))((::PBYTE)hIl2Cpp + PPCKCJGHHEH_GJKEECFLKBC_OFFSET))(this, HMLADJHKPML);
	}

	::System::Void IEANEBHNMML(::JNAHOHABAIC* DHIPMNJHNLF)
	{
		return ((::System::Void(*)(::PVOID, ::JNAHOHABAIC*))((::PBYTE)hIl2Cpp + PPCKCJGHHEH_IEANEBHNMML_OFFSET))(this, DHIPMNJHNLF);
	}

	::System::Boolean DIHCGHDHPJP(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + PPCKCJGHHEH_DIHCGHDHPJP_OFFSET))(this, MLNBANAGAEE);
	}
};
