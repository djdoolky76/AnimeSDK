#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1892E980)

namespace MoleMole
{
	inline static constexpr unsigned int UIDuelBattleCardInfoPopWindowContext_TypeDefinitionIndex = 92693;

	class UIDuelBattleCardInfoPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* CardIds; // 0x28

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* cardIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDUELBATTLECARDINFOPOPWINDOWCONTEXT__CTOR_OFFSET))(this, cardIds);
		}
	};
}
