#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LISTINTUISPECIALNUM_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1A76F9A0)
#define MOLEMOLE_CONFIG_LISTINTUISPECIALNUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76F940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ListIntUISpecialNum_TypeDefinitionIndex = 42910;

	class ListIntUISpecialNum
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LISTINTUISPECIALNUM__CTOR_OFFSET))(this);
		}

		::System::Boolean GetValue(::MoleMole::Config::UISpecialNumGroup* uiSpecialNumGroup, ::System::String* tmpOverrideSpecialName, ::System::Collections::Generic::List_1<::System::Int32>*& tmpValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::UISpecialNumGroup*, ::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LISTINTUISPECIALNUM_GETVALUE_OFFSET))(this, uiSpecialNumGroup, tmpOverrideSpecialName, tmpValue);
		}
	};
}
