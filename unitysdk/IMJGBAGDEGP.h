#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class IEIGLAPKDNK;
namespace RPG::GameCore { class ModifyTeamBoostPoint; }
namespace RPG::GameCore { class TaskContext; }

#define IMJGBAGDEGP_CTOR_OFFSET UNITYSDK_OFFSET(0x164DC840)
#define IMJGBAGDEGP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164DC900)
#define IMJGBAGDEGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164DC9A0)
#define IMJGBAGDEGP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164DCCF0)
#define IMJGBAGDEGP_TICK_OFFSET UNITYSDK_OFFSET(0x164DCD40)

inline static constexpr unsigned int IMJGBAGDEGP_TypeDefinitionIndex = 55222;

	class IMJGBAGDEGP : public ::GELIALJDFBL
	{
	public:
		::IEIGLAPKDNK* MFFNFOHJGGL; // 0x18
		::RPG::GameCore::ModifyTeamBoostPoint* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyTeamBoostPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyTeamBoostPoint*))((::PBYTE)hIl2Cpp + IMJGBAGDEGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJGBAGDEGP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJGBAGDEGP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJGBAGDEGP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMJGBAGDEGP_TICK_OFFSET))(this, a1);
		}

	};
