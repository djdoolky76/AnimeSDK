#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetCameraConfigPriority; }
namespace RPG::GameCore { class TaskContext; }

#define EGNHIODHCFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1451ED60)
#define EGNHIODHCFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1451ED70)
#define EGNHIODHCFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1451EDB0)
#define EGNHIODHCFM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1451EF30)
#define EGNHIODHCFM_TICK_OFFSET UNITYSDK_OFFSET(0x1451EF80)

inline static constexpr unsigned int EGNHIODHCFM_TypeDefinitionIndex = 55364;

	class EGNHIODHCFM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetCameraConfigPriority* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCameraConfigPriority* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCameraConfigPriority*))((::PBYTE)hIl2Cpp + EGNHIODHCFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNHIODHCFM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNHIODHCFM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGNHIODHCFM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGNHIODHCFM_TICK_OFFSET))(this, a1);
		}

	};
