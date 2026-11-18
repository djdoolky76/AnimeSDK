#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MDLHOCBNDMD;
namespace MoleMole { class UIBangbooModGarageDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIBANGBOOMODGARAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23AA70)
#define MOLEMOLE_UIBANGBOOMODGARAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__DOBUY_B__0_OFFSET UNITYSDK_OFFSET(0x1A23AA80)
#define MOLEMOLE_UIBANGBOOMODGARAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__DOBUY_B__1_OFFSET UNITYSDK_OFFSET(0x1A23AB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooModGarageDialogPopWindowController___c__DisplayClass12_0_TypeDefinitionIndex = 90209;

	class UIBangbooModGarageDialogPopWindowController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangbooModGarageDialogPopWindowController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::UInt32 goodsId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoBuy_b__0(::MDLHOCBNDMD* param)
		{
			return ((::System::Void(*)(::PVOID, ::MDLHOCBNDMD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__DOBUY_B__0_OFFSET))(this, param);
		}

		::System::Void _DoBuy_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS12_0__DOBUY_B__1_OFFSET))(this);
		}
	};
}
