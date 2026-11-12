#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MoveMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ABOFILDDDJM;
class FCILKBLLCFJ;
class HLDGDFJDCKL;
class IECNEMPGKJL;
class LPCLNJFNJCL;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline { class CharacterStoryMoveData; }
namespace RPGTools::Timeline { class CharacterStoryMoveSequenceData; }
namespace RPGTools::Timeline { class CharacterStoryMoveStartData; }
namespace RPGTools::Timeline { class CharacterStoryMoveStopData; }
namespace UnityEngine { class Animator; }

#define APBGLILPKOH_BDEOEIHAGED_OFFSET UNITYSDK_OFFSET(0x169F3870)
#define APBGLILPKOH_CTOR_OFFSET UNITYSDK_OFFSET(0x169F4D50)
#define APBGLILPKOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169F41B0)
#define APBGLILPKOH_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x169F35C0)
#define APBGLILPKOH_HFEKFKLCPHJ_OFFSET UNITYSDK_OFFSET(0x169F40F0)
#define APBGLILPKOH_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x169F42F0)
#define APBGLILPKOH_HPHBAPJKFOH_1_OFFSET UNITYSDK_OFFSET(0x169F3C10)
#define APBGLILPKOH_HPHBAPJKFOH_OFFSET UNITYSDK_OFFSET(0x169F3960)
#define APBGLILPKOH_JMNODNLAOKK_OFFSET UNITYSDK_OFFSET(0x169F4B90)
#define APBGLILPKOH_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0x169F3A20)
#define APBGLILPKOH_KPJGDHLENIP_2_OFFSET UNITYSDK_OFFSET(0x169F3CF0)
#define APBGLILPKOH_KPJGDHLENIP_3_OFFSET UNITYSDK_OFFSET(0x169F3F70)
#define APBGLILPKOH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x169F35E0)
#define APBGLILPKOH_LBGOPNCDABJ_OFFSET UNITYSDK_OFFSET(0x169F3EF0)
#define APBGLILPKOH_MGAKBFCDHCJ_OFFSET UNITYSDK_OFFSET(0x169F4420)
#define APBGLILPKOH_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x169F35D0)

inline static constexpr unsigned int APBGLILPKOH_TypeDefinitionIndex = 54773;

	class APBGLILPKOH : public ::System::Object
	{
	public:
		::HLDGDFJDCKL* DAFMDPOGBCA; // 0x10
		::System::Boolean _Active_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBGLILPKOH_CTOR_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APBGLILPKOH_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_Active(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APBGLILPKOH_SET_ACTIVE_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::RPGTools::Timeline::CharacterStoryMoveData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + APBGLILPKOH_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KPJGDHLENIP_1(::RPGTools::Timeline::CharacterStoryMoveSequenceData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveSequenceData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + APBGLILPKOH_KPJGDHLENIP_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KPJGDHLENIP_2(::RPGTools::Timeline::CharacterStoryMoveStartData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveStartData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + APBGLILPKOH_KPJGDHLENIP_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KPJGDHLENIP_3(::RPGTools::Timeline::CharacterStoryMoveStopData* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterStoryMoveStopData*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + APBGLILPKOH_KPJGDHLENIP_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBGLILPKOH_DISPOSE_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBGLILPKOH_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void BDEOEIHAGED(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + APBGLILPKOH_BDEOEIHAGED_OFFSET))(this, a1);
		}

		::System::Void MGAKBFCDHCJ(::RPG::GameCore::CharacterInputData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + APBGLILPKOH_MGAKBFCDHCJ_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 JMNODNLAOKK(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + APBGLILPKOH_JMNODNLAOKK_OFFSET))(this, a1, a2);
		}

		::IECNEMPGKJL* HPHBAPJKFOH(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2, ::RPGTools::Timeline::CharacterStoryMoveData_MoveMode a3)
		{
			return ((::IECNEMPGKJL*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::CharacterStoryMoveData_MoveMode))((::PBYTE)hIl2Cpp + APBGLILPKOH_HPHBAPJKFOH_OFFSET))(this, a1, a2, a3);
		}

		::FCILKBLLCFJ* HPHBAPJKFOH_1(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
		{
			return ((::FCILKBLLCFJ*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + APBGLILPKOH_HPHBAPJKFOH_1_OFFSET))(this, a1, a2);
		}

		::ABOFILDDDJM* LBGOPNCDABJ(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2, ::RPGTools::Timeline::CharacterStoryMoveData_MoveMode a3)
		{
			return ((::ABOFILDDDJM*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::CharacterStoryMoveData_MoveMode))((::PBYTE)hIl2Cpp + APBGLILPKOH_LBGOPNCDABJ_OFFSET))(this, a1, a2, a3);
		}

		::LPCLNJFNJCL* HFEKFKLCPHJ(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
		{
			return ((::LPCLNJFNJCL*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + APBGLILPKOH_HFEKFKLCPHJ_OFFSET))(this, a1, a2);
		}

	};
