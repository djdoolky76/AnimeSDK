#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CampTypeConfig; }
namespace MoleMole::Config { class CampTypeConfig_CampTypeItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIOLOAIPOFB_AJNEMAMECGE_OFFSET UNITYSDK_OFFSET(0x148F68E0)
#define EIOLOAIPOFB_BAPCLBPOJCI_OFFSET UNITYSDK_OFFSET(0x148F6030)
#define EIOLOAIPOFB_BBIPDFEMLGK_OFFSET UNITYSDK_OFFSET(0x148F73E0)
#define EIOLOAIPOFB_BMEIOJFMOMN_OFFSET UNITYSDK_OFFSET(0x148F6460)
#define EIOLOAIPOFB_BNONHKAPJKN_OFFSET UNITYSDK_OFFSET(0x148F7B70)
#define EIOLOAIPOFB_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x148F7810)
#define EIOLOAIPOFB_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x148F7A60)
#define EIOLOAIPOFB_DJBJKHBOCKH_OFFSET UNITYSDK_OFFSET(0x148F6C80)
#define EIOLOAIPOFB_FBJONHAGIAF_OFFSET UNITYSDK_OFFSET(0x148F7030)
#define EIOLOAIPOFB_HFOACGADHIG_OFFSET UNITYSDK_OFFSET(0x148F64A0)
#define EIOLOAIPOFB_ILAFALNHODA_OFFSET UNITYSDK_OFFSET(0x148F8320)
#define EIOLOAIPOFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x148F5F70)

inline static constexpr unsigned int EIOLOAIPOFB_TypeDefinitionIndex = 51057;

class EIOLOAIPOFB : public ::System::Object
{
public:
	static ::Il2CppArray<::Il2CppArray<::System::Object*>*>** StaticGet_EJLCNIBIHOF()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(EIOLOAIPOFB_TypeDefinitionIndex)->GetStaticField(0x3ABB0);
	}
	static ::MoleMole::Config::CampTypeConfig_CampTypeItem** StaticGet_PKGLDPMIKBG()
	{
		return (::MoleMole::Config::CampTypeConfig_CampTypeItem**)Il2CppClass::FromTypeDefinitionIndex(EIOLOAIPOFB_TypeDefinitionIndex)->GetStaticField(0x3ABB8);
	}
	// static const ::System::UInt32 IMHJCFOAGLA = 0x5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIOLOAIPOFB__CCTOR_OFFSET))();
	}

	static ::System::Single BAPCLBPOJCI(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA, ::System::Single ELHMOANKHFM)
	{
		return ((::System::Single(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType, ::System::Single))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_BAPCLBPOJCI_OFFSET))(PFFPGLPMIEM, LKCPOACOIPA, ELHMOANKHFM);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::CampType>* HFOACGADHIG(::MoleMole::Config::CampType OLNAFBAENGH, ::MoleMole::Config::TeamRelationship EMNDHDGCAEI)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::CampType>*(*)(::MoleMole::Config::CampType, ::MoleMole::Config::TeamRelationship))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_HFOACGADHIG_OFFSET))(OLNAFBAENGH, EMNDHDGCAEI);
	}

	static ::System::Single DJBJKHBOCKH(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA)
	{
		return ((::System::Single(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_DJBJKHBOCKH_OFFSET))(PFFPGLPMIEM, LKCPOACOIPA);
	}

	static ::System::Boolean BMEIOJFMOMN(::MoleMole::Config::CampType PFFPGLPMIEM)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_BMEIOJFMOMN_OFFSET))(PFFPGLPMIEM);
	}

	static ::System::Single FBJONHAGIAF(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA)
	{
		return ((::System::Single(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_FBJONHAGIAF_OFFSET))(PFFPGLPMIEM, LKCPOACOIPA);
	}

	static ::System::Single BBIPDFEMLGK(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA, ::System::Single BDEDDEGJFKL)
	{
		return ((::System::Single(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType, ::System::Single))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_BBIPDFEMLGK_OFFSET))(PFFPGLPMIEM, LKCPOACOIPA, BDEDDEGJFKL);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::MoleMole::Config::TeamRelationship AJNEMAMECGE(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA)
	{
		return ((::MoleMole::Config::TeamRelationship(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_AJNEMAMECGE_OFFSET))(PFFPGLPMIEM, LKCPOACOIPA);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Void BNONHKAPJKN(::MoleMole::Config::CampTypeConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::MoleMole::Config::CampTypeConfig*))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_BNONHKAPJKN_OFFSET))(DFMKILICPFB);
	}

	static ::System::Single ILAFALNHODA(::MoleMole::Config::CampType PFFPGLPMIEM, ::MoleMole::Config::CampType LKCPOACOIPA)
	{
		return ((::System::Single(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_ILAFALNHODA_OFFSET))(PFFPGLPMIEM, LKCPOACOIPA);
	}
};
