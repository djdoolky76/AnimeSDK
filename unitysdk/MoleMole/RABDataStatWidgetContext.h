#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DENNNBBPNEO;

#define MOLEMOLE_RABDATASTATWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDE19A0)

namespace MoleMole
{
	inline static constexpr unsigned int RABDataStatWidgetContext_TypeDefinitionIndex = 72071;

	class RABDataStatWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DENNNBBPNEO* InLevelData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABDATASTATWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
