#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIInterKnotPostDialogPopContext_EOpenMode.h"

class GLAHOCGCKCF;
class PHECEIPKGFA;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x175F7E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostDialogPopContext_TypeDefinitionIndex = 60625;

	class UIInterKnotPostDialogPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnHide; // 0x28
		::System::String* from; // 0x30
		::PHECEIPKGFA* PostData; // 0x38
		::GLAHOCGCKCF* FansChangeInfo; // 0x40
		::System::Boolean ClientPost; // 0x48
		::System::Byte _padding0[0x3];
		::MoleMole::UIInterKnotPostDialogPopContext_EOpenMode OpenMode; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
