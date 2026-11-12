#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/BossSkillViewType.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/ChangeSource.h"
#include "unitysdk/System/Object.h"
class ENENKPBKLDF;
class EPBKPIMAANC;
class FBAOECBDMIC;
class FiveDimRenderingPanelRuntime;
class HCOGFOGPKHI;
class HNLKNLJBHDD;
class JFAIGANLDBK;
class KGPMLJCDNJK;
class LGGELBFHJIM;
class ODCELNBAEIB;
class OPPNAOHPNGO;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client::TeamTowers { class TeamTowersGamePlayerDamageChangedMessage; }
namespace RPG::Client::TeamTowers { class TeamTowersGameViewModel; }
namespace RPG::Client::TeamTowers { class TeamTowersPVPService; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define JEHEMLENCIE_AJJHBOOPKHP_OFFSET UNITYSDK_OFFSET(0xB96BDB0)
#define JEHEMLENCIE_BAJFGMAIOEI_OFFSET UNITYSDK_OFFSET(0xB969D50)
#define JEHEMLENCIE_BOFNBLMBFIE_OFFSET UNITYSDK_OFFSET(0xB96C5D0)
#define JEHEMLENCIE_BOOKFLGPBLH_OFFSET UNITYSDK_OFFSET(0xB969840)
#define JEHEMLENCIE_CAAIIKNDGAF_OFFSET UNITYSDK_OFFSET(0xB96C040)
#define JEHEMLENCIE_CLMPLMHENGI_OFFSET UNITYSDK_OFFSET(0xB96C900)
#define JEHEMLENCIE_CNDHCJJLEIP_OFFSET UNITYSDK_OFFSET(0xB96C7A0)
#define JEHEMLENCIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB969280)
#define JEHEMLENCIE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9693A0)
#define JEHEMLENCIE_EBNMFCBCLDJ_OFFSET UNITYSDK_OFFSET(0xB96BFB0)
#define JEHEMLENCIE_EONDKHPMDKH_OFFSET UNITYSDK_OFFSET(0xB96B7A0)
#define JEHEMLENCIE_FBFBMJEGEDA_OFFSET UNITYSDK_OFFSET(0xB96B550)
#define JEHEMLENCIE_FLDHPFHLHKP_OFFSET UNITYSDK_OFFSET(0xB96C890)
#define JEHEMLENCIE_GEPKBIOJEGC_OFFSET UNITYSDK_OFFSET(0xB96BA60)
#define JEHEMLENCIE_GET_BOSSROOT_OFFSET UNITYSDK_OFFSET(0xB96C660)
#define JEHEMLENCIE_GET_EDGEROOT_OFFSET UNITYSDK_OFFSET(0xB96C700)
#define JEHEMLENCIE_GET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0xB96C6C0)
#define JEHEMLENCIE_GET_GUIDEEFFECTROOT_OFFSET UNITYSDK_OFFSET(0xB96C6A0)
#define JEHEMLENCIE_GET_LEFTEDGEROOT_OFFSET UNITYSDK_OFFSET(0xB96C720)
#define JEHEMLENCIE_GET_LEFTTOWERRENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0xB96C760)
#define JEHEMLENCIE_GET_LEFTTOWERROOT_OFFSET UNITYSDK_OFFSET(0xB96C640)
#define JEHEMLENCIE_GET_PREVIEWLINEROOT_OFFSET UNITYSDK_OFFSET(0xB96C680)
#define JEHEMLENCIE_GET_RIGHTEDGEROOT_OFFSET UNITYSDK_OFFSET(0xB96C740)
#define JEHEMLENCIE_GET_RIGHTTOWERRENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0xB96C780)
#define JEHEMLENCIE_GET_RIGHTTOWERROOT_OFFSET UNITYSDK_OFFSET(0xB96C620)
#define JEHEMLENCIE_GET_ROBOT3DROOT_OFFSET UNITYSDK_OFFSET(0xB96C6E0)
#define JEHEMLENCIE_GKENPHIHDAG_OFFSET UNITYSDK_OFFSET(0xB9699F0)
#define JEHEMLENCIE_GNIADLGLDMO_OFFSET UNITYSDK_OFFSET(0xB969C40)
#define JEHEMLENCIE_HCOEAKJICFO_OFFSET UNITYSDK_OFFSET(0xB96B500)
#define JEHEMLENCIE_HNCPHOJKHGH_OFFSET UNITYSDK_OFFSET(0xB9694B0)
#define JEHEMLENCIE_IFFADFFBDFM_OFFSET UNITYSDK_OFFSET(0xB969E70)
#define JEHEMLENCIE_IFGBFNDEOFM_OFFSET UNITYSDK_OFFSET(0xB969C90)
#define JEHEMLENCIE_JMKCGPFFDPN_OFFSET UNITYSDK_OFFSET(0xB969740)
#define JEHEMLENCIE_JNPENALIOJK_OFFSET UNITYSDK_OFFSET(0xB96AE00)
#define JEHEMLENCIE_KHNCOEFNABG_OFFSET UNITYSDK_OFFSET(0xB96B5B0)
#define JEHEMLENCIE_KJAJPNEPFND_OFFSET UNITYSDK_OFFSET(0xB96BB10)
#define JEHEMLENCIE_KLDCDJHIEIE_OFFSET UNITYSDK_OFFSET(0xB96B220)
#define JEHEMLENCIE_KLNMBKEMBOG_OFFSET UNITYSDK_OFFSET(0xB96BBA0)
#define JEHEMLENCIE_KPPNKIDJPDO_OFFSET UNITYSDK_OFFSET(0xB96C960)
#define JEHEMLENCIE_LBEBNEEBJIC_OFFSET UNITYSDK_OFFSET(0xB96BE10)
#define JEHEMLENCIE_LNFGOFMPNDN_OFFSET UNITYSDK_OFFSET(0xB96B290)
#define JEHEMLENCIE_MCEGHAEGEOJ_OFFSET UNITYSDK_OFFSET(0xB96C230)
#define JEHEMLENCIE_MOMAHJOABDN_OFFSET UNITYSDK_OFFSET(0xB96B4A0)
#define JEHEMLENCIE_NFDCIPFPLPD_OFFSET UNITYSDK_OFFSET(0xB969BD0)
#define JEHEMLENCIE_NLECHPFKGGN_OFFSET UNITYSDK_OFFSET(0xB969EC0)
#define JEHEMLENCIE_OCOACGHIKDM_OFFSET UNITYSDK_OFFSET(0xB969A90)
#define JEHEMLENCIE_OILHGMNIGBN_OFFSET UNITYSDK_OFFSET(0xB96B1A0)
#define JEHEMLENCIE_OMIFMCILACD_OFFSET UNITYSDK_OFFSET(0xB969530)
#define JEHEMLENCIE_PBMJMAKBIJH_OFFSET UNITYSDK_OFFSET(0xB96C820)
#define JEHEMLENCIE_PBOCGGJEILK_OFFSET UNITYSDK_OFFSET(0xB9697C0)
#define JEHEMLENCIE_SET_BOSSROOT_OFFSET UNITYSDK_OFFSET(0xB96C670)
#define JEHEMLENCIE_SET_EDGEROOT_OFFSET UNITYSDK_OFFSET(0xB96C710)
#define JEHEMLENCIE_SET_EFFECTROOT_OFFSET UNITYSDK_OFFSET(0xB96C6D0)
#define JEHEMLENCIE_SET_GUIDEEFFECTROOT_OFFSET UNITYSDK_OFFSET(0xB96C6B0)
#define JEHEMLENCIE_SET_LEFTEDGEROOT_OFFSET UNITYSDK_OFFSET(0xB96C730)
#define JEHEMLENCIE_SET_LEFTTOWERRENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0xB96C770)
#define JEHEMLENCIE_SET_LEFTTOWERROOT_OFFSET UNITYSDK_OFFSET(0xB96C650)
#define JEHEMLENCIE_SET_PREVIEWLINEROOT_OFFSET UNITYSDK_OFFSET(0xB96C690)
#define JEHEMLENCIE_SET_RIGHTEDGEROOT_OFFSET UNITYSDK_OFFSET(0xB96C750)
#define JEHEMLENCIE_SET_RIGHTTOWERRENDERINGPANEL_OFFSET UNITYSDK_OFFSET(0xB96C790)
#define JEHEMLENCIE_SET_RIGHTTOWERROOT_OFFSET UNITYSDK_OFFSET(0xB96C630)
#define JEHEMLENCIE_SET_ROBOT3DROOT_OFFSET UNITYSDK_OFFSET(0xB96C6F0)
#define JEHEMLENCIE__OPENGAMEWINDOW_B__2_0_OFFSET UNITYSDK_OFFSET(0xB96C9A0)

inline static constexpr unsigned int JEHEMLENCIE_TypeDefinitionIndex = 81818;

