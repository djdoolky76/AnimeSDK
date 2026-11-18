#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOCDFLHIDDI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER_AFFIXGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x14E4A970)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDetailDialogPopWindowController_AffixGroup_TypeDefinitionIndex = 70761;

	class UIZenkovDetailDialogPopWindowController_AffixGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NOCDFLHIDDI*>* Levels; // 0x10
		::System::Int32 KeyTool; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDETAILDIALOGPOPWINDOWCONTROLLER_AFFIXGROUP__CTOR_OFFSET))(this);
		}
	};
}
