#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
class FOOIINCDBFA;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_MoveToPosition; }
namespace RPG::GameCore { class TaskContext; }

#define FECPMLEGDBK_AAPKNHGHGPA_OFFSET UNITYSDK_OFFSET(0x1308B080)
#define FECPMLEGDBK_BFJBKDGAJMO_OFFSET UNITYSDK_OFFSET(0x1308B880)
#define FECPMLEGDBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1308A800)
#define FECPMLEGDBK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1308A8C0)
#define FECPMLEGDBK_JLKJIHLELND_OFFSET UNITYSDK_OFFSET(0x1308B480)
#define FECPMLEGDBK_NCDLAIAFBGP_OFFSET UNITYSDK_OFFSET(0x1308B5B0)
#define FECPMLEGDBK_NECAHGBMMPI_OFFSET UNITYSDK_OFFSET(0x1308B550)
#define FECPMLEGDBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1308A910)
#define FECPMLEGDBK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1308B940)
#define FECPMLEGDBK_OOGCMLCLMJF_OFFSET UNITYSDK_OFFSET(0x1308B8E0)
#define FECPMLEGDBK_TICK_OFFSET UNITYSDK_OFFSET(0x1308B6C0)

inline static constexpr unsigned int FECPMLEGDBK_TypeDefinitionIndex = 53315;

	class FECPMLEGDBK
	{
	public:
		::FOOIINCDBFA* KBJNJLBILFH; // 0x28
		::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x30
		::System::Single OEJOIIMPMDP; // 0x38
		::System::Single KJPPFFLLMAB; // 0x3C
		::UnityEngine::Quaternion MBOJLOPIEEK; // 0x40
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x50
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

		::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> NECAHGBMMPI()
		{
			return ((::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode>(*)(::PVOID))((::PBYTE)hIl2Cpp + FECPMLEGDBK_NECAHGBMMPI_OFFSET))(this);
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
