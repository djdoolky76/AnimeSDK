#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EntityLodDetail; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define EEMDFPCIKCJ_MMPBMEFDKCB_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x13A37880)
#define EEMDFPCIKCJ_MMPBMEFDKCB_BKKDENNICBG_OFFSET UNITYSDK_OFFSET(0x13A38E40)
#define EEMDFPCIKCJ_MMPBMEFDKCB_CTOR_OFFSET UNITYSDK_OFFSET(0x13A38440)
#define EEMDFPCIKCJ_MMPBMEFDKCB_GPIEBCBBEJJ_OFFSET UNITYSDK_OFFSET(0x13A39700)
#define EEMDFPCIKCJ_MMPBMEFDKCB_KCPLMOPGCIN_OFFSET UNITYSDK_OFFSET(0x13A3DAA0)
#define EEMDFPCIKCJ_MMPBMEFDKCB_KFLFMKLBEKL_OFFSET UNITYSDK_OFFSET(0x13A38650)
#define EEMDFPCIKCJ_MMPBMEFDKCB_PMEFNHLHDMA_OFFSET UNITYSDK_OFFSET(0x13A39670)

	class EEMDFPCIKCJ_MMPBMEFDKCB : public ::System::Object
	{
	public:
		::System::Action* NJMPKLNGNFI; // 0x10
		::System::Action* BHHKENOIOKK; // 0x18
		::Il2CppArray<::System::String*>* BNBDDBKHNLB; // 0x20
		::UnityEngine::SkinnedMeshRenderer* FENKPBGBHGK; // 0x28
		::System::Int32 NLFEIPEIAPK; // 0x30
		::System::Boolean EDJNGIIMHIB; // 0x34
		::System::Byte _padding0[0x3];
		::System::Int32 DHMOIAAGCFK; // 0x38
		::System::Void _ctor(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MMPBMEFDKCB_CTOR_OFFSET))(this, a1, a2, a3);
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
