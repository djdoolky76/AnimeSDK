#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CakeRaceWaitVoteEnd; }
namespace RPG::GameCore { class TaskContext; }

#define AKLBILAJCNN_CTOR_OFFSET UNITYSDK_OFFSET(0x12CD1270)
#define AKLBILAJCNN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CD1280)
#define AKLBILAJCNN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CD1440)
#define AKLBILAJCNN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CD16A0)
#define AKLBILAJCNN_TICK_OFFSET UNITYSDK_OFFSET(0x12CD16F0)
#define AKLBILAJCNN__ONTASKBEGIN_B__4_0_OFFSET UNITYSDK_OFFSET(0x12CD1750)

inline static constexpr unsigned int AKLBILAJCNN_TypeDefinitionIndex = 52627;

	class AKLBILAJCNN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CakeRaceWaitVoteEnd* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CakeRaceWaitVoteEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CakeRaceWaitVoteEnd*))((::PBYTE)hIl2Cpp + AKLBILAJCNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLBILAJCNN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLBILAJCNN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLBILAJCNN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKLBILAJCNN_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLBILAJCNN__ONTASKBEGIN_B__4_0_OFFSET))(this);
		}

	};
