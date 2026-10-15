#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharaStoryMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline::CharacterStoryMove { class StoryMoveSequenceClip; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define FCILKBLLCFJ_ANGALAPEPCJ_OFFSET UNITYSDK_OFFSET(0x156B7330)
#define FCILKBLLCFJ_ANJEEPLLDAK_OFFSET UNITYSDK_OFFSET(0x156B75C0)
#define FCILKBLLCFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x156B7930)
#define FCILKBLLCFJ_DBBOHMLNDAC_OFFSET UNITYSDK_OFFSET(0x156B7560)
#define FCILKBLLCFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156B6740)
#define FCILKBLLCFJ_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0x156B7370)
#define FCILKBLLCFJ_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x156B6720)
#define FCILKBLLCFJ_GKKEGIFCLHF_OFFSET UNITYSDK_OFFSET(0x156B7520)
#define FCILKBLLCFJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x156B6C90)
#define FCILKBLLCFJ_JMNODNLAOKK_OFFSET UNITYSDK_OFFSET(0x156B6BE0)
#define FCILKBLLCFJ_KFPCLHFEDPG_OFFSET UNITYSDK_OFFSET(0x156B7850)
#define FCILKBLLCFJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x156B6790)
#define FCILKBLLCFJ_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0x156B6880)
#define FCILKBLLCFJ_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x156B73B0)
#define FCILKBLLCFJ_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0x156B6E20)
#define FCILKBLLCFJ_PMMJGEDIIJD_OFFSET UNITYSDK_OFFSET(0x156B7470)
#define FCILKBLLCFJ_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0x156B6730)

inline static constexpr unsigned int FCILKBLLCFJ_TypeDefinitionIndex = 53617;

	class FCILKBLLCFJ : public ::System::Object
	{
	public:
		::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::StoryMoveSequenceClip*>* KNFHBBDGLPC; // 0x10
		::UnityEngine::Animator* APPGGMLEPLN; // 0x18
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x20
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x28
		::RPG::GameCore::AdventureCharacterController* KMAHMFPKIOI; // 0x30
		::UnityEngine::Vector3 JAJPGBCPEND; // 0x38
		::System::Int32 LACDJEIHOIF; // 0x44
		::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CharaStoryMoveState get_CurrentMoveState()
		{
			return ((::RPG::GameCore::CharaStoryMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_GET_CURRENTMOVESTATE_OFFSET))(this);
		}

		::System::Void set_CurrentMoveState(::RPG::GameCore::CharaStoryMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharaStoryMoveState))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_SET_CURRENTMOVESTATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP_1(::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::StoryMoveSequenceClip*>* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPGTools::Timeline::CharacterStoryMove::StoryMoveSequenceClip*>*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_KPJGDHLENIP_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 JMNODNLAOKK(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_JMNODNLAOKK_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_MOCPCLHLAHK_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* ANGALAPEPCJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_ANGALAPEPCJ_OFFSET))(this);
		}

		::System::Void FGFFJBEKHBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_FGFFJBEKHBO_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void PMMJGEDIIJD(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_PMMJGEDIIJD_OFFSET))(this, a1);
		}

		::System::Void GKKEGIFCLHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_GKKEGIFCLHF_OFFSET))(this);
		}

		::System::Void DBBOHMLNDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_DBBOHMLNDAC_OFFSET))(this);
		}

		::System::Void ANJEEPLLDAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_ANJEEPLLDAK_OFFSET))(this);
		}

		::System::Void KFPCLHFEDPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCILKBLLCFJ_KFPCLHFEDPG_OFFSET))(this);
		}

	};
