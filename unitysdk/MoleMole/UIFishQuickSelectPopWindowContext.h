#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FANBKJPNEDB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFISHQUICKSELECTPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECD6A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishQuickSelectPopWindowContext_TypeDefinitionIndex = 90959;

	class UIFishQuickSelectPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::FANBKJPNEDB*>* fishList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHQUICKSELECTPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
