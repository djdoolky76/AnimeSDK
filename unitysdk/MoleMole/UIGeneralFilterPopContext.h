#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNPMDGGFBBE.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DEGIHKLKKFG;
class GIEMFJONNKB;
class NKJLHJMFGGD;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALFILTERPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180AB630)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFilterPopContext_TypeDefinitionIndex = 81510;

	class UIGeneralFilterPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::GIEMFJONNKB*>* ToggleInfos; // 0x28
		::System::Action* onOpen; // 0x30
		::NKJLHJMFGGD* sortData; // 0x38
		::System::Action_1<::System::Int32>* onDeleteClick; // 0x40
		::System::Action* onChanged; // 0x48
		::DEGIHKLKKFG* filterInstance; // 0x50
		::System::String* advancedFilterSubTitle; // 0x58
		::System::Action* onWindowFadeout; // 0x60
		::FNPMDGGFBBE showType; // 0x68
		::System::Boolean showForceSetOwnToggle; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
