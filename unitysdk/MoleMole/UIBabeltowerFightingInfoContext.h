#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ADAOIJIHDEO;

#define MOLEMOLE_UIBABELTOWERFIGHTINGINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19D37330)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingInfoContext_TypeDefinitionIndex = 44919;

	class UIBabeltowerFightingInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ADAOIJIHDEO* SelectData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
