#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetUltraSkillAssetPreload; }
namespace RPG::GameCore { class TaskContext; }

#define CDADKKAHDEH_CTOR_OFFSET UNITYSDK_OFFSET(0xC75B000)
#define CDADKKAHDEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC75B030)
#define CDADKKAHDEH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC75B070)

inline static constexpr unsigned int CDADKKAHDEH_TypeDefinitionIndex = 55584;

	class CDADKKAHDEH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUltraSkillAssetPreload* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUltraSkillAssetPreload*))((::PBYTE)hIl2Cpp + CDADKKAHDEH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDADKKAHDEH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDADKKAHDEH_ONTASKBEGIN_OFFSET))(this);
		}

	};
