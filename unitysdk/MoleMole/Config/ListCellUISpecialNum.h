#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LISTCELLUISPECIALNUM_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1BA496F0)
#define MOLEMOLE_CONFIG_LISTCELLUISPECIALNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA49690)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ListCellUISpecialNum_TypeDefinitionIndex = 86667;

	class ListCellUISpecialNum
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LISTCELLUISPECIALNUM__CTOR_OFFSET))(this);
		}

		::System::Boolean GetValue(::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup, ::System::String* tmpOverrideSpecialName, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& tmpValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::UISpecialNumGroup*, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LISTCELLUISPECIALNUM_GETVALUE_OFFSET))(this, uiSpecialNumGroup, tmpOverrideSpecialName, tmpValue);
		}
	};
}
