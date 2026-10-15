#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharaStoryMoveState.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveStartData; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define ABOFILDDDJM_ANGALAPEPCJ_OFFSET UNITYSDK_OFFSET(0xB10FD80)
#define ABOFILDDDJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB110000)
#define ABOFILDDDJM_DBBOHMLNDAC_OFFSET UNITYSDK_OFFSET(0xB10FF10)
#define ABOFILDDDJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB10F0D0)
#define ABOFILDDDJM_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0xB10FE00)
#define ABOFILDDDJM_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xB10F0B0)
#define ABOFILDDDJM_GKKEGIFCLHF_OFFSET UNITYSDK_OFFSET(0xB10FFC0)
#define ABOFILDDDJM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB10F840)
#define ABOFILDDDJM_JMNODNLAOKK_OFFSET UNITYSDK_OFFSET(0xB10F790)
#define ABOFILDDDJM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB10F120)
#define ABOFILDDDJM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB10F210)
#define ABOFILDDDJM_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xB10FE90)
#define ABOFILDDDJM_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0xB10F880)
#define ABOFILDDDJM_PMMJGEDIIJD_OFFSET UNITYSDK_OFFSET(0xB10FF70)
#define ABOFILDDDJM_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xB10F0C0)

inline static constexpr unsigned int ABOFILDDDJM_TypeDefinitionIndex = 53620;

	class ABOFILDDDJM : public ::System::Object
	{
	public:
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x10
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::RPGTools::Timeline::CharacterStoryMoveStartData* IGHAHBNLIJA; // 0x20
		::UnityEngine::Animator* APPGGMLEPLN; // 0x28
		::RPG::GameCore::AdventureCharacterController* KMAHMFPKIOI; // 0x30
		::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x38
		::RPG::GameCore::CharacterMotionFlag KMKPGPIDKJF; // 0x3C
		::UnityEngine::Vector3 JAJPGBCPEND; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFILDDDJM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CharaStoryMoveState get_CurrentMoveState()
		{
			return ((::RPG::GameCore::CharaStoryMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFILDDDJM_GET_CURRENTMOVESTATE_OFFSET))(this);
		}

		::System::Void set_CurrentMoveState(::RPG::GameCore::CharaStoryMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharaStoryMoveState))((::PBYTE)hIl2Cpp + ABOFILDDDJM_SET_CURRENTMOVESTATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFILDDDJM_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFILDDDJM_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPGTools::Timeline::CharacterStoryMoveStartData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveStartData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + ABOFILDDDJM_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 JMNODNLAOKK(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ABOFILDDDJM_JMNODNLAOKK_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFILDDDJM_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + ABOFILDDDJM_MOCPCLHLAHK_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* ANGALAPEPCJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFILDDDJM_ANGALAPEPCJ_OFFSET))(this);
		}

		::System::Void FGFFJBEKHBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFILDDDJM_FGFFJBEKHBO_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFILDDDJM_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void PMMJGEDIIJD(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + ABOFILDDDJM_PMMJGEDIIJD_OFFSET))(this, a1);
		}

		::System::Void GKKEGIFCLHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFILDDDJM_GKKEGIFCLHF_OFFSET))(this);
		}

		::System::Void DBBOHMLNDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFILDDDJM_DBBOHMLNDAC_OFFSET))(this);
		}

	};
