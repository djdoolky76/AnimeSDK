#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACDPFPICOAD.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ALGKMLLALFG;
class CHLDOALNCNF;
class OCIKAJAKGGL;

#define MOLEMOLE_UIHOLLOWEVENTOPTIONSDIALOGCONTEXT_CONTAINSCHOICE_OFFSET UNITYSDK_OFFSET(0x1A409260)
#define MOLEMOLE_UIHOLLOWEVENTOPTIONSDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A409470)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowEventOptionsDialogContext_TypeDefinitionIndex = 59004;

	class UIHollowEventOptionsDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CHLDOALNCNF* ChoiceNode; // 0x28
		::ALGKMLLALFG* graph; // 0x30
		::OCIKAJAKGGL* Config; // 0x38
		::ACDPFPICOAD showMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTOPTIONSDIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean ContainsChoice(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTOPTIONSDIALOGCONTEXT_CONTAINSCHOICE_OFFSET))(this, index);
		}
	};
}
