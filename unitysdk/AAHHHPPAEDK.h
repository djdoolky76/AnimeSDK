#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetFlipperLightDeviceRangeFollowPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define AAHHHPPAEDK_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C69D0)
#define AAHHHPPAEDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0C6B30)
#define AAHHHPPAEDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0C69E0)
#define AAHHHPPAEDK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB0C6B70)
#define AAHHHPPAEDK_TICK_OFFSET UNITYSDK_OFFSET(0xB0C6BC0)

inline static constexpr unsigned int AAHHHPPAEDK_TypeDefinitionIndex = 52774;

	class AAHHHPPAEDK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer*))((::PBYTE)hIl2Cpp + AAHHHPPAEDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHHHPPAEDK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHHHPPAEDK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHHHPPAEDK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AAHHHPPAEDK_TICK_OFFSET))(this, a1);
		}

	};
