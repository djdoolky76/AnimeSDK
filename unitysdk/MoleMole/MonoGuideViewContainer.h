#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoGuideViewContainer_OHKOMONFJGO; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_AAMMFJBPPFF_OFFSET UNITYSDK_OFFSET(0x10D3BF60)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_AWAKE_OFFSET UNITYSDK_OFFSET(0x10D3BC20)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_CDOGLELPMCB_OFFSET UNITYSDK_OFFSET(0x10D3BFE0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_CENMNLEANJN_1_OFFSET UNITYSDK_OFFSET(0x10D3FE30)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_CENMNLEANJN_OFFSET UNITYSDK_OFFSET(0x10D3E860)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_DJEIDDICKNB_OFFSET UNITYSDK_OFFSET(0x10D3D160)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_GAADDBPBJLO_1_OFFSET UNITYSDK_OFFSET(0x10D40740)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_GAADDBPBJLO_OFFSET UNITYSDK_OFFSET(0x10D40670)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_GANNFJBBMPB_OFFSET UNITYSDK_OFFSET(0x10D3D2F0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_GBLIJJIMPGI_OFFSET UNITYSDK_OFFSET(0x10D3E580)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_GJDDPKHCENF_OFFSET UNITYSDK_OFFSET(0x10D3EE70)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_GLNEONMKBKA_OFFSET UNITYSDK_OFFSET(0x10D3E2F0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_HHAEAGPGJDD_OFFSET UNITYSDK_OFFSET(0x10D3E430)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_IHBCDIELJOP_OFFSET UNITYSDK_OFFSET(0x10D3F7B0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_IKLKKFIKCBI_1_OFFSET UNITYSDK_OFFSET(0x10D3D6B0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_IKLKKFIKCBI_OFFSET UNITYSDK_OFFSET(0x10D3DAD0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_JFJOLPOCAAE_OFFSET UNITYSDK_OFFSET(0x10D3E7E0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_JNBLHJIFOPC_OFFSET UNITYSDK_OFFSET(0x10D3CCF0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_KHCLKJBMDHH_OFFSET UNITYSDK_OFFSET(0x10D3F120)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10D3BE40)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_LBDNBJBIHHF_OFFSET UNITYSDK_OFFSET(0x10D40380)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_NDMCDEBBGCM_OFFSET UNITYSDK_OFFSET(0x10D3BDF0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_PFMKHGNPEJC_OFFSET UNITYSDK_OFFSET(0x10D3FD30)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETTARGET_1_OFFSET UNITYSDK_OFFSET(0x10D3D920)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETTARGET_OFFSET UNITYSDK_OFFSET(0x10D3D560)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETVIEWENABLE_OFFSET UNITYSDK_OFFSET(0x10D3BD90)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETVIEWVISABLE_OFFSET UNITYSDK_OFFSET(0x10D3D4F0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPALL_OFFSET UNITYSDK_OFFSET(0x10D3CC70)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x10D3D390)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPTARGETPOINT_OFFSET UNITYSDK_OFFSET(0x10D3CFF0)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_WARNNINGTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x10D3DE80)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER_WARNNINGTARGET_OFFSET UNITYSDK_OFFSET(0x10D3DD20)
#define MOLEMOLE_MONOGUIDEVIEWCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D3DFE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGuideViewContainer_TypeDefinitionIndex = 87506;

	class MonoGuideViewContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single IMBCOAKFECC; // 0x0
		::UnityEngine::GameObject* arrowTemplate; // 0x18
		::UnityEngine::Vector2 BorderRange; // 0x20
		::UnityEngine::Sprite* iconEnemy; // 0x28
		::UnityEngine::Sprite* iconSelf; // 0x30
		::UnityEngine::Sprite* iconNeutral; // 0x38
		::System::Single iconFadeOutTime; // 0x40
		::System::Single tweenScaleSize; // 0x44
		::System::Single tweenScaleTime; // 0x48
		::System::Boolean MGNBAFFHBNM; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Single PEPALPOBPOK; // 0x50
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* KMODOGNHAAK; // 0x58
		::UnityEngine::Camera* COCPHGPGOOI; // 0x60
		::UnityEngine::RectTransform* OMKEGKFBGDP; // 0x68
		::System::Single NNMPPDJBLGD; // 0x70
		::System::Single FAFJKKEEOKI; // 0x74
		::System::Collections::Generic::Queue_1<::System::Object*>* NCPLECKFGAK; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* NFBIEEPHGFB; // 0x80
		::System::Collections::Generic::List_1<::System::Int32>* EJNLEPHEFIA; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* LMELDEDGIGD; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* DJFGKJNBOCA; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* IJODBBGOGNK; // 0xA0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* PNAEIIPEMJN; // 0xA8
		::System::Collections::Generic::HashSet_1<::System::Int32>* DPHFNGMBNCP; // 0xB0
		::System::Int32 GONODCOMIAA; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void StopAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPALL_OFFSET))(this);
		}

		::System::Void StopTargetPoint(::System::Collections::Generic::List_1<::System::String*>* GFDOBACOHGM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPTARGETPOINT_OFFSET))(this, GFDOBACOHGM);
		}

		::System::Void StopTargetEntity(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_STOPTARGETENTITY_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Void SetViewEnable(::System::Boolean JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETVIEWENABLE_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void SetViewVisable(::System::Boolean OMLPEMJJFBK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETVIEWVISABLE_OFFSET))(this, OMLPEMJJFBK);
		}

		::System::Int32 SetTarget(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single MHJJPGIOCGN, ::MoleMole::Config::CampType OLNAFBAENGH, ::System::String* DHJMCKFKENB)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETTARGET_OFFSET))(this, CKPGOKHECCH, MHJJPGIOCGN, OLNAFBAENGH, DHJMCKFKENB);
		}

		::System::UInt32 SetTarget_1(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single MHJJPGIOCGN, ::MoleMole::Config::CampType OLNAFBAENGH)
		{
			return ((::System::UInt32(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_SETTARGET_1_OFFSET))(this, KECKGDFIALJ, MHJJPGIOCGN, OLNAFBAENGH);
		}

		::System::Void WarnningTarget(::System::Int32 ABHBKFJKINO, ::System::Boolean HIJAHPPMNCP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_WARNNINGTARGET_OFFSET))(this, ABHBKFJKINO, HIJAHPPMNCP);
		}

		::System::Void WarnningTargetEntity(::System::UInt32 MGMDLMBEDJF, ::System::Boolean HIJAHPPMNCP)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_WARNNINGTARGETENTITY_OFFSET))(this, MGMDLMBEDJF, HIJAHPPMNCP);
		}

		::System::Void GLNEONMKBKA(::System::UInt32 BKLGNCBNEGM, ::UnityEngine::Vector3 CFJFMMGPGKE, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO* IPMMCGDMODG)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_GLNEONMKBKA_OFFSET))(this, BKLGNCBNEGM, CFJFMMGPGKE, IPMMCGDMODG);
		}

		::System::Void IKLKKFIKCBI(::MoleMole::Battle::Entity* HOLFNDIMGJJ, ::System::Single MHJJPGIOCGN, ::MoleMole::Config::CampType OLNAFBAENGH)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_IKLKKFIKCBI_OFFSET))(this, HOLFNDIMGJJ, MHJJPGIOCGN, OLNAFBAENGH);
		}

		::System::Void GJDDPKHCENF(::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Vector3 FMDLIFKLFKI, ::UnityEngine::Vector3 CFJFMMGPGKE, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO* IPMMCGDMODG, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_GJDDPKHCENF_OFFSET))(this, IACKHFCLPJI, FMDLIFKLFKI, CFJFMMGPGKE, IPMMCGDMODG, ABHBKFJKINO);
		}

		::System::Void CENMNLEANJN(::MoleMole::Battle::Entity* HOLFNDIMGJJ, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO* IPMMCGDMODG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_CENMNLEANJN_OFFSET))(this, HOLFNDIMGJJ, IPMMCGDMODG);
		}

		::System::Void IHBCDIELJOP(::MoleMole::Battle::Entity* HOLFNDIMGJJ, ::UnityEngine::Vector3 FMDLIFKLFKI, ::UnityEngine::Vector3 CFJFMMGPGKE, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO* IPMMCGDMODG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_IHBCDIELJOP_OFFSET))(this, HOLFNDIMGJJ, FMDLIFKLFKI, CFJFMMGPGKE, IPMMCGDMODG);
		}

		::System::Boolean AAMMFJBPPFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_AAMMFJBPPFF_OFFSET))(this);
		}

		::System::Void KHCLKJBMDHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_KHCLKJBMDHH_OFFSET))(this);
		}

		::System::Single PFMKHGNPEJC(::MoleMole::Battle::Entity* HOLFNDIMGJJ)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_PFMKHGNPEJC_OFFSET))(this, HOLFNDIMGJJ);
		}

		::System::Void CENMNLEANJN_1(::UnityEngine::Vector3 CKPGOKHECCH, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO* IPMMCGDMODG)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_CENMNLEANJN_1_OFFSET))(this, CKPGOKHECCH, IPMMCGDMODG);
		}

		::MoleMole::MonoGuideViewContainer_OHKOMONFJGO* HHAEAGPGJDD()
		{
			return ((::MoleMole::MonoGuideViewContainer_OHKOMONFJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_HHAEAGPGJDD_OFFSET))(this);
		}

		::System::Void NDMCDEBBGCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_NDMCDEBBGCM_OFFSET))(this);
		}

		::System::Void CDOGLELPMCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_CDOGLELPMCB_OFFSET))(this);
		}

		::System::Void GAADDBPBJLO(::System::UInt32 BKLGNCBNEGM)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_GAADDBPBJLO_OFFSET))(this, BKLGNCBNEGM);
		}

		::System::Void IKLKKFIKCBI_1(::System::Int32 ABHBKFJKINO, ::System::Single MHJJPGIOCGN, ::MoleMole::Config::CampType OLNAFBAENGH, ::System::String* DHJMCKFKENB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::MoleMole::Config::CampType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_IKLKKFIKCBI_1_OFFSET))(this, ABHBKFJKINO, MHJJPGIOCGN, OLNAFBAENGH, DHJMCKFKENB);
		}

		::System::Void JNBLHJIFOPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_JNBLHJIFOPC_OFFSET))(this);
		}

		::UnityEngine::Transform* GBLIJJIMPGI(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_GBLIJJIMPGI_OFFSET))(this, KECKGDFIALJ);
		}

		::System::Boolean LBDNBJBIHHF(::MoleMole::Battle::Entity* HOLFNDIMGJJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_LBDNBJBIHHF_OFFSET))(this, HOLFNDIMGJJ);
		}

		::System::Void GANNFJBBMPB(::MoleMole::MonoGuideViewContainer_OHKOMONFJGO* IPMMCGDMODG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_GANNFJBBMPB_OFFSET))(this, IPMMCGDMODG);
		}

		::System::Int32 DJEIDDICKNB(::System::String* DHJMCKFKENB)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_DJEIDDICKNB_OFFSET))(this, DHJMCKFKENB);
		}

		::System::Void JFJOLPOCAAE(::MoleMole::MonoGuideViewContainer_OHKOMONFJGO* IPMMCGDMODG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGuideViewContainer_OHKOMONFJGO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_JFJOLPOCAAE_OFFSET))(this, IPMMCGDMODG);
		}

		::System::Void GAADDBPBJLO_1(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEVIEWCONTAINER_GAADDBPBJLO_1_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
