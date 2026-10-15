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

#define MKENMOHJNCP_AKELIEJDCMF_OFFSET UNITYSDK_OFFSET(0xB98C770)
#define MKENMOHJNCP_APHLOGECIGC_OFFSET UNITYSDK_OFFSET(0xB98CBB0)
#define MKENMOHJNCP_CCLFOHHICIN_OFFSET UNITYSDK_OFFSET(0xB98D130)
#define MKENMOHJNCP_CTOR_OFFSET UNITYSDK_OFFSET(0xB98C370)
#define MKENMOHJNCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB98C4F0)
#define MKENMOHJNCP_GBNEKPBANKD_OFFSET UNITYSDK_OFFSET(0xB98CD50)
#define MKENMOHJNCP_GHOFJOKJJJJ_OFFSET UNITYSDK_OFFSET(0xB98D0F0)
#define MKENMOHJNCP_HNAFFAKGBOA_OFFSET UNITYSDK_OFFSET(0xB98D600)
#define MKENMOHJNCP_IEKAAMLLPMB_OFFSET UNITYSDK_OFFSET(0xB98D490)
#define MKENMOHJNCP_IGENLOHIEOP_OFFSET UNITYSDK_OFFSET(0xB98CC20)
#define MKENMOHJNCP_JAFPAPJCGPK_OFFSET UNITYSDK_OFFSET(0xB98CA40)
#define MKENMOHJNCP_KEODHKCPDHL_OFFSET UNITYSDK_OFFSET(0xB98D4F0)
#define MKENMOHJNCP_MBBNNJPDGEL_OFFSET UNITYSDK_OFFSET(0xB98D3F0)
#define MKENMOHJNCP_MKOODMEOPGC_OFFSET UNITYSDK_OFFSET(0xB98D280)
#define MKENMOHJNCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB98C5B0)
#define MKENMOHJNCP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB98C800)
#define MKENMOHJNCP_POBDIHFFIJE_OFFSET UNITYSDK_OFFSET(0xB98D570)
#define MKENMOHJNCP_TICK_OFFSET UNITYSDK_OFFSET(0xB98C940)

inline static constexpr unsigned int MKENMOHJNCP_TypeDefinitionIndex = 52444;

	class MKENMOHJNCP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x20
		::RPG::GameCore::AdventureCharacterController* EEMOFHKBEBO; // 0x28
		::FCIHBKGHGJJ* PCGBEAMFBEC; // 0x30
		::FOOIINCDBFA* EIJAMKAKADD; // 0x38
		::System::Boolean HHBGOBMFMML; // 0x40
		::System::Boolean KJCJMICBBEC; // 0x41
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 DINLADADEPH; // 0x44
		::UnityEngine::Vector3 LOHCJHEHNLF; // 0x50
		::UnityEngine::Vector3 IDABEOEFDHE; // 0x5C
		::RPG::GameCore::CharacterMotionFlag ODBOHHKMIDP; // 0x68
		::RPG::GameCore::SoldierLineupPatrolStatus CPPNFCBEJLK; // 0x6C
		::UnityEngine::Vector3 IKKNJMJCDOJ; // 0x70
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
