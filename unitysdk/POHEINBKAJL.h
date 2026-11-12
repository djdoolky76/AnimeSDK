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
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define POHEINBKAJL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCC96830)
#define POHEINBKAJL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCC969D0)
#define POHEINBKAJL_BBCHOBKBAED_OFFSET UNITYSDK_OFFSET(0xCC95CB0)
#define POHEINBKAJL_CTOR_OFFSET UNITYSDK_OFFSET(0xCC96B40)
#define POHEINBKAJL_DEBCDGIAJKF_OFFSET UNITYSDK_OFFSET(0xCC941E0)
#define POHEINBKAJL_EIOKKCOJPDH_OFFSET UNITYSDK_OFFSET(0xCC96530)
#define POHEINBKAJL_EOGNDCGCKIM_OFFSET UNITYSDK_OFFSET(0xCC96390)
#define POHEINBKAJL_FEOAKACIKAA_OFFSET UNITYSDK_OFFSET(0xCC955F0)
#define POHEINBKAJL_GIFECBGKMCE_OFFSET UNITYSDK_OFFSET(0xCC958D0)
#define POHEINBKAJL_GKDFAALJGOP_OFFSET UNITYSDK_OFFSET(0xCC95EC0)
#define POHEINBKAJL_GMFCFCGIOEB_OFFSET UNITYSDK_OFFSET(0xCC96080)
#define POHEINBKAJL_HPJNHHCJGMH_OFFSET UNITYSDK_OFFSET(0xCC96270)
#define POHEINBKAJL_IHNBBEIHODG_OFFSET UNITYSDK_OFFSET(0xCC95110)
#define POHEINBKAJL_IIEBIBHLLGA_OFFSET UNITYSDK_OFFSET(0xCC94B10)
#define POHEINBKAJL_IOMMLBDBFDB_OFFSET UNITYSDK_OFFSET(0xCC93D70)
#define POHEINBKAJL_JHEIGAGCHGJ_OFFSET UNITYSDK_OFFSET(0xCC95850)
#define POHEINBKAJL_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xCC966B0)
#define POHEINBKAJL_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xCC94FF0)
#define POHEINBKAJL_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xCC95040)
#define POHEINBKAJL_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xCC96770)
#define POHEINBKAJL_KHNJMHAPNAB_OFFSET UNITYSDK_OFFSET(0xCC94E20)
#define POHEINBKAJL_LBBCPHPEHIO_OFFSET UNITYSDK_OFFSET(0xCC94B60)
#define POHEINBKAJL_LBGCFNPEBNB_OFFSET UNITYSDK_OFFSET(0xCC956B0)
#define POHEINBKAJL_LNPPGBCPMFA_OFFSET UNITYSDK_OFFSET(0xCC965F0)
#define POHEINBKAJL_MGOJLEMMBBC_OFFSET UNITYSDK_OFFSET(0xCC95750)
#define POHEINBKAJL_OCEMDEEFFIH_OFFSET UNITYSDK_OFFSET(0xCC95530)
#define POHEINBKAJL_OFPJKNMAJIC_OFFSET UNITYSDK_OFFSET(0xCC95940)
#define POHEINBKAJL_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xCC94140)
#define POHEINBKAJL_ONRETURN_OFFSET UNITYSDK_OFFSET(0xCC93D20)
#define POHEINBKAJL_OPFDEDEBPDF_OFFSET UNITYSDK_OFFSET(0xCC94D90)
#define POHEINBKAJL_PHCPINFFJFI_OFFSET UNITYSDK_OFFSET(0xCC95320)
#define POHEINBKAJL_PPBCDMBDAFO_OFFSET UNITYSDK_OFFSET(0xCC957F0)
#define POHEINBKAJL_PPMAFIABJPK_OFFSET UNITYSDK_OFFSET(0xCC95AA0)
#define POHEINBKAJL__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xCC948D0)
#define POHEINBKAJL__ONBIND_OFFSET UNITYSDK_OFFSET(0xCC939F0)
#define POHEINBKAJL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xCC94A40)
#define POHEINBKAJL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xCC94AC0)

inline static constexpr unsigned int POHEINBKAJL_TypeDefinitionIndex = 74052;

	class POHEINBKAJL : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::JPLJOFNEMKD* MLOCFFBKKPA; // 0x68
		::Il2CppArray<::UnityEngine::Transform*>* HKADBKEKLIG; // 0x70
		::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>* ENBANNIECIN; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* ODNKOFLEIAN; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* FLDMNAOOFMO; // 0x88
		::UnityEngine::Transform* OPOHDNFKLPP; // 0x90
		::System::Boolean NIFEBDLPDLD; // 0x98
		::System::Byte _padding0[0x3];
		::System::Int32 LMNBMOIEJJH; // 0x9C
		::System::Int32 PKKAFKENEDF; // 0xA0
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

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + POHEINBKAJL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POHEINBKAJL__SETUPVIEW_OFFSET))(this);
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
