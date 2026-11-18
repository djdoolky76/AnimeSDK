#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOBHBJLHDLE_IDBJIEIKFPL.h"
#include "unitysdk/JJCKMHMCCAP.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"
#include "unitysdk/System/Object.h"

class DGLCCLCLNHC;
class GDBLOLGLAJN;
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityPlayer; }
namespace System { class Random; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOBHBJLHDLE_AFCAENFHDHJ_OFFSET UNITYSDK_OFFSET(0x15B70970)
#define HOBHBJLHDLE_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x15B70520)
#define HOBHBJLHDLE_JDLEEAJLKLE_OFFSET UNITYSDK_OFFSET(0x15B700E0)
#define HOBHBJLHDLE_JJIGCFNOJIE_OFFSET UNITYSDK_OFFSET(0x15B6FF10)
#define HOBHBJLHDLE_KMLJLCBIEJB_OFFSET UNITYSDK_OFFSET(0x15B6FB80)
#define HOBHBJLHDLE_LKPHFAIMFEM_OFFSET UNITYSDK_OFFSET(0x15B6FAC0)
#define HOBHBJLHDLE_LMHHHEGAMCP_OFFSET UNITYSDK_OFFSET(0x15B70670)
#define HOBHBJLHDLE_MEHKILIKMKC_OFFSET UNITYSDK_OFFSET(0x15B704C0)
#define HOBHBJLHDLE_MGCGFFOGLNJ_OFFSET UNITYSDK_OFFSET(0x15B70850)
#define HOBHBJLHDLE_MPPPLHPHPLC_OFFSET UNITYSDK_OFFSET(0x15B706D0)
#define HOBHBJLHDLE_NIAMIOMLAPB_OFFSET UNITYSDK_OFFSET(0x15B708B0)
#define HOBHBJLHDLE_NLAOHAFNAKE_OFFSET UNITYSDK_OFFSET(0x15B6FDC0)
#define HOBHBJLHDLE_NNGHEMBNNIC_OFFSET UNITYSDK_OFFSET(0x15B6FD60)
#define HOBHBJLHDLE_PCFNAPBAKLO_OFFSET UNITYSDK_OFFSET(0x15B6F910)
#define HOBHBJLHDLE_PIPKDFFEDIM_OFFSET UNITYSDK_OFFSET(0x15B70780)
#define HOBHBJLHDLE_PNMBPLAHHCK_OFFSET UNITYSDK_OFFSET(0x15B70140)
#define HOBHBJLHDLE_PPCJJMFNKOI_OFFSET UNITYSDK_OFFSET(0x15B70800)
#define HOBHBJLHDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6F720)

inline static constexpr unsigned int HOBHBJLHDLE_TypeDefinitionIndex = 56209;

class HOBHBJLHDLE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* NHFLLEOPKJE; // 0x10
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer* FLBNPFGIBGF; // 0x18
	::GDBLOLGLAJN* HCBHGNGHPNB; // 0x20
	::System::Random* MFEPCLGOHPI; // 0x28
	::DGLCCLCLNHC* GIPAEJLBCPM; // 0x30
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* IPNBLOIANBJ; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* JAHFEDGMIKO; // 0x40
	::System::Single KABFOPMCIHI; // 0x48
	::System::Boolean CDNBOAGLPLC; // 0x4C
	::System::Byte _padding0[0x3];
	::System::Single NJIKHGHELHO; // 0x50
	::MoleMole::MiniGame::TartarusHounds::Direction BHFNDCPPHOL; // 0x54
	::System::Int32 CGNEPJMPKCJ; // 0x58
	::JJCKMHMCCAP CAJNIPBNIOJ; // 0x5C
	::System::Single KKDKBCFOIKH; // 0x64
	::HOBHBJLHDLE_IDBJIEIKFPL ENJPJELAABF; // 0x68
	::System::Int32 GDIDHPGIEOE; // 0x6C
	::System::Single PNIOABKDBCH; // 0x70
	::System::Single JBPBMKMHHMF; // 0x74
	::HOBHBJLHDLE_IDBJIEIKFPL EEMOPKCLEGM; // 0x78

