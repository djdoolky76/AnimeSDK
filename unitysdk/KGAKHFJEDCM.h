#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ODOJDFGEKFF;
namespace RPG::GameCore { class ReleaseEnvProfileForStory; }
namespace RPG::GameCore { class TaskContext; }

#define KGAKHFJEDCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1770F690)
#define KGAKHFJEDCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1770F6A0)
#define KGAKHFJEDCM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1770F6E0)
#define KGAKHFJEDCM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1770F950)
#define KGAKHFJEDCM_TICK_OFFSET UNITYSDK_OFFSET(0x1770F9A0)

inline static constexpr unsigned int KGAKHFJEDCM_TypeDefinitionIndex = 59638;

	class KGAKHFJEDCM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ReleaseEnvProfileForStory* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ODOJDFGEKFF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ODOJDFGEKFF*))((::PBYTE)hIl2Cpp + KGAKHFJEDCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKHFJEDCM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKHFJEDCM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGAKHFJEDCM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGAKHFJEDCM_TICK_OFFSET))(this, a1);
		}

	};
