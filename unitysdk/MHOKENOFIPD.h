#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DeployMapPoseSwitcher; }
namespace RPG::GameCore { class TaskContext; }

#define MHOKENOFIPD_CTOR_OFFSET UNITYSDK_OFFSET(0xB949A70)
#define MHOKENOFIPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB949AA0)

inline static constexpr unsigned int MHOKENOFIPD_TypeDefinitionIndex = 52989;

	class MHOKENOFIPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployMapPoseSwitcher* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployMapPoseSwitcher*))((::PBYTE)hIl2Cpp + MHOKENOFIPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHOKENOFIPD_ONTASKBEGIN_OFFSET))(this);
		}

	};
