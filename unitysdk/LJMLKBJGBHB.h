#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralActivityTagContext; }
namespace MoleMole { class UIGeneralActivityTagWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }

#define LJMLKBJGBHB_AMFGDMKCLNA_OFFSET UNITYSDK_OFFSET(0x13CF7BA0)
#define LJMLKBJGBHB_ANELGIJLBED_OFFSET UNITYSDK_OFFSET(0x13CF7220)
#define LJMLKBJGBHB_BHEJALOGIPC_OFFSET UNITYSDK_OFFSET(0x13CF7070)
#define LJMLKBJGBHB_CEBNEMHNDAK_OFFSET UNITYSDK_OFFSET(0x13CF6E30)
#define LJMLKBJGBHB_DAPHJKBBKOE_OFFSET UNITYSDK_OFFSET(0x13CF7990)
#define LJMLKBJGBHB_GBHFNKDKKJF_OFFSET UNITYSDK_OFFSET(0x13CF71C0)
#define LJMLKBJGBHB_GFPLGOKBEBL_OFFSET UNITYSDK_OFFSET(0x13CF7C60)
#define LJMLKBJGBHB_IHJHLLHNGNH_OFFSET UNITYSDK_OFFSET(0x13CF7DF0)
#define LJMLKBJGBHB_KEAAANKCDCI_OFFSET UNITYSDK_OFFSET(0x13CF6A60)
#define LJMLKBJGBHB_LIFPODDEICO_OFFSET UNITYSDK_OFFSET(0x13CF6830)
#define LJMLKBJGBHB_OCEJOCEFEAD_OFFSET UNITYSDK_OFFSET(0x13CF75F0)
#define LJMLKBJGBHB__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF6820)

inline static constexpr unsigned int LJMLKBJGBHB_TypeDefinitionIndex = 65154;

class LJMLKBJGBHB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIGeneralActivityTagWidgetController*>* LAIMAMODMBP; // 0x10
	::UnityEngine::Transform* IBAOOAPBEJI; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralActivityTagWidgetController*>* HMPKKCKNFIH; // 0x20
	::CJIEIHEDMME* LADPIPOMBJM; // 0x28
	::System::Action* KPIIFADECMG; // 0x30
	::MoleMole::UIBaseController* HFOBHFAJFKN; // 0x38
	::System::String* CGCGDHPMABK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMLKBJGBHB__CTOR_OFFSET))(this);
	}

	::System::Void LIFPODDEICO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMLKBJGBHB_LIFPODDEICO_OFFSET))(this);
	}

	::System::Void KEAAANKCDCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMLKBJGBHB_KEAAANKCDCI_OFFSET))(this);
	}

	::System::Void GBHFNKDKKJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMLKBJGBHB_GBHFNKDKKJF_OFFSET))(this);
	}

	::System::Void ANELGIJLBED(::System::Int32 HNMNLDDEPCO, ::System::Int32 LLACPEMDPIF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LJMLKBJGBHB_ANELGIJLBED_OFFSET))(this, HNMNLDDEPCO, LLACPEMDPIF);
	}

	::System::Void OCEJOCEFEAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMLKBJGBHB_OCEJOCEFEAD_OFFSET))(this);
	}

	::System::Void DAPHJKBBKOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMLKBJGBHB_DAPHJKBBKOE_OFFSET))(this);
	}

	::MoleMole::UIGeneralActivityTagWidgetController* BHEJALOGIPC(::MoleMole::UIGeneralActivityTagContext* OELOAHJECDE)
	{
		return ((::MoleMole::UIGeneralActivityTagWidgetController*(*)(::PVOID, ::MoleMole::UIGeneralActivityTagContext*))((::PBYTE)hIl2Cpp + LJMLKBJGBHB_BHEJALOGIPC_OFFSET))(this, OELOAHJECDE);
	}

	::System::Void AMFGDMKCLNA(::MoleMole::UIBaseController* IHCOOKNHPIM, ::UnityEngine::Transform* FBHIPPCJGKJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LJMLKBJGBHB_AMFGDMKCLNA_OFFSET))(this, IHCOOKNHPIM, FBHIPPCJGKJ);
	}

	::MoleMole::UIGeneralActivityTagWidgetController* CEBNEMHNDAK(::UnityEngine::Events::UnityAction* LMMOIODIMNF, ::System::String* FEPFLENPBAP, ::System::Boolean LJJPIHHMAOF)
	{
		return ((::MoleMole::UIGeneralActivityTagWidgetController*(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJMLKBJGBHB_CEBNEMHNDAK_OFFSET))(this, LMMOIODIMNF, FEPFLENPBAP, LJJPIHHMAOF);
	}

	::System::Void GFPLGOKBEBL(::System::Action* KPIIFADECMG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LJMLKBJGBHB_GFPLGOKBEBL_OFFSET))(this, KPIIFADECMG);
	}

	::System::Void IHJHLLHNGNH(::System::Int32 HNMNLDDEPCO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJMLKBJGBHB_IHJHLLHNGNH_OFFSET))(this, HNMNLDDEPCO);
	}
};
