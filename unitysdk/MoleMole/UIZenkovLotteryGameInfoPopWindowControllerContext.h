#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVLOTTERYGAMEINFOPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EAB960)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGameInfoPopWindowControllerContext_TypeDefinitionIndex = 65092;

	class UIZenkovLotteryGameInfoPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TopLeftTitle; // 0x28
		::System::String* Row3Title; // 0x30
		::System::String* Row2Title; // 0x38
		::System::String* Row1Title; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* RowDatas; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEINFOPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
