#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Main_ElfEntityDestory; }
namespace RPG::GameCore { class TaskContext; }

#define LNLDAFONHPG_CTOR_OFFSET UNITYSDK_OFFSET(0xC047B50)
#define LNLDAFONHPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC047B80)
#define LNLDAFONHPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC047D20)

inline static constexpr unsigned int LNLDAFONHPG_TypeDefinitionIndex = 53267;

	class LNLDAFONHPG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_ElfEntityDestory* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_ElfEntityDestory*))((::PBYTE)hIl2Cpp + LNLDAFONHPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLDAFONHPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLDAFONHPG_ONTASKRESET_OFFSET))(this);
		}

	};
