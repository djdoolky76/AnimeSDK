#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetFollowLightDeviceDamp; }
namespace RPG::GameCore { class TaskContext; }

#define CKMHOHCHPIA_CTOR_OFFSET UNITYSDK_OFFSET(0xD764360)
#define CKMHOHCHPIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD764400)
#define CKMHOHCHPIA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD764370)
#define CKMHOHCHPIA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD764440)
#define CKMHOHCHPIA_TICK_OFFSET UNITYSDK_OFFSET(0xD764490)

inline static constexpr unsigned int CKMHOHCHPIA_TypeDefinitionIndex = 52775;

	class CKMHOHCHPIA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetFollowLightDeviceDamp* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFollowLightDeviceDamp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFollowLightDeviceDamp*))((::PBYTE)hIl2Cpp + CKMHOHCHPIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHOHCHPIA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHOHCHPIA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKMHOHCHPIA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKMHOHCHPIA_TICK_OFFSET))(this, a1);
		}

	};
