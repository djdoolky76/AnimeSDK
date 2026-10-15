#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BHGGGEIBACB;
class CMIBMDCJFEG;
class JPLJOFNEMKD;
class KPNHHBEDJHF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define POHEINBKAJL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC364010)
#define POHEINBKAJL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC3641B0)
#define POHEINBKAJL_BBCHOBKBAED_OFFSET UNITYSDK_OFFSET(0xC363430)
#define POHEINBKAJL_CTOR_OFFSET UNITYSDK_OFFSET(0xC364320)
#define POHEINBKAJL_DEBCDGIAJKF_OFFSET UNITYSDK_OFFSET(0xC361930)
#define POHEINBKAJL_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC3621A0)
#define POHEINBKAJL_EIOKKCOJPDH_OFFSET UNITYSDK_OFFSET(0xC363D10)
#define POHEINBKAJL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC362220)
#define POHEINBKAJL_EOGNDCGCKIM_OFFSET UNITYSDK_OFFSET(0xC363B70)
#define POHEINBKAJL_FEOAKACIKAA_OFFSET UNITYSDK_OFFSET(0xC362D70)
#define POHEINBKAJL_GIFECBGKMCE_OFFSET UNITYSDK_OFFSET(0xC363050)
#define POHEINBKAJL_GKDFAALJGOP_OFFSET UNITYSDK_OFFSET(0xC363640)
#define POHEINBKAJL_GMFCFCGIOEB_OFFSET UNITYSDK_OFFSET(0xC363850)
#define POHEINBKAJL_HPJNHHCJGMH_OFFSET UNITYSDK_OFFSET(0xC363A50)
#define POHEINBKAJL_IHNBBEIHODG_OFFSET UNITYSDK_OFFSET(0xC362890)
#define POHEINBKAJL_IIEBIBHLLGA_OFFSET UNITYSDK_OFFSET(0xC362270)
#define POHEINBKAJL_IOMMLBDBFDB_OFFSET UNITYSDK_OFFSET(0xC3614E0)
#define POHEINBKAJL_JHEIGAGCHGJ_OFFSET UNITYSDK_OFFSET(0xC362FD0)
#define POHEINBKAJL_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xC363E90)
#define POHEINBKAJL_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xC362760)
#define POHEINBKAJL_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xC3627B0)
#define POHEINBKAJL_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xC363F50)
#define POHEINBKAJL_KHNJMHAPNAB_OFFSET UNITYSDK_OFFSET(0xC362590)
#define POHEINBKAJL_LBBCPHPEHIO_OFFSET UNITYSDK_OFFSET(0xC3622C0)
#define POHEINBKAJL_LBGCFNPEBNB_OFFSET UNITYSDK_OFFSET(0xC362E30)
#define POHEINBKAJL_LNPPGBCPMFA_OFFSET UNITYSDK_OFFSET(0xC363DD0)
#define POHEINBKAJL_MGOJLEMMBBC_OFFSET UNITYSDK_OFFSET(0xC362ED0)
#define POHEINBKAJL_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC362030)
#define POHEINBKAJL_OCEMDEEFFIH_OFFSET UNITYSDK_OFFSET(0xC362CB0)
#define POHEINBKAJL_OFPJKNMAJIC_OFFSET UNITYSDK_OFFSET(0xC3630C0)
#define POHEINBKAJL_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC361890)
#define POHEINBKAJL_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC361490)
#define POHEINBKAJL_OPFDEDEBPDF_OFFSET UNITYSDK_OFFSET(0xC362500)
#define POHEINBKAJL_PHCPINFFJFI_OFFSET UNITYSDK_OFFSET(0xC362AA0)
#define POHEINBKAJL_PPBCDMBDAFO_OFFSET UNITYSDK_OFFSET(0xC362F70)
#define POHEINBKAJL_PPMAFIABJPK_OFFSET UNITYSDK_OFFSET(0xC363220)
#define POHEINBKAJL__ONBIND_OFFSET UNITYSDK_OFFSET(0xC361160)

	class POHEINBKAJL : public ::FMPCODLIOLG
	{
	public:
		::JPLJOFNEMKD* MLOCFFBKKPA; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* FLDMNAOOFMO; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* ODNKOFLEIAN; // 0x70
		::UnityEngine::Transform* OPOHDNFKLPP; // 0x78
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
		::Il2CppArray<::UnityEngine::Transform*>* HKADBKEKLIG; // 0x88
		::System::Boolean NIFEBDLPDLD; // 0x90
		::System::Byte _padding0[0x3];
		::System::Int32 LMNBMOIEJJH; // 0x94
		::System::Int32 PKKAFKENEDF; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL__ONBIND_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_ONRETURN_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + POHEINBKAJL_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + POHEINBKAJL_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void IIEBIBHLLGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_IIEBIBHLLGA_OFFSET))(this);
		}

		::System::Void LBBCPHPEHIO(::CMIBMDCJFEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMIBMDCJFEG*))((::PBYTE)hIl2Cpp + POHEINBKAJL_LBBCPHPEHIO_OFFSET))(this, a1);
		}

		::System::Void JNJKGKLBCNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_JNJKGKLBCNI_OFFSET))(this);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + POHEINBKAJL_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void OPFDEDEBPDF(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + POHEINBKAJL_OPFDEDEBPDF_OFFSET))(this, a1);
		}

		::System::Void KHNJMHAPNAB(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + POHEINBKAJL_KHNJMHAPNAB_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* OCEMDEEFFIH(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + POHEINBKAJL_OCEMDEEFFIH_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* FEOAKACIKAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + POHEINBKAJL_FEOAKACIKAA_OFFSET))(this, a1);
		}

		::System::String* LBGCFNPEBNB(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + POHEINBKAJL_LBGCFNPEBNB_OFFSET))(this, a1);
		}

		::System::String* MGOJLEMMBBC(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + POHEINBKAJL_MGOJLEMMBBC_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* IHNBBEIHODG(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + POHEINBKAJL_IHNBBEIHODG_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* PHCPINFFJFI(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + POHEINBKAJL_PHCPINFFJFI_OFFSET))(this, a1);
		}

		::System::Void IOMMLBDBFDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_IOMMLBDBFDB_OFFSET))(this);
		}

		::System::Void DEBCDGIAJKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_DEBCDGIAJKF_OFFSET))(this);
		}

		::System::Void OFPJKNMAJIC(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + POHEINBKAJL_OFPJKNMAJIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PPMAFIABJPK(::RPG::GameCore::TurnBasedModifierInstance* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + POHEINBKAJL_PPMAFIABJPK_OFFSET))(this, a1, a2);
		}

		::System::Void GKDFAALJGOP(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + POHEINBKAJL_GKDFAALJGOP_OFFSET))(this, a1, a2);
		}

		::System::Void BBCHOBKBAED(::RPG::GameCore::TurnBasedModifierInstance* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + POHEINBKAJL_BBCHOBKBAED_OFFSET))(this, a1, a2);
		}

		::System::Void HPJNHHCJGMH(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::KPNHHBEDJHF*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::KPNHHBEDJHF*>*))((::PBYTE)hIl2Cpp + POHEINBKAJL_HPJNHHCJGMH_OFFSET))(this, a1, a2);
		}

		::System::Void GMFCFCGIOEB(::UnityEngine::Animator* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + POHEINBKAJL_GMFCFCGIOEB_OFFSET))(this, a1, a2);
		}

		::System::Int32 EOGNDCGCKIM(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + POHEINBKAJL_EOGNDCGCKIM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* GIFECBGKMCE()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_GIFECBGKMCE_OFFSET))(this);
		}

		::System::Boolean JHEIGAGCHGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_JHEIGAGCHGJ_OFFSET))(this);
		}

		::BHGGGEIBACB* PPBCDMBDAFO()
		{
			return ((::BHGGGEIBACB*(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_PPBCDMBDAFO_OFFSET))(this);
		}

		::System::Void EIOKKCOJPDH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POHEINBKAJL_EIOKKCOJPDH_OFFSET))(this, a1);
		}

		::System::Void LNPPGBCPMFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POHEINBKAJL_LNPPGBCPMFA_OFFSET))(this, a1);
		}

		::System::Void JKNIBKEGJBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POHEINBKAJL_JKNIBKEGJBF_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POHEINBKAJL_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
