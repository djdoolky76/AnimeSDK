#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ResetVirtualCameraPosByPlayerTalk; }
namespace RPG::GameCore { class TaskContext; }

#define EDLGEAMNAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x140E7860)
#define EDLGEAMNAIL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140E7870)
#define EDLGEAMNAIL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x140E78B0)
#define EDLGEAMNAIL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x140E7F00)
#define EDLGEAMNAIL_TICK_OFFSET UNITYSDK_OFFSET(0x140E7F50)

inline static constexpr unsigned int EDLGEAMNAIL_TypeDefinitionIndex = 59655;

	class EDLGEAMNAIL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetVirtualCameraPosByPlayerTalk*))((::PBYTE)hIl2Cpp + EDLGEAMNAIL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLGEAMNAIL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLGEAMNAIL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLGEAMNAIL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDLGEAMNAIL_TICK_OFFSET))(this, a1);
		}

	};
