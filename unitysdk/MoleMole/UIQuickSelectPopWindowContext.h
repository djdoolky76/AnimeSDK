#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNEOPDAIHOJ.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167780F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickSelectPopWindowContext_TypeDefinitionIndex = 60718;

	class UIQuickSelectPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* ItemList; // 0x28
		::LNEOPDAIHOJ Type; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKSELECTPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