	::System::Void _ctor(::System::UInt32 EOGLMAEPALE, ::DGLCCLCLNHC* GIPAEJLBCPM, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* IPNBLOIANBJ, ::System::UInt32 OEIABLJGIMJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DGLCCLCLNHC*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*, ::System::UInt32))((::PBYTE)hIl2Cpp + HOBHBJLHDLE__CTOR_OFFSET))(this, EOGLMAEPALE, GIPAEJLBCPM, IPNBLOIANBJ, OEIABLJGIMJ);
	}

	::System::Boolean PCFNAPBAKLO(::MoleMole::MiniGame::TartarusHounds::Direction DAAEHEHLLLD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_PCFNAPBAKLO_OFFSET))(this, DAAEHEHLLLD);
	}

	::System::Void KMLJLCBIEJB(::System::Single AFKNLNBHEDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_KMLJLCBIEJB_OFFSET))(this, AFKNLNBHEDN);
	}

	::System::Tuple_2<::System::Int32, ::System::Int32>* JJIGCFNOJIE(::MoleMole::MiniGame::TartarusHounds::Direction DAAEHEHLLLD)
	{
		return ((::System::Tuple_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_JJIGCFNOJIE_OFFSET))(this, DAAEHEHLLLD);
	}

	::System::Void JDLEEAJLKLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_JDLEEAJLKLE_OFFSET))(this);
	}

	::System::Void MEHKILIKMKC(::MoleMole::MiniGame::TartarusHounds::Direction DAAEHEHLLLD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_MEHKILIKMKC_OFFSET))(this, DAAEHEHLLLD);
	}

	::System::Void DFJPMOOOLHM(::System::Single AFKNLNBHEDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_DFJPMOOOLHM_OFFSET))(this, AFKNLNBHEDN);
	}

	::System::Single MPPPLHPHPLC(::System::Collections::Generic::List_1<::System::Int32>* BMMPGOIOEOD)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_MPPPLHPHPLC_OFFSET))(this, BMMPGOIOEOD);
	}

	::System::Boolean PIPKDFFEDIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_PIPKDFFEDIM_OFFSET))(this);
	}

	::System::Void PPCJJMFNKOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_PPCJJMFNKOI_OFFSET))(this);
	}

	::MoleMole::MiniGame::TartarusHounds::Direction NNGHEMBNNIC(::HOBHBJLHDLE_IDBJIEIKFPL JKBLDFBGBPK)
	{
		return ((::MoleMole::MiniGame::TartarusHounds::Direction(*)(::PVOID, ::HOBHBJLHDLE_IDBJIEIKFPL))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_NNGHEMBNNIC_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void MGCGFFOGLNJ(::MoleMole::MiniGame::TartarusHounds::Direction DAAEHEHLLLD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_MGCGFFOGLNJ_OFFSET))(this, DAAEHEHLLLD);
	}

	::System::Boolean LKPHFAIMFEM(::MoleMole::MiniGame::TartarusHounds::Direction DAAEHEHLLLD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_LKPHFAIMFEM_OFFSET))(this, DAAEHEHLLLD);
	}

	::System::Void NIAMIOMLAPB(::MoleMole::MiniGame::TartarusHounds::Direction DAAEHEHLLLD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_NIAMIOMLAPB_OFFSET))(this, DAAEHEHLLLD);
	}

	::System::Void NLAOHAFNAKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_NLAOHAFNAKE_OFFSET))(this);
	}

	::System::Void AFCAENFHDHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_AFCAENFHDHJ_OFFSET))(this);
	}

	::System::Single LMHHHEGAMCP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_LMHHHEGAMCP_OFFSET))(this);
	}

	::System::Void PNMBPLAHHCK(::MoleMole::MiniGame::TartarusHounds::Direction DAAEHEHLLLD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction))((::PBYTE)hIl2Cpp + HOBHBJLHDLE_PNMBPLAHHCK_OFFSET))(this, DAAEHEHLLLD);
	}
};
