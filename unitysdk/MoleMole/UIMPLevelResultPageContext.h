#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EOKFMFHJICP;
namespace System { class Action; }
namespace System { class Object; }

#define MOLEMOLE_UIMPLEVELRESULTPAGECONTEXT_MOLEMOLE_ILEVELRESULTCONTEXT_GET_DUNGEONDONERET_OFFSET UNITYSDK_OFFSET(0x18D03EA0)
#define MOLEMOLE_UIMPLEVELRESULTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D03EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMPLevelResultPageContext_TypeDefinitionIndex = 61617;

	class UIMPLevelResultPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EOKFMFHJICP* dungeonDoneRet; // 0x28
		::System::Action* OnContinueAction; // 0x30
		::System::Boolean isWin; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMPLEVELRESULTPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Object* MoleMole_ILevelResultContext_get_dungeonDoneRet()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMPLEVELRESULTPAGECONTEXT_MOLEMOLE_ILEVELRESULTCONTEXT_GET_DUNGEONDONERET_OFFSET))(this);
		}
	};
}
