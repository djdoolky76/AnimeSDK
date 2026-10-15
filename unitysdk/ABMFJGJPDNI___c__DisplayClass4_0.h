#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABMFJGJPDNI;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client::Pet { class IPet; }

#define ABMFJGJPDNI___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1099D0)
#define ABMFJGJPDNI___C__DISPLAYCLASS4_0___REFRESHPETPRELOAD_B__0_OFFSET UNITYSDK_OFFSET(0xB109D10)

	class ABMFJGJPDNI___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::ABMFJGJPDNI* __4__this; // 0x10
		::RPG::PoolHashSet_1<::System::UInt32>* toAdd; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMFJGJPDNI___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __RefreshPetPreload_b__0(::System::UInt32 a1, ::RPG::Client::Pet::IPet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + ABMFJGJPDNI___C__DISPLAYCLASS4_0___REFRESHPETPRELOAD_B__0_OFFSET))(this, a1, a2);
		}

	};
