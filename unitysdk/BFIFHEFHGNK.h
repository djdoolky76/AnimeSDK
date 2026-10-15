#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FiveDimAddGlobalTimeScale; }
namespace RPG::GameCore { class TaskContext; }

#define BFIFHEFHGNK_CTOR_OFFSET UNITYSDK_OFFSET(0xB1630E0)
#define BFIFHEFHGNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB163110)

inline static constexpr unsigned int BFIFHEFHGNK_TypeDefinitionIndex = 52826;

	class BFIFHEFHGNK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScale* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FiveDimAddGlobalTimeScale*))((::PBYTE)hIl2Cpp + BFIFHEFHGNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIFHEFHGNK_ONTASKBEGIN_OFFSET))(this);
		}

	};
