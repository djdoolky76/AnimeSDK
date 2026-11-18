#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class PNHPNNENFLI_CCNMNOOOFCL;
namespace MoleMole { class BladeIllusionNPCDisplayConfig; }
namespace RootMotion::FinalIK { class LookController; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_AAHHDNLEFOP_OFFSET UNITYSDK_OFFSET(0x124607D0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_AGBNCCBHLKO_OFFSET UNITYSDK_OFFSET(0x12460490)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_AGEOKPDKIDP_OFFSET UNITYSDK_OFFSET(0x12460DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_AWAKE_OFFSET UNITYSDK_OFFSET(0x1245F690)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_GEAKLEMFLJK_OFFSET UNITYSDK_OFFSET(0x1245F800)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_HIDE_OFFSET UNITYSDK_OFFSET(0x124605D0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_HOHNPBHKPFH_OFFSET UNITYSDK_OFFSET(0x12460CA0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_INITCONFIG_OFFSET UNITYSDK_OFFSET(0x1245FD60)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_JCKIMKAOMME_OFFSET UNITYSDK_OFFSET(0x12460530)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_KBMJDHGMAHL_OFFSET UNITYSDK_OFFSET(0x12461130)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12460690)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12460AA0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x124608D0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1245FDC0)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12460C40)
#define MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x12460BF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int MonoBladeIllusionNPC_TypeDefinitionIndex = 78619;

	class MonoBladeIllusionNPC : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_GGABAEJECOD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBladeIllusionNPC_TypeDefinitionIndex)->GetStaticField(0xF020);
		}
		static ::System::Int32* StaticGet_LPJJEMGCBID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBladeIllusionNPC_TypeDefinitionIndex)->GetStaticField(0xF024);
		}
		static ::System::Int32* StaticGet_OLCLHEJIIHP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoBladeIllusionNPC_TypeDefinitionIndex)->GetStaticField(0xF028);
		}
		::UnityEngine::ParticleSystem* MPOCJEOLAMH; // 0x18
		::RootMotion::FinalIK::LookController* OOBBCGGBNJJ; // 0x20
		::Il2CppArray<::UnityEngine::Material*>* KCOIBHLNIBP; // 0x28
		::UnityEngine::Animator* FPGIEMNHLEF; // 0x30
		::MoleMole::BladeIllusionNPCDisplayConfig* CEJENBBHBBG; // 0x38
		::System::Boolean KAANMGJABDH; // 0x40
		::System::Boolean MNMKJKBDIHI; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single LIHEEBKIJND; // 0x44
		::System::Boolean BGMHCLFDOFP; // 0x48
		::System::Byte _padding1[0x3];
		::System::Single LKLNOBIFGBO; // 0x4C
		::PNHPNNENFLI_CCNMNOOOFCL* CDBBBGFAMJJ; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_AWAKE_OFFSET))(this);
		}

		::System::Void InitConfig(::MoleMole::BladeIllusionNPCDisplayConfig* DFMKILICPFB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BladeIllusionNPCDisplayConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_INITCONFIG_OFFSET))(this, DFMKILICPFB);
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONSHOW_OFFSET))(this);
		}

		::System::Void Hide(::PNHPNNENFLI_CCNMNOOOFCL* CEOLFAJANGE)
		{
			return ((::System::Void(*)(::PVOID, ::PNHPNNENFLI_CCNMNOOOFCL*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_HIDE_OFFSET))(this, CEOLFAJANGE);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void HOHNPBHKPFH(::System::Single LEFHBNBFIFK, ::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_HOHNPBHKPFH_OFFSET))(LEFHBNBFIFK, KNNDDLMOKCG);
		}

		static ::System::Void KBMJDHGMAHL(::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_KBMJDHGMAHL_OFFSET))(KNNDDLMOKCG);
		}

		static ::System::Void AGBNCCBHLKO(::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_AGBNCCBHLKO_OFFSET))(KNNDDLMOKCG);
		}

		::System::Void AAHHDNLEFOP(::System::Single LEFHBNBFIFK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_AAHHDNLEFOP_OFFSET))(this, LEFHBNBFIFK);
		}

		::System::Void GEAKLEMFLJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_GEAKLEMFLJK_OFFSET))(this);
		}

		static ::System::Void JCKIMKAOMME(::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_JCKIMKAOMME_OFFSET))(KNNDDLMOKCG);
		}

		static ::System::Void AGEOKPDKIDP(::UnityEngine::Material* KNNDDLMOKCG)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_MONOBLADEILLUSIONNPC_AGEOKPDKIDP_OFFSET))(KNNDDLMOKCG);
		}
	};
}
