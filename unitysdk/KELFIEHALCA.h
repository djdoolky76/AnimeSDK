#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::GameCore { class ShowGroupChallengeSelectPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KELFIEHALCA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC075A0)
#define KELFIEHALCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC075B0)
#define KELFIEHALCA_IFKLFCCMEFM_OFFSET UNITYSDK_OFFSET(0xBC07B10)
#define KELFIEHALCA_JLGLCHJBGGD_OFFSET UNITYSDK_OFFSET(0xBC07C70)
#define KELFIEHALCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC075F0)
#define KELFIEHALCA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC07A60)
#define KELFIEHALCA_PHCDDBLBBFP_OFFSET UNITYSDK_OFFSET(0xBC07D50)
#define KELFIEHALCA_TICK_OFFSET UNITYSDK_OFFSET(0xBC07AB0)
#define KELFIEHALCA__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xBC07FA0)
#define KELFIEHALCA__ONTASKBEGIN_B__2_1_OFFSET UNITYSDK_OFFSET(0xBC08180)

inline static constexpr unsigned int KELFIEHALCA_TypeDefinitionIndex = 54433;

	class KELFIEHALCA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowGroupChallengeSelectPage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGroupChallengeSelectPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGroupChallengeSelectPage*))((::PBYTE)hIl2Cpp + KELFIEHALCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELFIEHALCA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELFIEHALCA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELFIEHALCA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KELFIEHALCA_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeGroupData* IFKLFCCMEFM()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELFIEHALCA_IFKLFCCMEFM_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* JLGLCHJBGGD()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELFIEHALCA_JLGLCHJBGGD_OFFSET))(this);
		}

		::RPG::Client::ChallengeGroupData* PHCDDBLBBFP()
		{
			return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + KELFIEHALCA_PHCDDBLBBFP_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__2_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + KELFIEHALCA__ONTASKBEGIN_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__2_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELFIEHALCA__ONTASKBEGIN_B__2_1_OFFSET))(this);
		}

	};
