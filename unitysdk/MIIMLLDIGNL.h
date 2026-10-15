#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LevelSmartObjectPointInfo; }

#define MIIMLLDIGNL_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0xB95A2B0)
#define MIIMLLDIGNL_CTOR_OFFSET UNITYSDK_OFFSET(0xB95A000)
#define MIIMLLDIGNL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB95A240)
#define MIIMLLDIGNL_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB95A290)
#define MIIMLLDIGNL_PLIKPNPEJLJ_OFFSET UNITYSDK_OFFSET(0xB95A280)

	class MIIMLLDIGNL : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelSmartObjectPointInfo* PMAPIEMDKKA; // 0x10
		::UnityEngine::Quaternion NCMEPPHLGEG; // 0x18
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0x28
		::System::Void _ctor(::RPG::GameCore::LevelSmartObjectPointInfo* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectPointInfo*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MIIMLLDIGNL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIMLLDIGNL_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::LevelSmartObjectPointInfo* PLIKPNPEJLJ()
		{
			return ((::RPG::GameCore::LevelSmartObjectPointInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIMLLDIGNL_PLIKPNPEJLJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIMLLDIGNL_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIMLLDIGNL_CECMCADBMDE_OFFSET))(this);
		}

	};
