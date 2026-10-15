#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNPIEPGLNPC;
class LOHFIAOJHKN;
class OBJANKHLNGO;
namespace RPG::Client::LimaoNews { class LimaoNewsPlanData; }
namespace RPG::Client::LimaoNews { class LimaoNewsPostSubmitViewModel; }
namespace Sofa { class BaseSofaWindow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LOHFIAOJHKN___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB803530)
#define LOHFIAOJHKN___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xB803540)
#define LOHFIAOJHKN___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xB803620)

	class LOHFIAOJHKN___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::LOHFIAOJHKN* __4__this; // 0x10
		::System::Collections::Generic::List_1<::Sofa::BaseSofaWindow*>* popWindowList; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsPlanData* currentPlanData; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHFIAOJHKN___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel* __DoShowEntrancePage_b__0(::OBJANKHLNGO* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPostSubmitViewModel*(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + LOHFIAOJHKN___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__0_OFFSET))(this, a1);
		}

		::System::Void __DoShowEntrancePage_b__1(::GNPIEPGLNPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNPIEPGLNPC*))((::PBYTE)hIl2Cpp + LOHFIAOJHKN___C__DISPLAYCLASS6_0___DOSHOWENTRANCEPAGE_B__1_OFFSET))(this, a1);
		}

	};
