#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetCameraRootFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CPJENAGEHHP_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD6D10)
#define CPJENAGEHHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCD6D20)
#define CPJENAGEHHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCD6D60)
#define CPJENAGEHHP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCD6FC0)
#define CPJENAGEHHP_TICK_OFFSET UNITYSDK_OFFSET(0xDCD7010)

inline static constexpr unsigned int CPJENAGEHHP_TypeDefinitionIndex = 55365;

	class CPJENAGEHHP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetCameraRootFollow* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCameraRootFollow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCameraRootFollow*))((::PBYTE)hIl2Cpp + CPJENAGEHHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJENAGEHHP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJENAGEHHP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJENAGEHHP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPJENAGEHHP_TICK_OFFSET))(this, a1);
		}

	};
