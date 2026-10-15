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

#define APBGLILPKOH_BDEOEIHAGED_OFFSET UNITYSDK_OFFSET(0x158CBD10)
#define APBGLILPKOH_CTOR_OFFSET UNITYSDK_OFFSET(0x158CD1F0)
#define APBGLILPKOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158CC650)
#define APBGLILPKOH_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x158CBA60)
#define APBGLILPKOH_HFEKFKLCPHJ_OFFSET UNITYSDK_OFFSET(0x158CC590)
#define APBGLILPKOH_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x158CC790)
#define APBGLILPKOH_HPHBAPJKFOH_1_OFFSET UNITYSDK_OFFSET(0x158CC0B0)
#define APBGLILPKOH_HPHBAPJKFOH_OFFSET UNITYSDK_OFFSET(0x158CBE00)
#define APBGLILPKOH_JMNODNLAOKK_OFFSET UNITYSDK_OFFSET(0x158CD030)
#define APBGLILPKOH_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0x158CBEC0)
#define APBGLILPKOH_KPJGDHLENIP_2_OFFSET UNITYSDK_OFFSET(0x158CC190)
#define APBGLILPKOH_KPJGDHLENIP_3_OFFSET UNITYSDK_OFFSET(0x158CC410)
#define APBGLILPKOH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158CBA80)
#define APBGLILPKOH_LBGOPNCDABJ_OFFSET UNITYSDK_OFFSET(0x158CC390)
#define APBGLILPKOH_MGAKBFCDHCJ_OFFSET UNITYSDK_OFFSET(0x158CC8C0)
#define APBGLILPKOH_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x158CBA70)

inline static constexpr unsigned int APBGLILPKOH_TypeDefinitionIndex = 53609;

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
