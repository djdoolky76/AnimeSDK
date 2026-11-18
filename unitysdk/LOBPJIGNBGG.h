#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

class BAANNHAOKEL;
class JCLMLILFGPJ;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class EventArgs; }

#define LOBPJIGNBGG_AONIPEMMPHN_OFFSET UNITYSDK_OFFSET(0x13D09C50)
#define LOBPJIGNBGG_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x13D09EE0)
#define LOBPJIGNBGG_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13D08D90)
#define LOBPJIGNBGG_EJLHFBLGGDO_OFFSET UNITYSDK_OFFSET(0x13D09ED0)
#define LOBPJIGNBGG_FGFJIGMLHMM_OFFSET UNITYSDK_OFFSET(0x13D09AF0)
#define LOBPJIGNBGG_FKKBKCBHAML_OFFSET UNITYSDK_OFFSET(0x13D09D10)
#define LOBPJIGNBGG_IAFFHFIHFNO_OFFSET UNITYSDK_OFFSET(0x13D09C40)
#define LOBPJIGNBGG_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x13D09F80)
#define LOBPJIGNBGG_IPAIABKBEEL_OFFSET UNITYSDK_OFFSET(0x13D09AE0)
#define LOBPJIGNBGG_LDLLGNHDFCE_OFFSET UNITYSDK_OFFSET(0x13D09DC0)
#define LOBPJIGNBGG_LNAPEICLFKE_OFFSET UNITYSDK_OFFSET(0x13D09D20)
#define LOBPJIGNBGG_MGALNDPKPOC_OFFSET UNITYSDK_OFFSET(0x13D09F90)
#define LOBPJIGNBGG_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x13D09C70)
#define LOBPJIGNBGG_NEHFGCKFJKI_OFFSET UNITYSDK_OFFSET(0x13D09AD0)
#define LOBPJIGNBGG_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x13D09FA0)
#define LOBPJIGNBGG_OKKOLFKKDFJ_OFFSET UNITYSDK_OFFSET(0x13D09B10)
#define LOBPJIGNBGG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13D09490)
#define LOBPJIGNBGG_OPGMNEMMKEG_OFFSET UNITYSDK_OFFSET(0x13D09B00)
#define LOBPJIGNBGG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x13D09610)
#define LOBPJIGNBGG_PNHOEKAMEBN_OFFSET UNITYSDK_OFFSET(0x13D09C60)
#define LOBPJIGNBGG_START_OFFSET UNITYSDK_OFFSET(0x13D09220)
#define LOBPJIGNBGG__CTOR_OFFSET UNITYSDK_OFFSET(0x13D09A60)

inline static constexpr unsigned int LOBPJIGNBGG_TypeDefinitionIndex = 55166;

class LOBPJIGNBGG : public ::FJCAJJEAJPC
{
public:
	::Nap::NapECS::EcsFilter* _ANNENECICIE_k__BackingField; // 0x40
	::Nap::NapECS::EcsFilter* _IEJFEIIHOJD_k__BackingField; // 0x48
	::MoleMole::UIHollowChessboard3DModelController* MFIEHKKEPAO; // 0x50
	::Nap::NapECS::EcsFilter* _GCNLOFNHHPC_k__BackingField; // 0x58
	::Nap::NapECS::EcsFilter* _NDLOBGLHGDG_k__BackingField; // 0x60
	::Nap::NapECS::EcsFilter* _NAEJGNJHAGN_k__BackingField; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBPJIGNBGG__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_ONDESTROY_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NEHFGCKFJKI(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_NEHFGCKFJKI_OFFSET))(this, EGEGIMGMJHN);
	}

	::Nap::NapECS::EcsFilter* IPAIABKBEEL()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_IPAIABKBEEL_OFFSET))(this);
	}

	::Nap::NapECS::EcsFilter* FGFJIGMLHMM()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_FGFJIGMLHMM_OFFSET))(this);
	}

	::System::Void OPGMNEMMKEG(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_OPGMNEMMKEG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OKKOLFKKDFJ(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_OKKOLFKKDFJ_OFFSET))(this, KOIBHLHLMFC);
	}

	::Nap::NapECS::EcsFilter* IAFFHFIHFNO()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_IAFFHFIHFNO_OFFSET))(this);
	}

	::Nap::NapECS::EcsFilter* AONIPEMMPHN()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_AONIPEMMPHN_OFFSET))(this);
	}

	::System::Void PNHOEKAMEBN(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_PNHOEKAMEBN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void FKKBKCBHAML(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_FKKBKCBHAML_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void LNAPEICLFKE(::BAANNHAOKEL* AOFAGECOBKL)
	{
		return ((::System::Void(*)(::BAANNHAOKEL*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_LNAPEICLFKE_OFFSET))(AOFAGECOBKL);
	}

	static ::System::Void LDLLGNHDFCE(::JCLMLILFGPJ* GBELIHABEDH)
	{
		return ((::System::Void(*)(::JCLMLILFGPJ*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_LDLLGNHDFCE_OFFSET))(GBELIHABEDH);
	}

	::System::Void EJLHFBLGGDO(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_EJLHFBLGGDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_IFHNMAGGFAE_OFFSET))(this);
	}

	::Nap::NapECS::EcsFilter* MGALNDPKPOC()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_MGALNDPKPOC_OFFSET))(this);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBPJIGNBGG_NIGDIMFIAEJ_OFFSET))(this);
	}
};
