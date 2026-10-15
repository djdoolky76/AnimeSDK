#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class CEKGGHILKPC;

#define MMIEDEIIAND___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D0B70)
#define MMIEDEIIAND___C__DISPLAYCLASS6_0___QUERYBYOWNERTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xB9D0B80)

	class MMIEDEIIAND___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FateRinHouguOwnerType ownerType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIEDEIIAND___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __QueryByOwnerType_b__0(::CEKGGHILKPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEKGGHILKPC*))((::PBYTE)hIl2Cpp + MMIEDEIIAND___C__DISPLAYCLASS6_0___QUERYBYOWNERTYPE_B__0_OFFSET))(this, a1);
		}

	};
