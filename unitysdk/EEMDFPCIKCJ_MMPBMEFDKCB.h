#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EntityLodDetail; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define EEMDFPCIKCJ_MMPBMEFDKCB_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x1A3207F0)
#define EEMDFPCIKCJ_MMPBMEFDKCB_BKKDENNICBG_OFFSET UNITYSDK_OFFSET(0x1A321C50)
#define EEMDFPCIKCJ_MMPBMEFDKCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3212C0)
#define EEMDFPCIKCJ_MMPBMEFDKCB_GPIEBCBBEJJ_OFFSET UNITYSDK_OFFSET(0x1A3224B0)
#define EEMDFPCIKCJ_MMPBMEFDKCB_KCPLMOPGCIN_OFFSET UNITYSDK_OFFSET(0x1A3266E0)
#define EEMDFPCIKCJ_MMPBMEFDKCB_KFLFMKLBEKL_OFFSET UNITYSDK_OFFSET(0x1A3214A0)
#define EEMDFPCIKCJ_MMPBMEFDKCB_PMEFNHLHDMA_OFFSET UNITYSDK_OFFSET(0x1A322420)

inline static constexpr unsigned int EEMDFPCIKCJ_MMPBMEFDKCB_TypeDefinitionIndex = 58574;

	class EEMDFPCIKCJ_MMPBMEFDKCB : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Mesh*>* NJMPKLNGNFI; // 0x10
		::UnityEngine::SkinnedMeshRenderer* FENKPBGBHGK; // 0x18
		::System::Action_2<::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*>* BHHKENOIOKK; // 0x20
		::Il2CppArray<::System::String*>* BNBDDBKHNLB; // 0x28
		::System::Int32 DHMOIAAGCFK; // 0x30
		::System::Int32 NLFEIPEIAPK; // 0x34
		::System::Boolean EDJNGIIMHIB; // 0x38
		::System::Void _ctor(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2, ::System::Action_2<::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*, ::System::Action_2<::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MMPBMEFDKCB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MMPBMEFDKCB_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Boolean KFLFMKLBEKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MMPBMEFDKCB_KFLFMKLBEKL_OFFSET))(this);
		}

		::System::Void BKKDENNICBG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MMPBMEFDKCB_BKKDENNICBG_OFFSET))(this, a1);
		}

		::System::Void GPIEBCBBEJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MMPBMEFDKCB_GPIEBCBBEJJ_OFFSET))(this);
		}

		::System::Void PMEFNHLHDMA(::RPG::GameCore::EntityLodDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MMPBMEFDKCB_PMEFNHLHDMA_OFFSET))(this, a1);
		}

		::System::Void KCPLMOPGCIN(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MMPBMEFDKCB_KCPLMOPGCIN_OFFSET))(this, a1);
		}

	};
