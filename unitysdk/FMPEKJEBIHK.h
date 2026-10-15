#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class LevelSmartObjectCommonPointInfo; }

#define FMPEKJEBIHK_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x158669A0)
#define FMPEKJEBIHK_CTOR_OFFSET UNITYSDK_OFFSET(0x15866730)
#define FMPEKJEBIHK_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x15866970)
#define FMPEKJEBIHK_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x15866980)

	class FMPEKJEBIHK : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0x10
		::System::UInt32 ANOPNMFJLMI; // 0x1C
		::UnityEngine::Quaternion NCMEPPHLGEG; // 0x20
		::System::Void _ctor(::RPG::GameCore::LevelSmartObjectCommonPointInfo* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectCommonPointInfo*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FMPEKJEBIHK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPEKJEBIHK_EIOMMLPIAKP_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPEKJEBIHK_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPEKJEBIHK_CECMCADBMDE_OFFSET))(this);
		}

	};
