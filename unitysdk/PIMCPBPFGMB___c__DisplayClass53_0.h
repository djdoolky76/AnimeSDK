#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBKNCCIENIP;
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIMCPBPFGMB___C__DISPLAYCLASS53_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC26F870)
#define PIMCPBPFGMB___C__DISPLAYCLASS53_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0xC270220)

	class PIMCPBPFGMB___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::JBKNCCIENIP* windowService; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* rewardItems; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB___C__DISPLAYCLASS53_0_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMCPBPFGMB___C__DISPLAYCLASS53_0___CTOR_B__1_OFFSET))(this);
		}

	};
