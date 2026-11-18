#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class MBHOGLGMFEM;

#define MOLEMOLE_UITRENDYSTOREWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x185DE8F0)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStoreWidgetContext_TypeDefinitionIndex = 69105;

	class UITrendyStoreWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MBHOGLGMFEM* storeData; // 0x28
		::System::Boolean ShowPreviewMode; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 InitSelectID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
