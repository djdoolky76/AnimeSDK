#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class AHNHEANMAML;
class JMIGPHLOLAJ;
class MBJCLLBMALO;
class PNHAEMFHHEB;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define GNJIHMFNPDK_AKMELGGANFF_OFFSET UNITYSDK_OFFSET(0x17A1BE30)
#define GNJIHMFNPDK_BBGNDFEHCCG_OFFSET UNITYSDK_OFFSET(0x17A1BD20)
#define GNJIHMFNPDK_BCPMLGDFHKC_OFFSET UNITYSDK_OFFSET(0x17A1BB40)
#define GNJIHMFNPDK_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x17A1BD30)
#define GNJIHMFNPDK_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x17A1AF90)
#define GNJIHMFNPDK_FDEDHIKLNGJ_OFFSET UNITYSDK_OFFSET(0x17A1BF70)
#define GNJIHMFNPDK_GOFNBDKDNDJ_OFFSET UNITYSDK_OFFSET(0x17A1BB30)
#define GNJIHMFNPDK_IBJGIHENGLK_OFFSET UNITYSDK_OFFSET(0x17A1BF80)
#define GNJIHMFNPDK_JDMKNIMHNHI_OFFSET UNITYSDK_OFFSET(0x17A1BDD0)
#define GNJIHMFNPDK_JLGBHHKBLDN_OFFSET UNITYSDK_OFFSET(0x17A1B9F0)
#define GNJIHMFNPDK_MGALNDPKPOC_OFFSET UNITYSDK_OFFSET(0x17A1BEC0)
#define GNJIHMFNPDK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x17A1B730)
#define GNJIHMFNPDK_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x17A1BEE0)
#define GNJIHMFNPDK_NOIDGDDALLJ_OFFSET UNITYSDK_OFFSET(0x17A1BED0)
#define GNJIHMFNPDK_OKBLLANPDKG_OFFSET UNITYSDK_OFFSET(0x17A1B7D0)
#define GNJIHMFNPDK_OPGMNEMMKEG_OFFSET UNITYSDK_OFFSET(0x17A1BE20)
#define GNJIHMFNPDK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x17A1B4D0)
#define GNJIHMFNPDK_START_OFFSET UNITYSDK_OFFSET(0x17A1B420)
#define GNJIHMFNPDK__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1B660)

inline static constexpr unsigned int GNJIHMFNPDK_TypeDefinitionIndex = 43842;

class GNJIHMFNPDK : public ::FJCAJJEAJPC
{
public:
	::Nap::NapECS::EcsFilter* _HKOJBILCEOP_k__BackingField; // 0x40
	::System::Action_2<::AHNHEANMAML*, ::MBJCLLBMALO*>* _KKIBJDKBDAH_k__BackingField; // 0x48
	::Nap::NapECS::EcsFilter* _GCNLOFNHHPC_k__BackingField; // 0x50
	::MoleMole::HollowChessboard::HollowCell DOJNNJDFCOG; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJIHMFNPDK__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_START_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OKBLLANPDKG(::AHNHEANMAML* FHEJELHALJE, ::MBJCLLBMALO* HNHFLCJLMMO)
	{
		return ((::System::Void(*)(::PVOID, ::AHNHEANMAML*, ::MBJCLLBMALO*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_OKBLLANPDKG_OFFSET))(this, FHEJELHALJE, HNHFLCJLMMO);
	}

	static ::System::Void JLGBHHKBLDN(::JMIGPHLOLAJ* IDGBKCLIBEK, ::PNHAEMFHHEB* KNENMPAIHBJ)
	{
		return ((::System::Void(*)(::JMIGPHLOLAJ*, ::PNHAEMFHHEB*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_JLGBHHKBLDN_OFFSET))(IDGBKCLIBEK, KNENMPAIHBJ);
	}

	::System::Action_2<::AHNHEANMAML*, ::MBJCLLBMALO*>* GOFNBDKDNDJ()
	{
		return ((::System::Action_2<::AHNHEANMAML*, ::MBJCLLBMALO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_GOFNBDKDNDJ_OFFSET))(this);
	}

	::System::Void BCPMLGDFHKC(::Nap::NapECS::EcsEntity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_BCPMLGDFHKC_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void BBGNDFEHCCG(::System::Action_2<::AHNHEANMAML*, ::MBJCLLBMALO*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::AHNHEANMAML*, ::MBJCLLBMALO*>*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_BBGNDFEHCCG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JDMKNIMHNHI(::Nap::NapECS::EcsEntity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_JDMKNIMHNHI_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void OPGMNEMMKEG(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_OPGMNEMMKEG_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void AKMELGGANFF(::JMIGPHLOLAJ* IDGBKCLIBEK, ::PNHAEMFHHEB* KNENMPAIHBJ)
	{
		return ((::System::Void(*)(::JMIGPHLOLAJ*, ::PNHAEMFHHEB*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_AKMELGGANFF_OFFSET))(IDGBKCLIBEK, KNENMPAIHBJ);
	}

	::Nap::NapECS::EcsFilter* MGALNDPKPOC()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_MGALNDPKPOC_OFFSET))(this);
	}

	::Nap::NapECS::EcsFilter* NOIDGDDALLJ()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_NOIDGDDALLJ_OFFSET))(this);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Void FDEDHIKLNGJ(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_FDEDHIKLNGJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IBJGIHENGLK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNJIHMFNPDK_IBJGIHENGLK_OFFSET))(this, KOIBHLHLMFC);
	}
};
