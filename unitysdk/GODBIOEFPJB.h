#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UINewbieGuideRoleChoose02WidgetController_TeamSource.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GODBIOEFPJB__CTOR_OFFSET UNITYSDK_OFFSET(0x10F0EEA0)

inline static constexpr unsigned int GODBIOEFPJB_TypeDefinitionIndex = 86434;

class GODBIOEFPJB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* KCKAOICGLCC; // 0x10
	::MoleMole::UINewbieGuideRoleChoose02WidgetController_TeamSource BHMLIFIKCEL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODBIOEFPJB__CTOR_OFFSET))(this);
	}
};
