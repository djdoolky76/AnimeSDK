#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharaStoryMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveStopData; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define LPCLNJFNJCL_ANGALAPEPCJ_OFFSET UNITYSDK_OFFSET(0xB813A90)
#define LPCLNJFNJCL_CTOR_OFFSET UNITYSDK_OFFSET(0xB813D40)
#define LPCLNJFNJCL_DBBOHMLNDAC_OFFSET UNITYSDK_OFFSET(0xB813CE0)
#define LPCLNJFNJCL_DGLJOKNNDFL_OFFSET UNITYSDK_OFFSET(0xB812D80)
#define LPCLNJFNJCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB812DA0)
#define LPCLNJFNJCL_FGFFJBEKHBO_OFFSET UNITYSDK_OFFSET(0xB813B10)
#define LPCLNJFNJCL_GET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xB812D50)
#define LPCLNJFNJCL_GKKEGIFCLHF_OFFSET UNITYSDK_OFFSET(0xB813CA0)
#define LPCLNJFNJCL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB813540)
#define LPCLNJFNJCL_JMNODNLAOKK_OFFSET UNITYSDK_OFFSET(0xB813490)
#define LPCLNJFNJCL_KFNNNEBIFLL_OFFSET UNITYSDK_OFFSET(0xB812D70)
#define LPCLNJFNJCL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB812DF0)
#define LPCLNJFNJCL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB812EE0)
#define LPCLNJFNJCL_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xB813B50)
#define LPCLNJFNJCL_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0xB813580)
#define LPCLNJFNJCL_PMMJGEDIIJD_OFFSET UNITYSDK_OFFSET(0xB813C50)
#define LPCLNJFNJCL_SET_CURRENTMOVESTATE_OFFSET UNITYSDK_OFFSET(0xB812D60)

inline static constexpr unsigned int LPCLNJFNJCL_TypeDefinitionIndex = 53621;

	class LPCLNJFNJCL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::RPGTools::Timeline::CharacterStoryMoveStopData* IGHAHBNLIJA; // 0x18
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x20
		::UnityEngine::Animator* APPGGMLEPLN; // 0x28
		::RPG::GameCore::AdventureCharacterController* KMAHMFPKIOI; // 0x30
		::UnityEngine::Vector3 JAJPGBCPEND; // 0x38
		::RPG::GameCore::CharaStoryMoveState _CurrentMoveState_k__BackingField; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CharaStoryMoveState get_CurrentMoveState()
		{
			return ((::RPG::GameCore::CharaStoryMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_GET_CURRENTMOVESTATE_OFFSET))(this);
		}

		::System::Void set_CurrentMoveState(::RPG::GameCore::CharaStoryMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharaStoryMoveState))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_SET_CURRENTMOVESTATE_OFFSET))(this, a1);
		}

		::System::Single KFNNNEBIFLL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_KFNNNEBIFLL_OFFSET))(this);
		}

		::System::String* DGLJOKNNDFL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_DGLJOKNNDFL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPGTools::Timeline::CharacterStoryMoveStopData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveStopData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 JMNODNLAOKK(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_JMNODNLAOKK_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_MOCPCLHLAHK_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* ANGALAPEPCJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_ANGALAPEPCJ_OFFSET))(this);
		}

		::System::Void FGFFJBEKHBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_FGFFJBEKHBO_OFFSET))(this);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void PMMJGEDIIJD(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_PMMJGEDIIJD_OFFSET))(this, a1);
		}

		::System::Void GKKEGIFCLHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_GKKEGIFCLHF_OFFSET))(this);
		}

		::System::Void DBBOHMLNDAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPCLNJFNJCL_DBBOHMLNDAC_OFFSET))(this);
		}

	};
