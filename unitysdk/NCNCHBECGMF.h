#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ModifyCoolDown; }
namespace RPG::GameCore { class TaskContext; }

#define NCNCHBECGMF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB10CF0)
#define NCNCHBECGMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB10D00)
#define NCNCHBECGMF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB10D40)
#define NCNCHBECGMF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB11240)
#define NCNCHBECGMF_TICK_OFFSET UNITYSDK_OFFSET(0xBB11290)

inline static constexpr unsigned int NCNCHBECGMF_TypeDefinitionIndex = 55190;

	class NCNCHBECGMF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ModifyCoolDown* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyCoolDown* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyCoolDown*))((::PBYTE)hIl2Cpp + NCNCHBECGMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNCHBECGMF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNCHBECGMF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNCHBECGMF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCNCHBECGMF_TICK_OFFSET))(this, a1);
		}

	};
