#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_BANGBOOMICROWEBEVENTDIALOGPOPWINDOWSHOWOBJ_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x12756410)
#define MOLEMOLE_BANGBOOMICROWEBEVENTDIALOGPOPWINDOWSHOWOBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x127563D0)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooMicroWebEventDialogPopWindowShowObj_TypeDefinitionIndex = 89637;

	class BangbooMicroWebEventDialogPopWindowShowObj : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Int32 _id; // 0x28

		::System::Void _ctor(::System::Int32 id, ::FAKODLEPJOA showPage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::FAKODLEPJOA))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOMICROWEBEVENTDIALOGPOPWINDOWSHOWOBJ__CTOR_OFFSET))(this, id, showPage);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOMICROWEBEVENTDIALOGPOPWINDOWSHOWOBJ_ONPROCESS_OFFSET))(this);
		}
	};
}
