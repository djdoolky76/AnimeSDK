#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/HCBHHJOEIAD_Step.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
class IAAOMMGICFK;
class PAFPLKPKMJM;
namespace RPG::GameCore { class TaskContext; }

#define HCBHHJOEIAD_BDGGPAKCCHF_OFFSET UNITYSDK_OFFSET(0x16B59620)
#define HCBHHJOEIAD_CTOR_OFFSET UNITYSDK_OFFSET(0x16B59080)
#define HCBHHJOEIAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B59690)
#define HCBHHJOEIAD_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0x16B59500)
#define HCBHHJOEIAD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B59090)
#define HCBHHJOEIAD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16B59580)
#define HCBHHJOEIAD_TICK_OFFSET UNITYSDK_OFFSET(0x16B59200)

inline static constexpr unsigned int HCBHHJOEIAD_TypeDefinitionIndex = 53816;

	class HCBHHJOEIAD : public ::GELIALJDFBL
	{
	public:
		::PAFPLKPKMJM* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::IAAOMMGICFK* FBOJHNDHFMO; // 0x28
		::HCBHHJOEIAD_Step GLNMMIEPAIO; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PAFPLKPKMJM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PAFPLKPKMJM*))((::PBYTE)hIl2Cpp + HCBHHJOEIAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHHJOEIAD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCBHHJOEIAD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHHJOEIAD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHHJOEIAD_DISPOSE_OFFSET))(this);
		}

		::System::Void JDPGFIBLFOP(::RPG::GameCore::TaskState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState, ::System::Boolean))((::PBYTE)hIl2Cpp + HCBHHJOEIAD_JDPGFIBLFOP_OFFSET))(this, a1, a2);
		}

		::System::Void BDGGPAKCCHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBHHJOEIAD_BDGGPAKCCHF_OFFSET))(this);
		}

	};
