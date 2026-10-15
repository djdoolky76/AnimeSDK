#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableFreelookCameraDragMode; }
namespace RPG::GameCore { class TaskContext; }

#define DNMDLLJMKNA_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD89C0)
#define DNMDLLJMKNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FD89F0)

inline static constexpr unsigned int DNMDLLJMKNA_TypeDefinitionIndex = 58106;

	class DNMDLLJMKNA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableFreelookCameraDragMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableFreelookCameraDragMode*))((::PBYTE)hIl2Cpp + DNMDLLJMKNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMDLLJMKNA_ONTASKBEGIN_OFFSET))(this);
		}

	};
