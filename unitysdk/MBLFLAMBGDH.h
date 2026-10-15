#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/UnityEngine/Vector2.h"
class FOPJIACKHCC;
class GOJNGCCBOGI;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class LayoutGroup; }

#define MBLFLAMBGDH_BCAMNAGBDDC_OFFSET UNITYSDK_OFFSET(0xB8612E0)
#define MBLFLAMBGDH_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xB862580)
#define MBLFLAMBGDH_BPNNDDHJPHO_OFFSET UNITYSDK_OFFSET(0xB862410)
#define MBLFLAMBGDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB862740)
#define MBLFLAMBGDH_DBPBLBHLICO_OFFSET UNITYSDK_OFFSET(0xB861340)
#define MBLFLAMBGDH_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xB861580)
#define MBLFLAMBGDH_EAMEBOCOFDA_OFFSET UNITYSDK_OFFSET(0xB860DF0)
#define MBLFLAMBGDH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB861C60)
#define MBLFLAMBGDH_FPAFHCDOEAG_OFFSET UNITYSDK_OFFSET(0xB861D00)
#define MBLFLAMBGDH_GBOPFKBDMLI_OFFSET UNITYSDK_OFFSET(0xB8616C0)
#define MBLFLAMBGDH_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0xB860BF0)
#define MBLFLAMBGDH_GNOAMOOGBAC_OFFSET UNITYSDK_OFFSET(0xB862290)
#define MBLFLAMBGDH_ILAFECOFNLE_OFFSET UNITYSDK_OFFSET(0xB861F10)
#define MBLFLAMBGDH_JCLCJMFLPEN_OFFSET UNITYSDK_OFFSET(0xB861BE0)
#define MBLFLAMBGDH_JFNGFBKKBNF_OFFSET UNITYSDK_OFFSET(0xB861950)
#define MBLFLAMBGDH_JPCHJNIFDEL_OFFSET UNITYSDK_OFFSET(0xB862300)
#define MBLFLAMBGDH_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0xB862210)
#define MBLFLAMBGDH_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xB8617F0)
#define MBLFLAMBGDH_KGPANCMMECP_OFFSET UNITYSDK_OFFSET(0xB8626B0)
#define MBLFLAMBGDH_KLCHBHJPMOP_OFFSET UNITYSDK_OFFSET(0xB862190)
#define MBLFLAMBGDH_LCGCBEJPEAJ_OFFSET UNITYSDK_OFFSET(0xB860C40)
#define MBLFLAMBGDH_LGBGKLNEHFE_OFFSET UNITYSDK_OFFSET(0xB861090)
#define MBLFLAMBGDH_MOCEKPFAPCI_OFFSET UNITYSDK_OFFSET(0xB8614C0)
#define MBLFLAMBGDH_NAPOABGFMJE_OFFSET UNITYSDK_OFFSET(0xB861270)
#define MBLFLAMBGDH_NLNDGOIKOJO_OFFSET UNITYSDK_OFFSET(0xB861F60)
#define MBLFLAMBGDH_OGMJAGMJOPN_OFFSET UNITYSDK_OFFSET(0xB8625F0)
#define MBLFLAMBGDH_PABFOMOCMNA_OFFSET UNITYSDK_OFFSET(0xB862070)
#define MBLFLAMBGDH_PNOLNGLHDML_OFFSET UNITYSDK_OFFSET(0xB861840)
#define MBLFLAMBGDH__ONBIND_OFFSET UNITYSDK_OFFSET(0xB861A20)
#define MBLFLAMBGDH__ONTICK_OFFSET UNITYSDK_OFFSET(0xB861D80)

	class MBLFLAMBGDH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::LayoutGroup* BPPBHGGCBCH; // 0x60
		::UnityEngine::RectTransform* NEEDDJHCCND; // 0x68
		::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x70
		::UnityEngine::Animation* KCOAILOHDND; // 0x78
		::System::String* AMMFAOBBPCN; // 0x80
		::RPG::Client::UIFollow3DTarget* LLBJOCEMNPK; // 0x88
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x90
		::UnityEngine::RectTransform* HACIPINNIOG; // 0x98
		::UnityEngine::CanvasGroup* JNAEPLHBGAN; // 0xA0
		::RPG::GameCore::CharacterVisibleComponent* PLDFJEONENF; // 0xA8
		::UnityEngine::UI::ContentSizeFitter* PFIOEBPHDFI; // 0xB0
		::System::Boolean POGICBHCJIB; // 0xB8
		::System::Boolean MCAPIAKDMAA; // 0xB9
		::System::Boolean HCGJMGFNFBL; // 0xBA
		::System::Byte _padding0[0x1];
		::System::Single IONFONLCDPF; // 0xBC
		::System::Single MFIFOONNJPE; // 0xC0
		::System::Single HBDJCFFDGDD; // 0xC4
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

		::System::Void LGBGKLNEHFE(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_LGBGKLNEHFE_OFFSET))(this, a1);
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

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Boolean JFNGFBKKBNF(::RPG::GameCore::FloatMessageType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FloatMessageType))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_JFNGFBKKBNF_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_EKGCGIDIFJJ_OFFSET))(this);
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

		::System::Void EAMEBOCOFDA(::RPG::GameCore::GameEntity* a1, ::FOPJIACKHCC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::FOPJIACKHCC*))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_EAMEBOCOFDA_OFFSET))(this, a1, a2);
		}

		::System::Void NAPOABGFMJE(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_NAPOABGFMJE_OFFSET))(this, a1);
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

		::System::Boolean NLNDGOIKOJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_NLNDGOIKOJO_OFFSET))(this);
		}

		::System::Void KGPANCMMECP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBLFLAMBGDH_KGPANCMMECP_OFFSET))(this, a1);
		}

	};
