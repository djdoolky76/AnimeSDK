#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15977DD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBigSceneResultDialogPopWindowControllerContext_TypeDefinitionIndex = 59585;

	class UIBigSceneResultDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 KillerGroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIGSCENERESULTDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
