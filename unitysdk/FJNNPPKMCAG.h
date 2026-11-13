#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
class HCEAOCCCDIB;
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJNNPPKMCAG_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0x1AA8C360)
#define FJNNPPKMCAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA8C350)
#define FJNNPPKMCAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA8CB50)
#define FJNNPPKMCAG_IPACMBDGMBD_OFFSET UNITYSDK_OFFSET(0x1AA8C7F0)
#define FJNNPPKMCAG_IPKNOCPECCK_OFFSET UNITYSDK_OFFSET(0x1AA8C9B0)
#define FJNNPPKMCAG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AA8C3B0)
#define FJNNPPKMCAG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AA8CAA0)
#define FJNNPPKMCAG_TICK_OFFSET UNITYSDK_OFFSET(0x1AA8CAF0)

inline static constexpr unsigned int FJNNPPKMCAG_TypeDefinitionIndex = 59400;

	class FJNNPPKMCAG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::BNBOAMEBAOE* JLMAKNFAEBH; // 0x20
		::HCEAOCCCDIB* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HCEAOCCCDIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HCEAOCCCDIB*))((::PBYTE)hIl2Cpp + FJNNPPKMCAG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + FJNNPPKMCAG_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNNPPKMCAG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void IPKNOCPECCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNNPPKMCAG_IPKNOCPECCK_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* IPACMBDGMBD(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + FJNNPPKMCAG_IPACMBDGMBD_OFFSET))(a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNNPPKMCAG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJNNPPKMCAG_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNNPPKMCAG_DISPOSE_OFFSET))(this);
		}

	};
