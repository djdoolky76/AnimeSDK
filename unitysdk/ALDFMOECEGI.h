#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SpeedLineEffect; }
namespace RPG::GameCore { class TaskContext; }

#define ALDFMOECEGI_CTOR_OFFSET UNITYSDK_OFFSET(0x15562DB0)
#define ALDFMOECEGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15562DC0)
#define ALDFMOECEGI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15562E00)
#define ALDFMOECEGI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15563270)
#define ALDFMOECEGI_TICK_OFFSET UNITYSDK_OFFSET(0x155632C0)

inline static constexpr unsigned int ALDFMOECEGI_TypeDefinitionIndex = 55635;

	class ALDFMOECEGI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SpeedLineEffect* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SpeedLineEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SpeedLineEffect*))((::PBYTE)hIl2Cpp + ALDFMOECEGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDFMOECEGI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDFMOECEGI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDFMOECEGI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ALDFMOECEGI_TICK_OFFSET))(this, a1);
		}

	};
