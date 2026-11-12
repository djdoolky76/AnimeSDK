#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CANFMMJEBJG;
class CJPDCBEEOKA;
class FMPCODLIOLG;
class MLNNIPFMECL;
class PLIAMMCJPEG;
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RspHandler; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define FMPCODLIOLG_AHIOPJEGGPB_OFFSET UNITYSDK_OFFSET(0x167D6EA0)
#define FMPCODLIOLG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x167D8080)
#define FMPCODLIOLG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x167D80C0)
#define FMPCODLIOLG_BAANELOHGJO_OFFSET UNITYSDK_OFFSET(0x167D5920)
#define FMPCODLIOLG_BDJAMKKKPPA_OFFSET UNITYSDK_OFFSET(0x167D6AA0)
#define FMPCODLIOLG_CAGCHKJHMPD_OFFSET UNITYSDK_OFFSET(0x167D5A60)
#define FMPCODLIOLG_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0x167D7D30)
#define FMPCODLIOLG_CCHDNHDJBCC_OFFSET UNITYSDK_OFFSET(0x167D7DC0)
#define FMPCODLIOLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x167D84D0)
#define FMPCODLIOLG_CFKKNKJPJLM_OFFSET UNITYSDK_OFFSET(0x167D6FB0)
#define FMPCODLIOLG_CHIOBDFNKBI_OFFSET UNITYSDK_OFFSET(0x167D6D40)
#define FMPCODLIOLG_CKEOKOICNKJ_1_OFFSET UNITYSDK_OFFSET(0x167D5DE0)
#define FMPCODLIOLG_CKEOKOICNKJ_OFFSET UNITYSDK_OFFSET(0x167D6E10)
#define FMPCODLIOLG_CLHLBBAKKAD_OFFSET UNITYSDK_OFFSET(0x167D6040)
#define FMPCODLIOLG_COALNEKOBOK_OFFSET UNITYSDK_OFFSET(0x167D7690)
#define FMPCODLIOLG_CPJIEANGGFC_OFFSET UNITYSDK_OFFSET(0x167D5C80)
#define FMPCODLIOLG_CTOR_OFFSET UNITYSDK_OFFSET(0x167D4F30)
#define FMPCODLIOLG_DLDECMIMLNO_OFFSET UNITYSDK_OFFSET(0x167D7970)
#define FMPCODLIOLG_DOPHFIILIPM_OFFSET UNITYSDK_OFFSET(0x167D6660)
#define FMPCODLIOLG_DPPNKKKCEFE_OFFSET UNITYSDK_OFFSET(0x167D7400)
#define FMPCODLIOLG_EBNAJJDENEO_OFFSET UNITYSDK_OFFSET(0x167D77B0)
#define FMPCODLIOLG_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x167D7B20)
#define FMPCODLIOLG_EFFIOJHIAOO_OFFSET UNITYSDK_OFFSET(0x167D7470)
#define FMPCODLIOLG_EMPLLOGIDLL_OFFSET UNITYSDK_OFFSET(0x167D4FF0)
#define FMPCODLIOLG_ENFBEPMOLBD_OFFSET UNITYSDK_OFFSET(0x167D5AA0)
#define FMPCODLIOLG_FFHFCAMOKBH_OFFSET UNITYSDK_OFFSET(0x167D7380)
#define FMPCODLIOLG_FIHLOLKGJAG_OFFSET UNITYSDK_OFFSET(0x167D7890)
#define FMPCODLIOLG_FPAHIAJCILJ_OFFSET UNITYSDK_OFFSET(0x167D7900)
#define FMPCODLIOLG_GET_MUTEHANDLER_OFFSET UNITYSDK_OFFSET(0x167D8470)
#define FMPCODLIOLG_GET__ROOT_OFFSET UNITYSDK_OFFSET(0x167D84B0)
#define FMPCODLIOLG_GGBMEFBPPFC_OFFSET UNITYSDK_OFFSET(0x167D5AF0)
#define FMPCODLIOLG_GICILAMDOJB_OFFSET UNITYSDK_OFFSET(0x167D7CE0)
#define FMPCODLIOLG_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x167D53F0)
#define FMPCODLIOLG_GIOADNCAGOL_OFFSET UNITYSDK_OFFSET(0x167D5CC0)
#define FMPCODLIOLG_GPKLDGHJLMN_OFFSET UNITYSDK_OFFSET(0x167D6BD0)
#define FMPCODLIOLG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x167D6110)
#define FMPCODLIOLG_HAJAGMJGKFD_OFFSET UNITYSDK_OFFSET(0x167D6220)
#define FMPCODLIOLG_HCJJHNEMIDN_OFFSET UNITYSDK_OFFSET(0x167D72F0)
#define FMPCODLIOLG_HDLDKFLLLAP_OFFSET UNITYSDK_OFFSET(0x167D5350)
#define FMPCODLIOLG_HJCLBHDEPKG_OFFSET UNITYSDK_OFFSET(0x167D7C90)
#define FMPCODLIOLG_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0x167D62D0)
#define FMPCODLIOLG_HOKCCHNMKCO_OFFSET UNITYSDK_OFFSET(0x167D6A30)
#define FMPCODLIOLG_IBGFDKHPBIM_OFFSET UNITYSDK_OFFSET(0x167D5800)
#define FMPCODLIOLG_IMAJLPIFLNN_OFFSET UNITYSDK_OFFSET(0x167D57A0)
#define FMPCODLIOLG_IMKLKEAAMEH_OFFSET UNITYSDK_OFFSET(0x167D6B70)
#define FMPCODLIOLG_IOCLNGGJCGM_OFFSET UNITYSDK_OFFSET(0x167D6C10)
#define FMPCODLIOLG_JEBAIOBMCIC_OFFSET UNITYSDK_OFFSET(0x167D6F50)
#define FMPCODLIOLG_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x167D7C40)
#define FMPCODLIOLG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x167D6510)
#define FMPCODLIOLG_JLPBGNGBOBN_OFFSET UNITYSDK_OFFSET(0x167D7E70)
#define FMPCODLIOLG_KGDICCHNHPF_OFFSET UNITYSDK_OFFSET(0x167D7D80)
#define FMPCODLIOLG_KKCDCIHJHGN_OFFSET UNITYSDK_OFFSET(0x167D53A0)
#define FMPCODLIOLG_KMDMIADOOPI_OFFSET UNITYSDK_OFFSET(0x167D68C0)
#define FMPCODLIOLG_KNGGBAMPKID_OFFSET UNITYSDK_OFFSET(0x167D5040)
#define FMPCODLIOLG_LNLEHPNLPNE_OFFSET UNITYSDK_OFFSET(0x167D7820)
#define FMPCODLIOLG_MBHEIIKNABL_OFFSET UNITYSDK_OFFSET(0x167D64C0)
#define FMPCODLIOLG_MNINFDNHGEH_OFFSET UNITYSDK_OFFSET(0x167D74E0)
#define FMPCODLIOLG_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0x167D5670)
#define FMPCODLIOLG_NNNLFEBFDIN_OFFSET UNITYSDK_OFFSET(0x167D79E0)
#define FMPCODLIOLG_NNPFDFMFJPD_OFFSET UNITYSDK_OFFSET(0x167D6980)
#define FMPCODLIOLG_NPGHILMAMPF_1_OFFSET UNITYSDK_OFFSET(0x167D5F20)
#define FMPCODLIOLG_NPGHILMAMPF_OFFSET UNITYSDK_OFFSET(0x167D6DA0)
#define FMPCODLIOLG_OCENGHKJMIH_OFFSET UNITYSDK_OFFSET(0x167D6730)
#define FMPCODLIOLG_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x167D5170)
#define FMPCODLIOLG_PMMGKGPHNEA_OFFSET UNITYSDK_OFFSET(0x167D7550)
#define FMPCODLIOLG_PNDAGODJNLN_OFFSET UNITYSDK_OFFSET(0x167D7ED0)
#define FMPCODLIOLG_SET__ROOT_OFFSET UNITYSDK_OFFSET(0x167D84C0)
#define FMPCODLIOLG__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x167D7A50)
#define FMPCODLIOLG__ONBIND_OFFSET UNITYSDK_OFFSET(0x167D7AE0)
#define FMPCODLIOLG__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x167D7BA0)
#define FMPCODLIOLG__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x167D7A90)
#define FMPCODLIOLG__ONTICK_OFFSET UNITYSDK_OFFSET(0x167D7BE0)
#define FMPCODLIOLG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x167D7B60)

