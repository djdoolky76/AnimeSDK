#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetCameraConfigPriority; }
namespace RPG::GameCore { class TaskContext; }

#define EGNHIODHCFM_CTOR_OFFSET UNITYSDK_OFFSET(0x17C1B720)
#define EGNHIODHCFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C1B730)
#define EGNHIODHCFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C1B770)
#define EGNHIODHCFM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C1B8F0)
#define EGNHIODHCFM_TICK_OFFSET UNITYSDK_OFFSET(0x17C1B940)

inline static constexpr unsigned int EGNHIODHCFM_TypeDefinitionIndex = 56547;

	class EGNHIODHCFM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetCameraConfigPriority* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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
