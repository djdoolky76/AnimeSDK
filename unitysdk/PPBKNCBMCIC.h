#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StartStageBGM; }
namespace RPG::GameCore { class TaskContext; }

#define PPBKNCBMCIC_CTOR_OFFSET UNITYSDK_OFFSET(0xC3732A0)
#define PPBKNCBMCIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3732B0)
#define PPBKNCBMCIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3732F0)
#define PPBKNCBMCIC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC3734B0)
#define PPBKNCBMCIC_TICK_OFFSET UNITYSDK_OFFSET(0xC373500)

inline static constexpr unsigned int PPBKNCBMCIC_TypeDefinitionIndex = 58728;

	class PPBKNCBMCIC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::StartStageBGM* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartStageBGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartStageBGM*))((::PBYTE)hIl2Cpp + PPBKNCBMCIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBKNCBMCIC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBKNCBMCIC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBKNCBMCIC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPBKNCBMCIC_TICK_OFFSET))(this, a1);
		}

	};
