#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICGJKOBCLPH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGENERALITEMGETDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18940C10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemGetDialogContext_TypeDefinitionIndex = 62934;

	class UIGeneralItemGetDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ItemId; // 0x28
		::ICGJKOBCLPH DialogType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMGETDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
