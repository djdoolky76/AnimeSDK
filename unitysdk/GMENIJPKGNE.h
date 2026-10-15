#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_ResetForceExitCombat; }
namespace RPG::GameCore { class TaskContext; }

#define GMENIJPKGNE_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABFBD0)
#define GMENIJPKGNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ABFC00)
#define GMENIJPKGNE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15ABFC50)

inline static constexpr unsigned int GMENIJPKGNE_TypeDefinitionIndex = 52250;

	class GMENIJPKGNE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ResetForceExitCombat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ResetForceExitCombat*))((::PBYTE)hIl2Cpp + GMENIJPKGNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMENIJPKGNE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMENIJPKGNE_ONTASKRESET_OFFSET))(this);
		}

	};
