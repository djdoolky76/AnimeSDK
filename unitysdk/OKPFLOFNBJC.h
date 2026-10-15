#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }
namespace System { class Nullable; }

#define OKPFLOFNBJC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C99DB30)
#define OKPFLOFNBJC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C99DBB0)

	class OKPFLOFNBJC : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimPropSpawnerParam* DFCFNEKCKBA; // 0x10
		::System::Nullable* FJFNEEJBAFK; // 0x18
		::System::Byte _padding0[0x8];
		::System::Boolean DCKBLNHCLNG; // 0x28
		::System::Boolean CMBHFHCPJNH; // 0x29
		::System::Byte _padding1[0x2];
		::KLNKLOMDIIC COCEIMLGHKB; // 0x2C
		::KLNKLOMDIIC LFBCMJEODKP; // 0x94
		::System::Single KBJJAMMPOMO; // 0xFC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPFLOFNBJC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPFLOFNBJC_CLEAR_OFFSET))(this);
		}

	};
