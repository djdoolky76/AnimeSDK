#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/SoldierLineupPatrolStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FCIHBKGHGJJ;
class FOOIINCDBFA;
namespace RPG::GameCore { class AdvNPCSoldierLineupPatrol; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MKENMOHJNCP_AKELIEJDCMF_OFFSET UNITYSDK_OFFSET(0xC24CAF0)
#define MKENMOHJNCP_APHLOGECIGC_OFFSET UNITYSDK_OFFSET(0xC24CF30)
#define MKENMOHJNCP_CCLFOHHICIN_OFFSET UNITYSDK_OFFSET(0xC24D4C0)
#define MKENMOHJNCP_CTOR_OFFSET UNITYSDK_OFFSET(0xC24C6F0)
#define MKENMOHJNCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC24C870)
#define MKENMOHJNCP_GBNEKPBANKD_OFFSET UNITYSDK_OFFSET(0xC24D0D0)
#define MKENMOHJNCP_GHOFJOKJJJJ_OFFSET UNITYSDK_OFFSET(0xC24D480)
#define MKENMOHJNCP_HNAFFAKGBOA_OFFSET UNITYSDK_OFFSET(0xC24D990)
#define MKENMOHJNCP_IEKAAMLLPMB_OFFSET UNITYSDK_OFFSET(0xC24D820)
#define MKENMOHJNCP_IGENLOHIEOP_OFFSET UNITYSDK_OFFSET(0xC24CFA0)
#define MKENMOHJNCP_JAFPAPJCGPK_OFFSET UNITYSDK_OFFSET(0xC24CDC0)
#define MKENMOHJNCP_KEODHKCPDHL_OFFSET UNITYSDK_OFFSET(0xC24D880)
#define MKENMOHJNCP_MBBNNJPDGEL_OFFSET UNITYSDK_OFFSET(0xC24D780)
#define MKENMOHJNCP_MKOODMEOPGC_OFFSET UNITYSDK_OFFSET(0xC24D610)
#define MKENMOHJNCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC24C930)
#define MKENMOHJNCP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC24CB80)
#define MKENMOHJNCP_POBDIHFFIJE_OFFSET UNITYSDK_OFFSET(0xC24D900)
#define MKENMOHJNCP_TICK_OFFSET UNITYSDK_OFFSET(0xC24CCC0)

inline static constexpr unsigned int MKENMOHJNCP_TypeDefinitionIndex = 53550;

	class MKENMOHJNCP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x18
		::RPG::GameCore::AdventureCharacterController* EEMOFHKBEBO; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::FOOIINCDBFA* EIJAMKAKADD; // 0x30
		::FCIHBKGHGJJ* PCGBEAMFBEC; // 0x38
		::UnityEngine::Vector3 IDABEOEFDHE; // 0x40
		::UnityEngine::Vector3 IKKNJMJCDOJ; // 0x4C
		::RPG::GameCore::CharacterMotionFlag ODBOHHKMIDP; // 0x58
		::RPG::GameCore::SoldierLineupPatrolStatus CPPNFCBEJLK; // 0x5C
		::System::Boolean HHBGOBMFMML; // 0x60
		::System::Boolean KJCJMICBBEC; // 0x61
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 DINLADADEPH; // 0x64
		::UnityEngine::Vector3 LOHCJHEHNLF; // 0x70
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0x7C
		::UnityEngine::Vector3 AANPAEBECKM; // 0x88
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCSoldierLineupPatrol* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCSoldierLineupPatrol*))((::PBYTE)hIl2Cpp + MKENMOHJNCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKENMOHJNCP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKENMOHJNCP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKENMOHJNCP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKENMOHJNCP_TICK_OFFSET))(this, a1);
		}

		::System::Void APHLOGECIGC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MKENMOHJNCP_APHLOGECIGC_OFFSET))(this, a1);
		}

		::System::Void IGENLOHIEOP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MKENMOHJNCP_IGENLOHIEOP_OFFSET))(this, a1);
		}

		::RPG::GameCore::SoldierLineupPatrolStatus GHOFJOKJJJJ()
		{
			return ((::RPG::GameCore::SoldierLineupPatrolStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MKENMOHJNCP_GHOFJOKJJJJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 CCLFOHHICIN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MKENMOHJNCP_CCLFOHHICIN_OFFSET))(this);
		}

		::System::Void MKOODMEOPGC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKENMOHJNCP_MKOODMEOPGC_OFFSET))(this, a1);
		}

		::System::Void MBBNNJPDGEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKENMOHJNCP_MBBNNJPDGEL_OFFSET))(this);
		}

		::System::Void AKELIEJDCMF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKENMOHJNCP_AKELIEJDCMF_OFFSET))(this, a1);
		}

		::System::Void JAFPAPJCGPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKENMOHJNCP_JAFPAPJCGPK_OFFSET))(this);
		}

		::System::Void IEKAAMLLPMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKENMOHJNCP_IEKAAMLLPMB_OFFSET))(this);
		}

		::System::Void GBNEKPBANKD(::UnityEngine::Vector3 a1, ::RPG::GameCore::CharacterMotionFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + MKENMOHJNCP_GBNEKPBANKD_OFFSET))(this, a1, a2);
		}

		::System::Void KEODHKCPDHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKENMOHJNCP_KEODHKCPDHL_OFFSET))(this);
		}

		::System::Void POBDIHFFIJE(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + MKENMOHJNCP_POBDIHFFIJE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HNAFFAKGBOA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MKENMOHJNCP_HNAFFAKGBOA_OFFSET))(this);
		}

	};
