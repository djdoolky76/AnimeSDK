#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PlayMissionTalk; }
namespace RPG::GameCore { class PlayRandomMissionTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLHFBJOJJOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB9AE1C0)
#define MLHFBJOJJOK_DHLDAJPIPIN_OFFSET UNITYSDK_OFFSET(0xB9AE7A0)
#define MLHFBJOJJOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9AE3A0)
#define MLHFBJOJJOK_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0xB9AE750)
#define MLHFBJOJJOK_OFGFLFEBPJM_OFFSET UNITYSDK_OFFSET(0xB9AE600)
#define MLHFBJOJJOK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9AE460)
#define MLHFBJOJJOK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9AE520)
#define MLHFBJOJJOK_TICK_OFFSET UNITYSDK_OFFSET(0xB9AE570)

	class MLHFBJOJJOK : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::PlayMissionTalk*>* CALBINJGJAL; // 0x18
		::RPG::GameCore::PlayRandomMissionTalk* OFKGLJOAMLD; // 0x20
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
