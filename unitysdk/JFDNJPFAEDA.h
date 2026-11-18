#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CDNGFHNAGKM;
class DGLCCLCLNHC;
class GDBLOLGLAJN;
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define JFDNJPFAEDA_ABFAPPKENFF_OFFSET UNITYSDK_OFFSET(0x1383D0E0)
#define JFDNJPFAEDA_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1383D2A0)
#define JFDNJPFAEDA_GLHNPGOIAIM_OFFSET UNITYSDK_OFFSET(0x1383C8F0)
#define JFDNJPFAEDA_JLMOFJMBAMN_OFFSET UNITYSDK_OFFSET(0x1383D050)
#define JFDNJPFAEDA_KACPFFAEGBE_OFFSET UNITYSDK_OFFSET(0x1383CDB0)
#define JFDNJPFAEDA_LFKPJOGCNNJ_OFFSET UNITYSDK_OFFSET(0x1383CC60)
#define JFDNJPFAEDA_MAFILDLKCMH_OFFSET UNITYSDK_OFFSET(0x1383C770)
#define JFDNJPFAEDA_MIIHEKIIBDO_OFFSET UNITYSDK_OFFSET(0x1383CFC0)
#define JFDNJPFAEDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1383C710)

inline static constexpr unsigned int JFDNJPFAEDA_TypeDefinitionIndex = 51839;

class JFDNJPFAEDA : public ::System::Object
{
public:
	::DGLCCLCLNHC* GIPAEJLBCPM; // 0x10
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* IPNBLOIANBJ; // 0x18
	::System::Collections::Generic::Queue_1<::CDNGFHNAGKM*>* GJBJGDDCPFF; // 0x20
	::System::Single MOIJLGPJGKN; // 0x28
	::System::UInt32 EBLLOAONOIP; // 0x2C
	::System::Single FPIPCJGDNCN; // 0x30
	::System::Single DCIOGBJOODB; // 0x34
	::System::Single JMMCCINJLEP; // 0x38
	::System::Single MLHHNPGGKLJ; // 0x3C
	::System::Single BLIHHFBOGDJ; // 0x40
	::System::Single DFLAKBILOOC; // 0x44

	::System::Void _ctor(::System::UInt32 ECKMPOAABAL, ::DGLCCLCLNHC* AAAOBMJBAIL, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* IPNBLOIANBJ, ::System::Collections::Generic::Queue_1<::CDNGFHNAGKM*>* MNAGMNHGLAB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DGLCCLCLNHC*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*, ::System::Collections::Generic::Queue_1<::CDNGFHNAGKM*>*))((::PBYTE)hIl2Cpp + JFDNJPFAEDA__CTOR_OFFSET))(this, ECKMPOAABAL, AAAOBMJBAIL, IPNBLOIANBJ, MNAGMNHGLAB);
	}

	::System::Boolean MAFILDLKCMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDNJPFAEDA_MAFILDLKCMH_OFFSET))(this);
	}

	::System::Void LFKPJOGCNNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDNJPFAEDA_LFKPJOGCNNJ_OFFSET))(this);
	}

	::System::Void GLHNPGOIAIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDNJPFAEDA_GLHNPGOIAIM_OFFSET))(this);
	}

	::System::Void KACPFFAEGBE(::System::UInt32 HDGIELLOOEF, ::GDBLOLGLAJN* BKGJCJODGNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::GDBLOLGLAJN*))((::PBYTE)hIl2Cpp + JFDNJPFAEDA_KACPFFAEGBE_OFFSET))(this, HDGIELLOOEF, BKGJCJODGNK);
	}

	::System::Boolean JLMOFJMBAMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDNJPFAEDA_JLMOFJMBAMN_OFFSET))(this);
	}

	::System::Void ABFAPPKENFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDNJPFAEDA_ABFAPPKENFF_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFDNJPFAEDA_DFJPMOOOLHM_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void MIIHEKIIBDO(::CDNGFHNAGKM* HNOGOACBONK)
	{
		return ((::System::Void(*)(::PVOID, ::CDNGFHNAGKM*))((::PBYTE)hIl2Cpp + JFDNJPFAEDA_MIIHEKIIBDO_OFFSET))(this, HNOGOACBONK);
	}
};
