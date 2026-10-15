#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraModeChange; }

#define MIBJIOIHFBN_CTOR_OFFSET UNITYSDK_OFFSET(0xB94E5C0)
#define MIBJIOIHFBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB94E5D0)
#define MIBJIOIHFBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB94E610)
#define MIBJIOIHFBN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB94E7F0)
#define MIBJIOIHFBN_TICK_OFFSET UNITYSDK_OFFSET(0xB94E840)

inline static constexpr unsigned int MIBJIOIHFBN_TypeDefinitionIndex = 53882;

	class MIBJIOIHFBN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::VCameraModeChange* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraModeChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraModeChange*))((::PBYTE)hIl2Cpp + MIBJIOIHFBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBJIOIHFBN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBJIOIHFBN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBJIOIHFBN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIBJIOIHFBN_TICK_OFFSET))(this, a1);
		}

	};