inline static constexpr unsigned int FMPCODLIOLG_TypeDefinitionIndex = 75139;

	class FMPCODLIOLG : public ::System::Object
	{
	public:
		::UnityEngine::Transform* __Root_k__BackingField; // 0x10
		::FMPCODLIOLG* KJMDDAHEODL; // 0x18
		::System::Collections::Generic::List_1<::CANFMMJEBJG*>* BLIIIFGHHDI; // 0x20
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x28
		::System::Collections::Generic::List_1<::FMPCODLIOLG*>* NPOEHLAOFJI; // 0x30
		::RPG::Client::Promises::Promise* AMMPGAEDBKJ; // 0x38
		::System::Collections::Generic::List_1<::CJPDCBEEOKA*>* HBHFNDKBOLI; // 0x40
		::RPG::Client::UIController* CFKHNPGEAJA; // 0x48
		::System::Collections::Generic::List_1<::MLNNIPFMECL*>* PDDLJCKEPBF; // 0x50
		::System::Boolean NHIGCALGHBM; // 0x58
		::System::Boolean FMNEEONAMNO; // 0x59
		::System::Boolean DAAGMAFHNPJ; // 0x5A
		static ::RPG::Client::RPGProfilerMarker** StaticGet_CFPCILNJAKD()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "FMPCODLIOLG")->GetStaticField(0x69650);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMPCODLIOLG_CCTOR_OFFSET))();
		}

		::System::Void EMPLLOGIDLL(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_EMPLLOGIDLL_OFFSET))(this, a1);
		}

		::System::Void KNGGBAMPKID(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FMPCODLIOLG_KNGGBAMPKID_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL(::RPG::Client::UIController* a1, ::FMPCODLIOLG* a2, ::IGKFNIEJGLM a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::FMPCODLIOLG*, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FMPCODLIOLG_OINBDMGFFJL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GIGJMNCIFMJ(::PLIAMMCJPEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLIAMMCJPEG*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void IBGFDKHPBIM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_IBGFDKHPBIM_OFFSET))(this, a1);
		}

		::System::Void BAANELOHGJO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_BAANELOHGJO_OFFSET))(this, a1);
		}

		::System::Boolean CAGCHKJHMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_CAGCHKJHMPD_OFFSET))(this);
		}

		::System::Void ENFBEPMOLBD(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_ENFBEPMOLBD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* CPJIEANGGFC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_CPJIEANGGFC_OFFSET))(this);
		}

		::System::Boolean IMAJLPIFLNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_IMAJLPIFLNN_OFFSET))(this);
		}

		::System::Void GIOADNCAGOL(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_GIOADNCAGOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMPCODLIOLG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DOPHFIILIPM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_DOPHFIILIPM_OFFSET))(this, a1);
		}

		::System::Void KMDMIADOOPI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_KMDMIADOOPI_OFFSET))(this, a1);
		}

		::System::Void NNPFDFMFJPD(::FMPCODLIOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMPCODLIOLG*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_NNPFDFMFJPD_OFFSET))(this, a1);
		}

		::System::Void BDJAMKKKPPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_BDJAMKKKPPA_OFFSET))(this);
		}

		::UnityEngine::Transform* IMKLKEAAMEH(::System::String* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_IMKLKEAAMEH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* GPKLDGHJLMN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_GPKLDGHJLMN_OFFSET))(this);
		}

		::UnityEngine::GameObject* IOCLNGGJCGM(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_IOCLNGGJCGM_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* NPGHILMAMPF(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_NPGHILMAMPF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* NPGHILMAMPF_1(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_NPGHILMAMPF_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKEOKOICNKJ(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_CKEOKOICNKJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKEOKOICNKJ_1(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_CKEOKOICNKJ_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AHIOPJEGGPB(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_AHIOPJEGGPB_OFFSET))(this, a1, a2);
		}

		::System::Void JEBAIOBMCIC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_JEBAIOBMCIC_OFFSET))(this, a1);
		}

		::System::Void CFKKNKJPJLM(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_CFKKNKJPJLM_OFFSET))(this, a1, a2);
		}

		::System::Void HCJJHNEMIDN(::System::UInt16 a1, ::RPG::Client::RspHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_HCJJHNEMIDN_OFFSET))(this, a1, a2);
		}

		::System::Void FFHFCAMOKBH(::UnityEngine::UI::Button* a1, ::System::Action_1<::System::Object*>* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_FFHFCAMOKBH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DPPNKKKCEFE(::InControl::InputControlType a1, ::System::Action_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_DPPNKKKCEFE_OFFSET))(this, a1, a2);
		}

		::System::Void EFFIOJHIAOO(::InControl::InputControlType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_EFFIOJHIAOO_OFFSET))(this, a1, a2);
		}

		::System::Void MNINFDNHGEH(::InControl::InputControlType a1, ::System::Action_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_MNINFDNHGEH_OFFSET))(this, a1, a2);
		}

		::System::Void PMMGKGPHNEA(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + FMPCODLIOLG_PMMGKGPHNEA_OFFSET))(this, a1);
		}

		::System::Void COALNEKOBOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_COALNEKOBOK_OFFSET))(this);
		}

		::System::Void EBNAJJDENEO(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_EBNAJJDENEO_OFFSET))(this, a1, a2);
		}

		::System::Void LNLEHPNLPNE(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_LNLEHPNLPNE_OFFSET))(this, a1, a2);
		}

		::System::Void FIHLOLKGJAG(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_FIHLOLKGJAG_OFFSET))(this, a1, a2);
		}

		::System::Void FPAHIAJCILJ(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_FPAHIAJCILJ_OFFSET))(this, a1, a2);
		}

		::System::Void DLDECMIMLNO(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_DLDECMIMLNO_OFFSET))(this, a1, a2);
		}

		::System::Void NNNLFEBFDIN(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_NNNLFEBFDIN_OFFSET))(this, a1, a2);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FMPCODLIOLG__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMPCODLIOLG__ONTICK_OFFSET))(this, a1);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void HJCLBHDEPKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_HJCLBHDEPKG_OFFSET))(this, a1);
		}

		::System::Void GICILAMDOJB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_GICILAMDOJB_OFFSET))(this, a1);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + FMPCODLIOLG_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void KGDICCHNHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_KGDICCHNHPF_OFFSET))(this);
		}

		::System::Void HDLDKFLLLAP(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_HDLDKFLLLAP_OFFSET))(this, a1);
		}

		::System::Void KKCDCIHJHGN(::FMPCODLIOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMPCODLIOLG*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_KKCDCIHJHGN_OFFSET))(this, a1);
		}

		::System::Void HAJAGMJGKFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_HAJAGMJGKFD_OFFSET))(this);
		}

		::System::Void CHIOBDFNKBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_CHIOBDFNKBI_OFFSET))(this);
		}

		::System::Void MBHEIIKNABL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_MBHEIIKNABL_OFFSET))(this);
		}

		::System::Void CCHDNHDJBCC(::FMPCODLIOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMPCODLIOLG*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_CCHDNHDJBCC_OFFSET))(this, a1);
		}

		::System::Boolean HOKCCHNMKCO(::FMPCODLIOLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMPCODLIOLG*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_HOKCCHNMKCO_OFFSET))(this, a1);
		}

		::System::Void CLHLBBAKKAD(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_CLHLBBAKKAD_OFFSET))(this, a1);
		}

		::System::Void GGBMEFBPPFC(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_GGBMEFBPPFC_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Boolean get_MuteHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_GET_MUTEHANDLER_OFFSET))(this);
		}

		::System::Void PNDAGODJNLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_PNDAGODJNLN_OFFSET))(this);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void OCENGHKJMIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FMPCODLIOLG_OCENGHKJMIH_OFFSET))(this, a1);
		}

		::System::Void JLPBGNGBOBN(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_JLPBGNGBOBN_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get__Root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMPCODLIOLG_GET__ROOT_OFFSET))(this);
		}

		::System::Void set__Root(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FMPCODLIOLG_SET__ROOT_OFFSET))(this, a1);
		}

	};
