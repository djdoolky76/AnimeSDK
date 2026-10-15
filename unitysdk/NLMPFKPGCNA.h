#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class AnimatorOverrideManager; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RuntimeAnimatorController; }

#define NLMPFKPGCNA_BLNNIJLNDEC_OFFSET UNITYSDK_OFFSET(0xBC73D50)
#define NLMPFKPGCNA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC74ED0)
#define NLMPFKPGCNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC73E10)
#define NLMPFKPGCNA_ELOGKFLBLOM_OFFSET UNITYSDK_OFFSET(0xBC74030)
#define NLMPFKPGCNA_GEMLNGKCAHO_OFFSET UNITYSDK_OFFSET(0xBC74850)
#define NLMPFKPGCNA_GMIBDCOMKML_OFFSET UNITYSDK_OFFSET(0xBC74E70)
#define NLMPFKPGCNA_HNODKEDDAPC_OFFSET UNITYSDK_OFFSET(0xBC74D50)
#define NLMPFKPGCNA_HNPGOMCMODM_OFFSET UNITYSDK_OFFSET(0xBC749B0)
#define NLMPFKPGCNA_KEMOCLLBELE_OFFSET UNITYSDK_OFFSET(0xBC74790)
#define NLMPFKPGCNA_LBPLLNJEKDH_OFFSET UNITYSDK_OFFSET(0xBC742E0)
#define NLMPFKPGCNA_MBBLJCHAEEH_OFFSET UNITYSDK_OFFSET(0xBC74670)
#define NLMPFKPGCNA_OBBPFJOIMGO_OFFSET UNITYSDK_OFFSET(0xBC74900)
#define NLMPFKPGCNA_OEGPNPMDACP_OFFSET UNITYSDK_OFFSET(0xBC74E10)
#define NLMPFKPGCNA__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xBC73C90)

inline static constexpr unsigned int NLMPFKPGCNA_TypeDefinitionIndex = 57173;

	class NLMPFKPGCNA : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x18
		::UnityEngine::Animator* NGLDNIENHLJ; // 0x20
		::System::String* FOMAKMJEAEN; // 0x28
		::RPG::Client::AnimatorOverrideManager* EOJOJPEPCPN; // 0x30
		::UnityEngine::RuntimeAnimatorController* JKAKLFJIBKN; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DEFLKIEBJKI; // 0x40
		// static const ::System::String* NMCHKGLPNFL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMPFKPGCNA__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_DISPOSE_OFFSET))(this);
		}

		::System::Void BLNNIJLNDEC(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_BLNNIJLNDEC_OFFSET))(this, a1);
		}

		::System::Void MBBLJCHAEEH(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_MBBLJCHAEEH_OFFSET))(this, a1, a2);
		}

		::System::Void GEMLNGKCAHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_GEMLNGKCAHO_OFFSET))(this);
		}

		::System::Void OBBPFJOIMGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_OBBPFJOIMGO_OFFSET))(this);
		}

		::System::Void HNPGOMCMODM(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_HNPGOMCMODM_OFFSET))(this, a1, a2);
		}

		::System::Void LBPLLNJEKDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_LBPLLNJEKDH_OFFSET))(this);
		}

		::System::Void ELOGKFLBLOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_ELOGKFLBLOM_OFFSET))(this);
		}

		::System::Boolean HNODKEDDAPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_HNODKEDDAPC_OFFSET))(this);
		}

		::System::Boolean OEGPNPMDACP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_OEGPNPMDACP_OFFSET))(this);
		}

		::System::Boolean GMIBDCOMKML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_GMIBDCOMKML_OFFSET))(this);
		}

		::RPG::Client::AnimatorOverrideManager* KEMOCLLBELE()
		{
			return ((::RPG::Client::AnimatorOverrideManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMPFKPGCNA_KEMOCLLBELE_OFFSET))(this);
		}

	};
