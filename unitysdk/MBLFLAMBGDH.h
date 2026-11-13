#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/Client/TextID.h"
class BNFKHGEEBGM;
class FOPJIACKHCC;
class GOJNGCCBOGI;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class LayoutGroup; }

#define MBLFLAMBGDH_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0x1B826770)
#define MBLFLAMBGDH_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1B827CA0)
#define MBLFLAMBGDH_BPNNDDHJPHO_OFFSET UNITYSDK_OFFSET(0x1B827B30)
#define MBLFLAMBGDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B827E60)
#define MBLFLAMBGDH_DBPBLBHLICO_OFFSET UNITYSDK_OFFSET(0x1B8267D0)
#define MBLFLAMBGDH_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1B826A10)
#define MBLFLAMBGDH_FPAFHCDOEAG_OFFSET UNITYSDK_OFFSET(0x1B827460)
#define MBLFLAMBGDH_GBOPFKBDMLI_OFFSET UNITYSDK_OFFSET(0x1B826B50)
#define MBLFLAMBGDH_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x1B826560)
#define MBLFLAMBGDH_GNOAMOOGBAC_OFFSET UNITYSDK_OFFSET(0x1B8279B0)
#define MBLFLAMBGDH_ILAFECOFNLE_OFFSET UNITYSDK_OFFSET(0x1B827600)
#define MBLFLAMBGDH_JCLCJMFLPEN_OFFSET UNITYSDK_OFFSET(0x1B827350)
#define MBLFLAMBGDH_JFNGFBKKBNF_OFFSET UNITYSDK_OFFSET(0x1B826DD0)
#define MBLFLAMBGDH_JPCHJNIFDEL_OFFSET UNITYSDK_OFFSET(0x1B827A20)
#define MBLFLAMBGDH_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x1B827830)
#define MBLFLAMBGDH_KGPANCMMECP_OFFSET UNITYSDK_OFFSET(0x1B827DD0)
#define MBLFLAMBGDH_KLCHBHJPMOP_OFFSET UNITYSDK_OFFSET(0x1B827930)
#define MBLFLAMBGDH_LCGCBEJPEAJ_OFFSET UNITYSDK_OFFSET(0x1B8265B0)
#define MBLFLAMBGDH_LFMLAOPMMNA_OFFSET UNITYSDK_OFFSET(0x1B827650)
#define MBLFLAMBGDH_MOCEKPFAPCI_OFFSET UNITYSDK_OFFSET(0x1B826950)
#define MBLFLAMBGDH_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x1B827890)
#define MBLFLAMBGDH_NLNDGOIKOJO_OFFSET UNITYSDK_OFFSET(0x1B827750)
#define MBLFLAMBGDH_OCCIFHOEJMI_OFFSET UNITYSDK_OFFSET(0x1B826C70)
#define MBLFLAMBGDH_OGMJAGMJOPN_OFFSET UNITYSDK_OFFSET(0x1B827D10)
#define MBLFLAMBGDH_PABFOMOCMNA_OFFSET UNITYSDK_OFFSET(0x1B8277A0)
#define MBLFLAMBGDH_PNOLNGLHDML_OFFSET UNITYSDK_OFFSET(0x1B826CC0)
#define MBLFLAMBGDH__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B826EA0)
#define MBLFLAMBGDH__ONTICK_OFFSET UNITYSDK_OFFSET(0x1B8274E0)
#define MBLFLAMBGDH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B8273D0)

inline static constexpr unsigned int MBLFLAMBGDH_TypeDefinitionIndex = 73520;

	class MBLFLAMBGDH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::ContentSizeFitter* PFIOEBPHDFI; // 0x60
		::UnityEngine::UI::LayoutGroup* BPPBHGGCBCH; // 0x68
		::System::String* AMMFAOBBPCN; // 0x70
		::UnityEngine::CanvasGroup* JNAEPLHBGAN; // 0x78
		::UnityEngine::RectTransform* NEEDDJHCCND; // 0x80
		::BNFKHGEEBGM* JGBNJENLKLH; // 0x88
		::RPG::Client::UIFollow3DTarget* LLBJOCEMNPK; // 0x90
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x98
		::UnityEngine::Animation* KCOAILOHDND; // 0xA0
		::System::Single HBDJCFFDGDD; // 0xA8
		::System::Single MFIFOONNJPE; // 0xAC
		::System::Boolean HCGJMGFNFBL; // 0xB0
		::System::Boolean MCAPIAKDMAA; // 0xB1
		::System::Byte _padding0[0x2];
		::System::Single IONFONLCDPF; // 0xB4
		// static const ::System::String* BDACPPLKLGL; // 0x0
		// static const ::System::String* MDNFIMNHAGA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FloatMessageType get_MessageType()
		{
			return ((::RPG::GameCore::FloatMessageType(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_GET_MESSAGETYPE_OFFSET))(this);
		}

		::System::Void LCGCBEJPEAJ(::RPG::GameCore::GameEntity* a1, ::FOPJIACKHCC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::FOPJIACKHCC*))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_LCGCBEJPEAJ_OFFSET))(this, a1, a2);
		}

		::System::Void BCAMNAGBDDC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_BCAMNAGBDDC_OFFSET))(this, a1);
		}

		::System::Void DBPBLBHLICO(::GOJNGCCBOGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_DBPBLBHLICO_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void OCCIFHOEJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_OCCIFHOEJMI_OFFSET))(this);
		}

		::System::Boolean JFNGFBKKBNF(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_JFNGFBKKBNF_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBLFLAMBGDH__ONTICK_OFFSET))(this, a1);
		}

		::System::Void PABFOMOCMNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_PABFOMOCMNA_OFFSET))(this);
		}

		::System::Void KBPMCFICODM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_KBPMCFICODM_OFFSET))(this, a1);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void MOCEKPFAPCI(::GOJNGCCBOGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_MOCEKPFAPCI_OFFSET))(this, a1);
		}

		::System::Void GBOPFKBDMLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_GBOPFKBDMLI_OFFSET))(this);
		}

		::System::Void BPNNDDHJPHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_BPNNDDHJPHO_OFFSET))(this);
		}

		::System::Void JCLCJMFLPEN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_JCLCJMFLPEN_OFFSET))(this, a1);
		}

		::System::Void GNOAMOOGBAC(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_GNOAMOOGBAC_OFFSET))(this, a1, a2);
		}

		::System::Boolean ILAFECOFNLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_ILAFECOFNLE_OFFSET))(this);
		}

		::System::Void JPCHJNIFDEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_JPCHJNIFDEL_OFFSET))(this);
		}

		::System::Void PNOLNGLHDML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_PNOLNGLHDML_OFFSET))(this);
		}

		::System::Void FPAFHCDOEAG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_FPAFHCDOEAG_OFFSET))(this, a1);
		}

		::System::Void KLCHBHJPMOP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_KLCHBHJPMOP_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void OGMJAGMJOPN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_OGMJAGMJOPN_OFFSET))(this, a1);
		}

		::System::Void LFMLAOPMMNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_LFMLAOPMMNA_OFFSET))(this);
		}

		::System::Boolean NLNDGOIKOJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_NLNDGOIKOJO_OFFSET))(this);
		}

		::System::Void KGPANCMMECP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_KGPANCMMECP_OFFSET))(this, a1);
		}

	};
