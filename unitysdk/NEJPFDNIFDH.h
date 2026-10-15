#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/ONLHJAEPLBB.h"
class BGOBCKLPEMK;
class CFFPEAALCPH;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class MoveToTargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define NEJPFDNIFDH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB68180)
#define NEJPFDNIFDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB68220)
#define NEJPFDNIFDH_FAELOPANPPM_OFFSET UNITYSDK_OFFSET(0xBB68AE0)
#define NEJPFDNIFDH_KDPKEBNOKKC_OFFSET UNITYSDK_OFFSET(0xBB688A0)
#define NEJPFDNIFDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB68270)
#define NEJPFDNIFDH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB68EE0)
#define NEJPFDNIFDH_TICK_OFFSET UNITYSDK_OFFSET(0xBB68F70)

inline static constexpr unsigned int NEJPFDNIFDH_TypeDefinitionIndex = 55228;

	class NEJPFDNIFDH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MoveToTargetList* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::ONLHJAEPLBB EJPILIBEFCB; // 0x28
		::UnityEngine::Animator* JDFCDMAPBFJ; // 0x38
		::BGOBCKLPEMK* JDNLKGBPHDC; // 0x40
		::CFFPEAALCPH* NCABPAPLJCI; // 0x48
		::System::Boolean PFMNLFEOAGO; // 0x50
		::System::Boolean HHCFIHBHPLB; // 0x51
		::System::Byte _padding0[0x2];
		::System::Single NPPEEEAECNJ; // 0x54
		::System::Int32 APNGJPMPMOB; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MoveToTargetList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MoveToTargetList*))((::PBYTE)hIl2Cpp + NEJPFDNIFDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJPFDNIFDH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJPFDNIFDH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJPFDNIFDH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEJPFDNIFDH_TICK_OFFSET))(this, a1);
		}

		::System::Void KDPKEBNOKKC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NEJPFDNIFDH_KDPKEBNOKKC_OFFSET))(this, a1);
		}

		::System::Void FAELOPANPPM(::RPG::GameCore::GameEntityList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + NEJPFDNIFDH_FAELOPANPPM_OFFSET))(this, a1);
		}

	};
