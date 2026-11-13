#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SortTargets; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGPKDLCHPHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB10E0)
#define LGPKDLCHPHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BCB1240)
#define LGPKDLCHPHL_HEGNDMHLBGN_OFFSET UNITYSDK_OFFSET(0x1BCB2440)
#define LGPKDLCHPHL_OHBBIFDAMMG_OFFSET UNITYSDK_OFFSET(0x1BCB2430)
#define LGPKDLCHPHL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BCB1420)
#define LGPKDLCHPHL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1BCB1F50)
#define LGPKDLCHPHL_TICK_OFFSET UNITYSDK_OFFSET(0x1BCB1FA0)

inline static constexpr unsigned int LGPKDLCHPHL_TypeDefinitionIndex = 56832;

	class LGPKDLCHPHL : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x18
		::RPG::GameCore::SortTargets* OFKGLJOAMLD; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLOMOEJJCIK; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* FBAGEMHGIIB; // 0x38
		::KFELGAIGHAP* FNLJDEPHGFK; // 0x40
		::System::Boolean BGALIKOEDMJ; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SortTargets* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SortTargets*))((::PBYTE)hIl2Cpp + LGPKDLCHPHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPKDLCHPHL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPKDLCHPHL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPKDLCHPHL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LGPKDLCHPHL_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::SortTargets* OHBBIFDAMMG()
		{
			return ((::RPG::GameCore::SortTargets*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPKDLCHPHL_OHBBIFDAMMG_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* HEGNDMHLBGN()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGPKDLCHPHL_HEGNDMHLBGN_OFFSET))(this);
		}

	};
