#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EKBIEOAIOPB;

#define MOLEMOLE_UIABYSSS2DETAILROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1897FBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2DetailRowContext_TypeDefinitionIndex = 50076;

	class UIAbyssS2DetailRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EKBIEOAIOPB* AbyssS2DetailRowInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2DETAILROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
