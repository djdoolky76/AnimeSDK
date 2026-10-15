#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DeployPuzzleFinished; }
namespace RPG::GameCore { class TaskContext; }

#define LGCCNGGLHBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB68EAE0)
#define LGCCNGGLHBC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB68EB10)

inline static constexpr unsigned int LGCCNGGLHBC_TypeDefinitionIndex = 58071;

	class LGCCNGGLHBC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DeployPuzzleFinished* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DeployPuzzleFinished*))((::PBYTE)hIl2Cpp + LGCCNGGLHBC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCCNGGLHBC_ONTASKBEGIN_OFFSET))(this);
		}

	};
