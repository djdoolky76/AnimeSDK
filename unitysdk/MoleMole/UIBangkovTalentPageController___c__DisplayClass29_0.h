#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovTalentPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18884B90)
#define MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS29_0__ONNODESTATECHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x18884BA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTalentPageController___c__DisplayClass29_0_TypeDefinitionIndex = 70305;

	class UIBangkovTalentPageController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovTalentPageController* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnNodeStateChanged_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTPAGECONTROLLER___C__DISPLAYCLASS29_0__ONNODESTATECHANGED_B__0_OFFSET))(this);
		}
	};
}
