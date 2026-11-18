#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowCardOptionsDialogContext.h"

class OLHCEJBBEJF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRELICBRANCHOPTIONSDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC4740)

namespace MoleMole
{
	inline static constexpr unsigned int UIRelicBranchOptionsDialogContext_TypeDefinitionIndex = 76188;

	class UIRelicBranchOptionsDialogContext : public ::MoleMole::UIHollowCardOptionsDialogContext
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::OLHCEJBBEJF*>*>* _relicRoleDict; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRELICBRANCHOPTIONSDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
