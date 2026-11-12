#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/ILBattleHUDVisibilitySource.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ANOMGJFGFLE;
class BENKEDNFOGH;
class DDOPGDEICED;
class EKFMIDBJDIA;
class FMPCODLIOLG;
class GNMCMJDIMAA;
class NNACFBFOEPM;
class PMJDPBEPJJC;
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }

#define OGDMOJLFAHO_AJOGGFDADDL_OFFSET UNITYSDK_OFFSET(0xC7101B0)
#define OGDMOJLFAHO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC710B10)
#define OGDMOJLFAHO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC710C90)
#define OGDMOJLFAHO_BBMBJPIPHEL_OFFSET UNITYSDK_OFFSET(0xC710910)
#define OGDMOJLFAHO_BHBHABIGGDI_OFFSET UNITYSDK_OFFSET(0xC70F650)
#define OGDMOJLFAHO_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0xC70F600)
#define OGDMOJLFAHO_CGODLBJDKBI_OFFSET UNITYSDK_OFFSET(0xC70F4C0)
#define OGDMOJLFAHO_CJLPNEEMPHG_OFFSET UNITYSDK_OFFSET(0xC70FD10)
#define OGDMOJLFAHO_CTOR_OFFSET UNITYSDK_OFFSET(0xC710DF0)
#define OGDMOJLFAHO_DBPMIPLMDJJ_OFFSET UNITYSDK_OFFSET(0xC70FBE0)
#define OGDMOJLFAHO_FFFJAIDNGNO_OFFSET UNITYSDK_OFFSET(0xC710440)
#define OGDMOJLFAHO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC70F550)
#define OGDMOJLFAHO_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xC70F5A0)
#define OGDMOJLFAHO_HKGPJBPHFHH_OFFSET UNITYSDK_OFFSET(0xC70FA00)
#define OGDMOJLFAHO_IEBDNJDHIHB_OFFSET UNITYSDK_OFFSET(0xC710680)
#define OGDMOJLFAHO_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0xC710820)
#define OGDMOJLFAHO_JAAELAPGLDJ_OFFSET UNITYSDK_OFFSET(0xC70F510)
#define OGDMOJLFAHO_JNPKENBNPBP_OFFSET UNITYSDK_OFFSET(0xC710210)
#define OGDMOJLFAHO_KJBAHMJOFMA_OFFSET UNITYSDK_OFFSET(0xC70F6E0)
#define OGDMOJLFAHO_LBDCMEDGIIG_OFFSET UNITYSDK_OFFSET(0xC710A50)
#define OGDMOJLFAHO_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xC70F800)
#define OGDMOJLFAHO_MFICELODDPI_OFFSET UNITYSDK_OFFSET(0xC70F3E0)
#define OGDMOJLFAHO_NOCNKIIDKAB_OFFSET UNITYSDK_OFFSET(0xC7105E0)
#define OGDMOJLFAHO_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xC70F6A0)
#define OGDMOJLFAHO_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0xC710050)
#define OGDMOJLFAHO_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC70F730)
#define OGDMOJLFAHO_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC70F980)
#define OGDMOJLFAHO_PEEBOKOOLGO_OFFSET UNITYSDK_OFFSET(0xC710540)
#define OGDMOJLFAHO_PKCLAJHGKEE_OFFSET UNITYSDK_OFFSET(0xC70FCB0)
#define OGDMOJLFAHO__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC70FBA0)
#define OGDMOJLFAHO__ONBIND_OFFSET UNITYSDK_OFFSET(0xC70EFB0)
#define OGDMOJLFAHO__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC70FB00)
#define OGDMOJLFAHO__ONTICK_OFFSET UNITYSDK_OFFSET(0xC7102F0)
#define OGDMOJLFAHO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC70F930)
#define OGDMOJLFAHO___ONBATTLEMONSTERHUDUIPANELALPHACHANGE_B__35_0_OFFSET UNITYSDK_OFFSET(0xC710EB0)