	class JEHEMLENCIE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EPBKPIMAANC*>* DNJNDDGPHDB; // 0x10
		::ENENKPBKLDF* LDOJLIGBCLC; // 0x18
		::UnityEngine::Transform* _PreviewLineRoot_k__BackingField; // 0x20
		::UnityEngine::Transform* _EdgeRoot_k__BackingField; // 0x28
		::UnityEngine::Transform* _GuideEffectRoot_k__BackingField; // 0x30
		::FiveDimRenderingPanelRuntime* _RightTowerRenderingPanel_k__BackingField; // 0x38
		::UnityEngine::Transform* _Robot3DRoot_k__BackingField; // 0x40
		::RPG::Client::UIPrefabLoader* NJGOCLCBJKI; // 0x48
		::UnityEngine::Transform* _LeftEdgeRoot_k__BackingField; // 0x50
		::RPG::Client::LuaUIController* BDFCDIGHLKE; // 0x58
		::RPG::Client::TeamTowers::TeamTowersPVPService* HBLBHLHLBLL; // 0x60
		::RPG::Client::TeamTowers::TeamTowersGameViewModel* KCIPJKFLGDG; // 0x68
		::UnityEngine::Transform* _RightEdgeRoot_k__BackingField; // 0x70
		::UnityEngine::Transform* _LeftTowerRoot_k__BackingField; // 0x78
		::UnityEngine::Transform* _EffectRoot_k__BackingField; // 0x80
		::LGGELBFHJIM* LBNAGLIGKIO; // 0x88
		::System::Action_1<::System::Single>* FAHHLODKNBI; // 0x90
		::HCOGFOGPKHI* IHPMLDMEHFO; // 0x98
		::UnityEngine::Transform* _RightTowerRoot_k__BackingField; // 0xA0
		::KGPMLJCDNJK* JNEHEAEFCMC; // 0xA8
		::RPG::Client::TeamTowers::TeamTowersGamePlayerDamageChangedMessage* FIBMGKOLDKM; // 0xB0
		::UnityEngine::Transform* _BossRoot_k__BackingField; // 0xB8
		::OPPNAOHPNGO* MJHHLOPFDNK; // 0xC0
		::FiveDimRenderingPanelRuntime* _LeftTowerRenderingPanel_k__BackingField; // 0xC8
		::System::UInt64 JHCGJBBHMNL; // 0xD0
		::System::Void _ctor(::OPPNAOHPNGO* a1, ::LGGELBFHJIM* a2, ::ENENKPBKLDF* a3, ::HCOGFOGPKHI* a4, ::KGPMLJCDNJK* a5, ::RPG::Client::TeamTowers::TeamTowersPVPService* a6)
		{
			return ((::System::Void(*)(::PVOID, ::OPPNAOHPNGO*, ::LGGELBFHJIM*, ::ENENKPBKLDF*, ::HCOGFOGPKHI*, ::KGPMLJCDNJK*, ::RPG::Client::TeamTowers::TeamTowersPVPService*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_DISPOSE_OFFSET))(this);
		}

		::System::Void OMIFMCILACD(::ODCELNBAEIB* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*, ::System::Action*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_OMIFMCILACD_OFFSET))(this, a1, a2);
		}

		::System::Void HNCPHOJKHGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_HNCPHOJKHGH_OFFSET))(this);
		}

		::System::Void JMKCGPFFDPN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEHEMLENCIE_JMKCGPFFDPN_OFFSET))(this, a1);
		}

		::System::Void PBOCGGJEILK(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_PBOCGGJEILK_OFFSET))(this, a1);
		}

		::EPBKPIMAANC* BOOKFLGPBLH(::System::UInt32 a1)
		{
			return ((::EPBKPIMAANC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEHEMLENCIE_BOOKFLGPBLH_OFFSET))(this, a1);
		}

		::System::Void GKENPHIHDAG(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::ChangeSource))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GKENPHIHDAG_OFFSET))(this, a1, a2);
		}

		::System::Void OCOACGHIKDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEHEMLENCIE_OCOACGHIKDM_OFFSET))(this, a1);
		}

		::System::Void NFDCIPFPLPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEHEMLENCIE_NFDCIPFPLPD_OFFSET))(this, a1);
		}

		::System::Void GNIADLGLDMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GNIADLGLDMO_OFFSET))(this);
		}

		::System::Void IFGBFNDEOFM(::System::UInt32 a1, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGameShare::TeamTowersCore::BossSkillViewType))((::PBYTE)hIl2Cpp + JEHEMLENCIE_IFGBFNDEOFM_OFFSET))(this, a1, a2);
		}

		::System::Void BAJFGMAIOEI(::ODCELNBAEIB* a1, ::FBAOECBDMIC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*, ::FBAOECBDMIC*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_BAJFGMAIOEI_OFFSET))(this, a1, a2);
		}

		::System::Void IFFADFFBDFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_IFFADFFBDFM_OFFSET))(this);
		}

		::System::Void NLECHPFKGGN(::ODCELNBAEIB* a1, ::JFAIGANLDBK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ODCELNBAEIB*, ::JFAIGANLDBK*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_NLECHPFKGGN_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* OILHGMNIGBN(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_OILHGMNIGBN_OFFSET))(this, a1, a2);
		}

		::System::Void KLDCDJHIEIE(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_KLDCDJHIEIE_OFFSET))(this, a1);
		}

		::System::Void LNFGOFMPNDN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JEHEMLENCIE_LNFGOFMPNDN_OFFSET))(this, a1, a2);
		}

		::System::Void MOMAHJOABDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_MOMAHJOABDN_OFFSET))(this);
		}

		::System::Void HCOEAKJICFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_HCOEAKJICFO_OFFSET))(this);
		}

		::System::Void FBFBMJEGEDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_FBFBMJEGEDA_OFFSET))(this);
		}

		::System::Void KHNCOEFNABG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_KHNCOEFNABG_OFFSET))(this);
		}

		::System::Void EONDKHPMDKH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JEHEMLENCIE_EONDKHPMDKH_OFFSET))(this, a1, a2);
		}

		::System::Void GEPKBIOJEGC(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GEPKBIOJEGC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KJAJPNEPFND(::System::UInt32 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + JEHEMLENCIE_KJAJPNEPFND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KLNMBKEMBOG(::System::UInt32 a1, ::System::Single a2, ::System::Boolean a3, ::HNLKNLJBHDD* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Boolean, ::HNLKNLJBHDD*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_KLNMBKEMBOG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AJJHBOOPKHP(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_AJJHBOOPKHP_OFFSET))(this, a1);
		}

		::System::Void LBEBNEEBJIC(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + JEHEMLENCIE_LBEBNEEBJIC_OFFSET))(this, a1, a2);
		}

		::System::Boolean EBNMFCBCLDJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEHEMLENCIE_EBNMFCBCLDJ_OFFSET))(this, a1);
		}

		::System::Void CAAIIKNDGAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_CAAIIKNDGAF_OFFSET))(this);
		}

		::System::Void JNPENALIOJK(::JFAIGANLDBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFAIGANLDBK*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_JNPENALIOJK_OFFSET))(this, a1);
		}

		::System::Void MCEGHAEGEOJ(::JFAIGANLDBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFAIGANLDBK*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_MCEGHAEGEOJ_OFFSET))(this, a1);
		}

		::System::Void BOFNBLMBFIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_BOFNBLMBFIE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_RightTowerRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_RIGHTTOWERROOT_OFFSET))(this);
		}

		::System::Void set_RightTowerRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_RIGHTTOWERROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_LeftTowerRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_LEFTTOWERROOT_OFFSET))(this);
		}

		::System::Void set_LeftTowerRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_LEFTTOWERROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_BossRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_BOSSROOT_OFFSET))(this);
		}

		::System::Void set_BossRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_BOSSROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_PreviewLineRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_PREVIEWLINEROOT_OFFSET))(this);
		}

		::System::Void set_PreviewLineRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_PREVIEWLINEROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_GuideEffectRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_GUIDEEFFECTROOT_OFFSET))(this);
		}

		::System::Void set_GuideEffectRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_GUIDEEFFECTROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_EffectRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_EFFECTROOT_OFFSET))(this);
		}

		::System::Void set_EffectRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_EFFECTROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Robot3DRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_ROBOT3DROOT_OFFSET))(this);
		}

		::System::Void set_Robot3DRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_ROBOT3DROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_EdgeRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_EDGEROOT_OFFSET))(this);
		}

		::System::Void set_EdgeRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_EDGEROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_LeftEdgeRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_LEFTEDGEROOT_OFFSET))(this);
		}

		::System::Void set_LeftEdgeRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_LEFTEDGEROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_RightEdgeRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_RIGHTEDGEROOT_OFFSET))(this);
		}

		::System::Void set_RightEdgeRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_RIGHTEDGEROOT_OFFSET))(this, a1);
		}

		::FiveDimRenderingPanelRuntime* get_LeftTowerRenderingPanel()
		{
			return ((::FiveDimRenderingPanelRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_LEFTTOWERRENDERINGPANEL_OFFSET))(this);
		}

		::System::Void set_LeftTowerRenderingPanel(::FiveDimRenderingPanelRuntime* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanelRuntime*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_LEFTTOWERRENDERINGPANEL_OFFSET))(this, a1);
		}

		::FiveDimRenderingPanelRuntime* get_RightTowerRenderingPanel()
		{
			return ((::FiveDimRenderingPanelRuntime*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_GET_RIGHTTOWERRENDERINGPANEL_OFFSET))(this);
		}

		::System::Void set_RightTowerRenderingPanel(::FiveDimRenderingPanelRuntime* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingPanelRuntime*))((::PBYTE)hIl2Cpp + JEHEMLENCIE_SET_RIGHTTOWERRENDERINGPANEL_OFFSET))(this, a1);
		}

		::System::Boolean CNDHCJJLEIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_CNDHCJJLEIP_OFFSET))(this);
		}

		::System::Boolean PBMJMAKBIJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_PBMJMAKBIJH_OFFSET))(this);
		}

		::System::Boolean FLDHPFHLHKP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_FLDHPFHLHKP_OFFSET))(this);
		}

		::System::Boolean CLMPLMHENGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_CLMPLMHENGI_OFFSET))(this);
		}

		::ENENKPBKLDF* KPPNKIDJPDO()
		{
			return ((::ENENKPBKLDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE_KPPNKIDJPDO_OFFSET))(this);
		}

		::System::Void _OpenGameWindow_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHEMLENCIE__OPENGAMEWINDOW_B__2_0_OFFSET))(this);
		}

	};
