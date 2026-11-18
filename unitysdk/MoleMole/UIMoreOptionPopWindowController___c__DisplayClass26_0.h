#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class JGBMOOJHMBF;
namespace MoleMole { class UIMoreOptionPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14CA88E0)
#define MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__OPENPHOTOWALLPAGE_B__2_OFFSET UNITYSDK_OFFSET(0x14CA88F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMoreOptionPopWindowController___c__DisplayClass26_0_TypeDefinitionIndex = 70630;

	class UIMoreOptionPopWindowController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMoreOptionPopWindowController* __4__this; // 0x10
		::JGBMOOJHMBF* info; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenPhotowallPage_b__2(::System::Collections::Generic::List_1<::FBHPDPBIGPK*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOREOPTIONPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__OPENPHOTOWALLPAGE_B__2_OFFSET))(this, list);
		}
	};
}
