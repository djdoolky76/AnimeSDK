#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }

#define OKPFLOFNBJC_CLEAR_OFFSET UNITYSDK_OFFSET(0x176715C0)
#define OKPFLOFNBJC_CTOR_OFFSET UNITYSDK_OFFSET(0x17671660)

inline static constexpr unsigned int OKPFLOFNBJC_TypeDefinitionIndex = 44512;

	class OKPFLOFNBJC : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimPropSpawnerParam* DFCFNEKCKBA; // 0x10
		::System::Nullable_1<::UnityEngine::Vector3> FJFNEEJBAFK; // 0x18
		::System::Byte _padding0[0x8];
		::KLNKLOMDIIC LFBCMJEODKP; // 0x28
		::System::Single KBJJAMMPOMO; // 0x90
		::System::Boolean DCKBLNHCLNG; // 0x94
		::System::Boolean CMBHFHCPJNH; // 0x95
		::System::Byte _padding1[0x2];
		::KLNKLOMDIIC COCEIMLGHKB; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPFLOFNBJC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPFLOFNBJC_CLEAR_OFFSET))(this);
		}

	};
