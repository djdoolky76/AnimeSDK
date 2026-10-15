#pragma once
#include "unitysdk/unitysdk.h"
class BNBOAMEBAOE;
class KFELGAIGHAP;
class OCCNBEACINI;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardPerformViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowRewardParams; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define MENKPIJOHDK_AICMAPEKNIO_OFFSET UNITYSDK_OFFSET(0xB8DD1F0)
#define MENKPIJOHDK_BILAMEKGBOK_OFFSET UNITYSDK_OFFSET(0xB8DCF70)
#define MENKPIJOHDK_BJAPBAHEBOL_OFFSET UNITYSDK_OFFSET(0xB8DD260)
#define MENKPIJOHDK_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0xB8DC960)
#define MENKPIJOHDK_CTOR_OFFSET UNITYSDK_OFFSET(0xB8DC8D0)
#define MENKPIJOHDK_DDIGIHDHBKK_OFFSET UNITYSDK_OFFSET(0xB8DD440)
#define MENKPIJOHDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8DCE90)
#define MENKPIJOHDK_KOHEINPFIIA_OFFSET UNITYSDK_OFFSET(0xB8DCC80)
#define MENKPIJOHDK_LJLIAAPFGNE_OFFSET UNITYSDK_OFFSET(0xB8DD320)
#define MENKPIJOHDK_LKFIGNHIONP_OFFSET UNITYSDK_OFFSET(0xB8DD0B0)
#define MENKPIJOHDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8DC9B0)
#define MENKPIJOHDK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8DCCD0)
#define MENKPIJOHDK_PJBOECKKEAP_OFFSET UNITYSDK_OFFSET(0xB8DCD70)

inline static constexpr unsigned int MENKPIJOHDK_TypeDefinitionIndex = 52803;

	class MENKPIJOHDK
	{
	public:
		::BNBOAMEBAOE* JLMAKNFAEBH; // 0x28
		::KFELGAIGHAP* BPEFLFCKDNF; // 0x30
		::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel* CNCHPOLEGAK; // 0x38
		::System::Boolean NOGJFLANINN; // 0x40
		::System::Boolean PJDHPGCCNIB; // 0x41
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OCCNBEACINI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OCCNBEACINI*))((::PBYTE)hIl2Cpp + MENKPIJOHDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + MENKPIJOHDK_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENKPIJOHDK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENKPIJOHDK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENKPIJOHDK_DISPOSE_OFFSET))(this);
		}

		::System::String* KOHEINPFIIA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENKPIJOHDK_KOHEINPFIIA_OFFSET))(this);
		}

		::System::Void BILAMEKGBOK(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + MENKPIJOHDK_BILAMEKGBOK_OFFSET))(this, a1);
		}

		::System::Void AICMAPEKNIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENKPIJOHDK_AICMAPEKNIO_OFFSET))(this);
		}

		::System::Void BJAPBAHEBOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENKPIJOHDK_BJAPBAHEBOL_OFFSET))(this);
		}

		::System::Void LKFIGNHIONP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENKPIJOHDK_LKFIGNHIONP_OFFSET))(this);
		}

		::System::Void PJBOECKKEAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENKPIJOHDK_PJBOECKKEAP_OFFSET))(this);
		}

		::System::Void DDIGIHDHBKK(::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams*))((::PBYTE)hIl2Cpp + MENKPIJOHDK_DDIGIHDHBKK_OFFSET))(this, a1);
		}

		::System::Void LJLIAAPFGNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENKPIJOHDK_LJLIAAPFGNE_OFFSET))(this);
		}

	};