inline static constexpr unsigned int OGDMOJLFAHO_TypeDefinitionIndex = 73735;

	class OGDMOJLFAHO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::CanvasGroup* LPKHFHGFLNE; // 0x60
		::UnityEngine::Transform* DGMBAECGICN; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ILBattleHUDVisibilitySource, ::System::Boolean>* PDOKAHICGIK; // 0x70
		::DDOPGDEICED* OBMEMEPCBGB; // 0x78
		::ANOMGJFGFLE* MHGBKJGLFBF; // 0x80
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
		::UnityEngine::Transform* HIGKIILCPEP; // 0x90
		::GNMCMJDIMAA* LABPDFILCKI; // 0x98
		::PMJDPBEPJJC* MNJLKAKENOD; // 0xA0
		::NNACFBFOEPM* HLOHDNAIJGK; // 0xA8
		::BENKEDNFOGH* PDJEACHIIGE; // 0xB0
		::RPG::GameCore::TeamType AHJJPBGGOMK; // 0xB8
		::System::Single LLEAJIENJKP; // 0xBC
		::System::Boolean GANONNBLMBC; // 0xC0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO__ONBIND_OFFSET))(this);
		}

		::ANOMGJFGFLE* CGODLBJDKBI()
		{
			return ((::ANOMGJFGFLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_CGODLBJDKBI_OFFSET))(this);
		}

		::DDOPGDEICED* JAAELAPGLDJ()
		{
			return ((::DDOPGDEICED*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_JAAELAPGLDJ_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_GET_INDEX_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_GET_TRANS_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_CGDNPIJGNNK_OFFSET))(this);
		}

		::RPG::GameCore::TeamType BHBHABIGGDI()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_BHBHABIGGDI_OFFSET))(this);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Void KJBAHMJOFMA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_KJBAHMJOFMA_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OGDMOJLFAHO__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void DBPMIPLMDJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_DBPMIPLMDJJ_OFFSET))(this);
		}

		::System::Void MFICELODDPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_MFICELODDPI_OFFSET))(this);
		}

		::System::Void PKCLAJHGKEE(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_PKCLAJHGKEE_OFFSET))(this, a1);
		}

		::System::Void CJLPNEEMPHG(::RPG::Client::ILBattleHUDVisibilitySource a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ILBattleHUDVisibilitySource, ::System::Boolean))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_CJLPNEEMPHG_OFFSET))(this, a1, a2);
		}

		::System::Void OGPAMKGAGJF(::RPG::GameCore::EntityRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_OGPAMKGAGJF_OFFSET))(this, a1);
		}

		::System::Void AJOGGFDADDL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_AJOGGFDADDL_OFFSET))(this, a1);
		}

		::System::Void JNPKENBNPBP(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_JNPKENBNPBP_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGDMOJLFAHO__ONTICK_OFFSET))(this, a1);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void PEEBOKOOLGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_PEEBOKOOLGO_OFFSET))(this);
		}

		::System::Void NOCNKIIDKAB(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_NOCNKIIDKAB_OFFSET))(this, a1);
		}

		::System::Void FFFJAIDNGNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_FFFJAIDNGNO_OFFSET))(this);
		}

		::System::Void HKGPJBPHFHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_HKGPJBPHFHH_OFFSET))(this);
		}

		::RPG::GameCore::EventManager* IEBDNJDHIHB()
		{
			return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_IEBDNJDHIHB_OFFSET))(this);
		}

		::System::Void IPMGACIGPOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_IPMGACIGPOE_OFFSET))(this, a1);
		}

		::System::Void BBMBJPIPHEL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_BBMBJPIPHEL_OFFSET))(this, a1);
		}

		::System::Void LBDCMEDGIIG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_LBDCMEDGIIG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDMOJLFAHO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Boolean __OnBattleMonsterHUDUIPanelAlphaChange_b__35_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OGDMOJLFAHO___ONBATTLEMONSTERHUDUIPANELALPHACHANGE_B__35_0_OFFSET))(this, a1);
		}

	};
