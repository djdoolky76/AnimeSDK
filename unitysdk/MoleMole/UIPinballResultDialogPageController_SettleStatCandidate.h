#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFFBKEFAFML;

#define MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER_SETTLESTATCANDIDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1906EF10)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballResultDialogPageController_SettleStatCandidate_TypeDefinitionIndex = 84423;

	class UIPinballResultDialogPageController_SettleStatCandidate : public ::System::Object
	{
	public:
		::FFFBKEFAFML* Template; // 0x10
		::System::Int32 Count; // 0x18
		::System::Int32 Id; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER_SETTLESTATCANDIDATE__CTOR_OFFSET))(this);
		}
	};
}
