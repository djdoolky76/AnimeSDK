#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitForTurnEnd; }

#define DIKIDOJBFJK_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0xF2118C0)
#define DIKIDOJBFJK_BOCMDPBHPLB_OFFSET UNITYSDK_OFFSET(0xF211910)
#define DIKIDOJBFJK_CLLNADEOMLP_OFFSET UNITYSDK_OFFSET(0xF2117C0)
#define DIKIDOJBFJK_CTOR_OFFSET UNITYSDK_OFFSET(0xF211350)
#define DIKIDOJBFJK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF211360)
#define DIKIDOJBFJK_KAKIAHJFAKA_OFFSET UNITYSDK_OFFSET(0xF2113B0)
#define DIKIDOJBFJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF211490)
#define DIKIDOJBFJK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF211670)
#define DIKIDOJBFJK_PDFBFNFBMLF_OFFSET UNITYSDK_OFFSET(0xF211590)
#define DIKIDOJBFJK_TICK_OFFSET UNITYSDK_OFFSET(0xF2116C0)

inline static constexpr unsigned int DIKIDOJBFJK_TypeDefinitionIndex = 58894;

	class DIKIDOJBFJK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitForTurnEnd* OFKGLJOAMLD; // 0x18
		::GELIALJDFBL* JLMAKNFAEBH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Boolean NCDPNHDBKKG; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitForTurnEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitForTurnEnd*))((::PBYTE)hIl2Cpp + DIKIDOJBFJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKIDOJBFJK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKIDOJBFJK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKIDOJBFJK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIKIDOJBFJK_TICK_OFFSET))(this, a1);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + DIKIDOJBFJK_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void PDFBFNFBMLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKIDOJBFJK_PDFBFNFBMLF_OFFSET))(this);
		}

		::System::Void KAKIAHJFAKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKIDOJBFJK_KAKIAHJFAKA_OFFSET))(this);
		}

		::System::Void BOCMDPBHPLB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DIKIDOJBFJK_BOCMDPBHPLB_OFFSET))(this, a1);
		}

		::System::Void CLLNADEOMLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKIDOJBFJK_CLLNADEOMLP_OFFSET))(this);
		}

	};
