#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayTrainPartySimpleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define LOFOOCKIMCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5ADBD0)
#define LOFOOCKIMCP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5ADBE0)
#define LOFOOCKIMCP_JDPGFIBLFOP_OFFSET UNITYSDK_OFFSET(0x1A5ADD90)
#define LOFOOCKIMCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A5ADC20)
#define LOFOOCKIMCP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A5ADCF0)
#define LOFOOCKIMCP_TICK_OFFSET UNITYSDK_OFFSET(0x1A5ADD30)

inline static constexpr unsigned int LOFOOCKIMCP_TypeDefinitionIndex = 54580;

	class LOFOOCKIMCP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PlayTrainPartySimpleTalk* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTrainPartySimpleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTrainPartySimpleTalk*))((::PBYTE)hIl2Cpp + LOFOOCKIMCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFOOCKIMCP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFOOCKIMCP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFOOCKIMCP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOFOOCKIMCP_TICK_OFFSET))(this, a1);
		}

		::System::Void JDPGFIBLFOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFOOCKIMCP_JDPGFIBLFOP_OFFSET))(this);
		}

	};
