#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DAGJADOGKFB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NEOGOLDENMECHAPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14BB3400)

namespace MoleMole
{
	inline static constexpr unsigned int NeoGoldenMechaPageContext_TypeDefinitionIndex = 71552;

	class NeoGoldenMechaPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::DAGJADOGKFB*>* AllLevelGroups; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NEOGOLDENMECHAPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
