#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PlayMusicVisualEffect; }
namespace RPG::GameCore { class TaskContext; }

#define FHBEEOHLHPC_CTOR_OFFSET UNITYSDK_OFFSET(0x16691BE0)
#define FHBEEOHLHPC_JKDLGPBDNLL_OFFSET UNITYSDK_OFFSET(0x16691D50)
#define FHBEEOHLHPC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16691C10)

inline static constexpr unsigned int FHBEEOHLHPC_TypeDefinitionIndex = 54261;

	class FHBEEOHLHPC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMusicVisualEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMusicVisualEffect*))((::PBYTE)hIl2Cpp + FHBEEOHLHPC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBEEOHLHPC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JKDLGPBDNLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBEEOHLHPC_JKDLGPBDNLL_OFFSET))(this);
		}

	};
