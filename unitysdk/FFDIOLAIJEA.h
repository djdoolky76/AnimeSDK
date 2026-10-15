#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PauseMusicVisualEffect; }
namespace RPG::GameCore { class TaskContext; }

#define FFDIOLAIJEA_AAEBOHOAGKN_OFFSET UNITYSDK_OFFSET(0x15732EF0)
#define FFDIOLAIJEA_CTOR_OFFSET UNITYSDK_OFFSET(0x15732D80)
#define FFDIOLAIJEA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15732DB0)

inline static constexpr unsigned int FFDIOLAIJEA_TypeDefinitionIndex = 53059;

	class FFDIOLAIJEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseMusicVisualEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseMusicVisualEffect*))((::PBYTE)hIl2Cpp + FFDIOLAIJEA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDIOLAIJEA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AAEBOHOAGKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDIOLAIJEA_AAEBOHOAGKN_OFFSET))(this);
		}

	};
