#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOOIINCDBFA;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_MoveToPosition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Nullable; }

#define FECPMLEGDBK_AAPKNHGHGPA_OFFSET UNITYSDK_OFFSET(0x156E6640)
#define FECPMLEGDBK_BFJBKDGAJMO_OFFSET UNITYSDK_OFFSET(0x156E6E30)
#define FECPMLEGDBK_CTOR_OFFSET UNITYSDK_OFFSET(0x156E5DD0)
#define FECPMLEGDBK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156E5E90)
#define FECPMLEGDBK_JLKJIHLELND_OFFSET UNITYSDK_OFFSET(0x156E6A40)
#define FECPMLEGDBK_NCDLAIAFBGP_OFFSET UNITYSDK_OFFSET(0x156E6B60)
#define FECPMLEGDBK_NECAHGBMMPI_OFFSET UNITYSDK_OFFSET(0x156E6B00)
#define FECPMLEGDBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156E5EE0)
#define FECPMLEGDBK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156E6EF0)
#define FECPMLEGDBK_OOGCMLCLMJF_OFFSET UNITYSDK_OFFSET(0x156E6E90)
#define FECPMLEGDBK_TICK_OFFSET UNITYSDK_OFFSET(0x156E6C70)

inline static constexpr unsigned int FECPMLEGDBK_TypeDefinitionIndex = 52210;

	class FECPMLEGDBK
	{
	public:
		::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x28
		::FOOIINCDBFA* KBJNJLBILFH; // 0x30
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x38
		::UnityEngine::Quaternion MBOJLOPIEEK; // 0x44
		::System::Single OEJOIIMPMDP; // 0x54
		::System::Single KJPPFFLLMAB; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_MoveToPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_MoveToPosition*))((::PBYTE)hIl2Cpp + FECPMLEGDBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECPMLEGDBK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECPMLEGDBK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FECPMLEGDBK_TICK_OFFSET))(this, a1);
		}

		::System::Nullable* NECAHGBMMPI()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECPMLEGDBK_NECAHGBMMPI_OFFSET))(this);
		}

		::System::Void BFJBKDGAJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECPMLEGDBK_BFJBKDGAJMO_OFFSET))(this);
		}

		::System::Void OOGCMLCLMJF(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + FECPMLEGDBK_OOGCMLCLMJF_OFFSET))(this, a1);
		}

		::System::Void NCDLAIAFBGP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FECPMLEGDBK_NCDLAIAFBGP_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterMotionFlag JLKJIHLELND()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + FECPMLEGDBK_JLKJIHLELND_OFFSET))(this);
		}

		::System::Boolean AAPKNHGHGPA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FECPMLEGDBK_AAPKNHGHGPA_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECPMLEGDBK_ONTASKRESET_OFFSET))(this);
		}

	};
