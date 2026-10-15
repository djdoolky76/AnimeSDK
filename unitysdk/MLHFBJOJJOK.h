#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayMissionTalk; }
namespace RPG::GameCore { class PlayRandomMissionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLHFBJOJJOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A8320)
#define MLHFBJOJJOK_DHLDAJPIPIN_OFFSET UNITYSDK_OFFSET(0xB9A8900)
#define MLHFBJOJJOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9A8500)
#define MLHFBJOJJOK_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0xB9A88B0)
#define MLHFBJOJJOK_OFGFLFEBPJM_OFFSET UNITYSDK_OFFSET(0xB9A8760)
#define MLHFBJOJJOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9A85C0)
#define MLHFBJOJJOK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9A8680)
#define MLHFBJOJJOK_TICK_OFFSET UNITYSDK_OFFSET(0xB9A86D0)

inline static constexpr unsigned int MLHFBJOJJOK_TypeDefinitionIndex = 58277;

	class MLHFBJOJJOK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayRandomMissionTalk* OFKGLJOAMLD; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::PlayMissionTalk*>* CALBINJGJAL; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Single MPIEDKJHMDN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayRandomMissionTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayRandomMissionTalk*))((::PBYTE)hIl2Cpp + MLHFBJOJJOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHFBJOJJOK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHFBJOJJOK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHFBJOJJOK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MLHFBJOJJOK_TICK_OFFSET))(this, a1);
		}

		::System::Void KPAOCJEJCNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHFBJOJJOK_KPAOCJEJCNA_OFFSET))(this);
		}

		::System::Void OFGFLFEBPJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHFBJOJJOK_OFGFLFEBPJM_OFFSET))(this);
		}

		::System::Void DHLDAJPIPIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLHFBJOJJOK_DHLDAJPIPIN_OFFSET))(this, a1);
		}

	};
