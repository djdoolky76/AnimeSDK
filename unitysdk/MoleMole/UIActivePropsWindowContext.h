#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGIIBOCADLI.h"
#include "unitysdk/KEIMPFPMJGA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NLLAEGMBGNN.h"
#include "unitysdk/System/ValueTuple_2.h"

class EGOPHPIBPJJ;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A756A00)
#define MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A756980)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsWindowContext_TypeDefinitionIndex = 72217;

	class UIActivePropsWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* whitelist; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* hideBuddy; // 0x30
		::System::String* buddyLockTipTextMapId; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* InsertBuddys; // 0x40
		::System::String* TitleText; // 0x48
		::EGOPHPIBPJJ* QuestCfg; // 0x50
		::System::Func_2<::System::Int32, ::System::Boolean>* buddyLockCheckFunc; // 0x58
		::Il2CppArray<::NLLAEGMBGNN>* sortTypes; // 0x60
		::System::Collections::Generic::HashSet_1<::System::Int32>* blacklist; // 0x68
		::Il2CppArray<::NLLAEGMBGNN>* highPrioritySortTypes; // 0x70
		::Il2CppArray<::System::Int32>* multiBuddySelects; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* topBuddyIDs; // 0x80
		::System::Func_2<::System::Int32, ::System::ValueTuple_2<::System::Boolean, ::System::String*>>* CheckCustomSelectStr; // 0x88
		::AGIIBOCADLI SelectType; // 0x90
		::System::Int32 GachaID; // 0x94
		::System::Int32 GachaOptionalSelectItemID; // 0x98
		::System::Int32 OpenSelectBuddyID; // 0x9C
		::KEIMPFPMJGA ShowBuddyMode; // 0xA0
		::System::Boolean selectIsEmpty; // 0xA4
		::System::Boolean IsPreview; // 0xA5
		::System::Boolean IsGachaOptionalSelect; // 0xA6

		::System::Void _ctor(::System::Int32 buddySelectCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_OFFSET))(this, buddySelectCount);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSWINDOWCONTEXT__CTOR_1_OFFSET))(this);
		}
	};
}
