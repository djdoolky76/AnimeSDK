#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class EntityLodDetail; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define IJEKJNBKPJN_PMOODMJKAIA_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x1742BA70)
#define IJEKJNBKPJN_PMOODMJKAIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1742D860)
#define IJEKJNBKPJN_PMOODMJKAIA_GPIEBCBBEJJ_OFFSET UNITYSDK_OFFSET(0x1742E3C0)
#define IJEKJNBKPJN_PMOODMJKAIA_KCPLMOPGCIN_OFFSET UNITYSDK_OFFSET(0x1742FB00)
#define IJEKJNBKPJN_PMOODMJKAIA_KFLFMKLBEKL_OFFSET UNITYSDK_OFFSET(0x1742E290)
#define IJEKJNBKPJN_PMOODMJKAIA_LNOBKLDNDIB_OFFSET UNITYSDK_OFFSET(0x1742DE60)
#define IJEKJNBKPJN_PMOODMJKAIA_MNHMLCKKGIP_OFFSET UNITYSDK_OFFSET(0x1742E330)

inline static constexpr unsigned int IJEKJNBKPJN_PMOODMJKAIA_TypeDefinitionIndex = 58377;

	class IJEKJNBKPJN_PMOODMJKAIA : public ::System::Object
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* JFHOEPIHNIO; // 0x10
		::System::Action_1<::UnityEngine::Material*>* ACDCPCEJALF; // 0x18
		::UnityEngine::Mesh* CPNJMKDCAJI; // 0x20
		::System::String* HMJEPBGJMMO; // 0x28
		::Il2CppArray<::System::String*>* PDPEPGJPNCA; // 0x30
		::System::Action_1<::UnityEngine::Mesh*>* ENENBMJGLKM; // 0x38
		::System::Action_1<::UnityEngine::Mesh*>* PCPCKNGGMKD; // 0x40
		::System::Boolean NEPADOGCPCA; // 0x48
		::System::Boolean IMIBEPFNFLD; // 0x49
		::System::Byte _padding0[0x2];
		::System::Int32 JGGELKCKKKM; // 0x4C
		::System::Int32 AJNEPIPLOFJ; // 0x50
		::System::Void _ctor(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::UnityEngine::Mesh*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*, ::System::String*, ::System::Action_1<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_PMOODMJKAIA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_PMOODMJKAIA_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Boolean KFLFMKLBEKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_PMOODMJKAIA_KFLFMKLBEKL_OFFSET))(this);
		}

		::System::Void LNOBKLDNDIB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_PMOODMJKAIA_LNOBKLDNDIB_OFFSET))(this, a1);
		}

		::System::Void GPIEBCBBEJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_PMOODMJKAIA_GPIEBCBBEJJ_OFFSET))(this);
		}

		::System::Void MNHMLCKKGIP(::RPG::GameCore::EntityLodDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_PMOODMJKAIA_MNHMLCKKGIP_OFFSET))(this, a1);
		}

		::System::Void KCPLMOPGCIN(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_PMOODMJKAIA_KCPLMOPGCIN_OFFSET))(this, a1);
		}

	};
