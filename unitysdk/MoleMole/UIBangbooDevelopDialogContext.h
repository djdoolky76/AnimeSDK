#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOMEDAKGPPJ.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BKGKJNHLCKC;

#define MOLEMOLE_UIBANGBOODEVELOPDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19BBCCB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDevelopDialogContext_TypeDefinitionIndex = 77556;

	class UIBangbooDevelopDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BKGKJNHLCKC* data; // 0x28
		::EOMEDAKGPPJ _subType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODEVELOPDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
