#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class HKAJMEMCBLC;

#define MODJFJKGCFB___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA28730)
#define MODJFJKGCFB___C__DISPLAYCLASS6_0__GETACQUIREDBYOWNERTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xBA298A0)

inline static constexpr unsigned int MODJFJKGCFB___c__DisplayClass6_0_TypeDefinitionIndex = 81095;

	class MODJFJKGCFB___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinHouguOwnerType ownerType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODJFJKGCFB___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAcquiredByOwnerType_b__0(::HKAJMEMCBLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + MODJFJKGCFB___C__DISPLAYCLASS6_0__GETACQUIREDBYOWNERTYPE_B__0_OFFSET))(this, a1);
		}

	};
