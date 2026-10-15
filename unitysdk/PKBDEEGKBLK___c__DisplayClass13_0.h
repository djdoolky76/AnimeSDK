#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBOCFEEEEII;
class PKBDEEGKBLK;

#define PKBDEEGKBLK___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC2A38C0)
#define PKBDEEGKBLK___C__DISPLAYCLASS13_0__REQUESTCLAIMREWARD_B__0_OFFSET UNITYSDK_OFFSET(0xC2A3DD0)

inline static constexpr unsigned int PKBDEEGKBLK___c__DisplayClass13_0_TypeDefinitionIndex = 61398;

	class PKBDEEGKBLK___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::PKBDEEGKBLK* __4__this; // 0x10
		::System::Int32 roundIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDEEGKBLK___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestClaimReward_b__0(::HBOCFEEEEII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBOCFEEEEII*))((::PBYTE)hIl2Cpp + PKBDEEGKBLK___C__DISPLAYCLASS13_0__REQUESTCLAIMREWARD_B__0_OFFSET))(this, a1);
		}

	};
