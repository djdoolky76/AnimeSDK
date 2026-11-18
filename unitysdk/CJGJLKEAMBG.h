#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEBFPNHGPPC.h"
#include "unitysdk/FILPKDPCKBH.h"
#include "unitysdk/JCJPPFPFIGE.h"
#include "unitysdk/JGEJJBMBHFE.h"
#include "unitysdk/NNIMDDHOPMO.h"
#include "unitysdk/ODJBMJLOACF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }

#define CJGJLKEAMBG_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x19A11800)
#define CJGJLKEAMBG_FOFEPAGCDCF_OFFSET UNITYSDK_OFFSET(0x19A12160)
#define CJGJLKEAMBG_GLHNPGOIAIM_OFFSET UNITYSDK_OFFSET(0x19A11AA0)
#define CJGJLKEAMBG_JLMOFJMBAMN_OFFSET UNITYSDK_OFFSET(0x19A12220)
#define CJGJLKEAMBG_LFKPJOGCNNJ_OFFSET UNITYSDK_OFFSET(0x19A126D0)
#define CJGJLKEAMBG_MAFILDLKCMH_OFFSET UNITYSDK_OFFSET(0x19A12400)
#define CJGJLKEAMBG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19A11500)
#define CJGJLKEAMBG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A119B0)

inline static constexpr unsigned int CJGJLKEAMBG_TypeDefinitionIndex = 79773;

class CJGJLKEAMBG : public ::System::Object
{
public:
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* BKCDDOCPLOP; // 0x10
	::FILPKDPCKBH FPIPCJGDNCN; // 0x18
	::ODJBMJLOACF DFLAKBILOOC; // 0x24
	::FEBFPNHGPPC JMMCCINJLEP; // 0x30
	::NNIMDDHOPMO BLIHHFBOGDJ; // 0x3C
	::JCJPPFPFIGE CFBFMAOHHLJ; // 0x48
	::JGEJJBMBHFE DCIOGBJOODB; // 0x54
	::System::Single MLHHNPGGKLJ; // 0x60
	::System::Single MOIJLGPJGKN; // 0x64
	::System::Boolean IODCONPOAFO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGJLKEAMBG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGJLKEAMBG_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CJGJLKEAMBG_DFJPMOOOLHM_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void GLHNPGOIAIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGJLKEAMBG_GLHNPGOIAIM_OFFSET))(this);
	}

	::System::Void FOFEPAGCDCF(::System::Boolean PAEKDIKNAOF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJGJLKEAMBG_FOFEPAGCDCF_OFFSET))(this, PAEKDIKNAOF);
	}

	::System::Boolean JLMOFJMBAMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGJLKEAMBG_JLMOFJMBAMN_OFFSET))(this);
	}

	::System::Boolean MAFILDLKCMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGJLKEAMBG_MAFILDLKCMH_OFFSET))(this);
	}

	::System::Void LFKPJOGCNNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGJLKEAMBG_LFKPJOGCNNJ_OFFSET))(this);
	}
};
