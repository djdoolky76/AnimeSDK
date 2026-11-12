#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MEFBMDDEBNB_AAIPDDMMKNJ_OFFSET UNITYSDK_OFFSET(0xC173D40)
#define MEFBMDDEBNB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC1736B0)
#define MEFBMDDEBNB_CTOR_OFFSET UNITYSDK_OFFSET(0xC173E20)
#define MEFBMDDEBNB_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xC173D80)
#define MEFBMDDEBNB_GAFBHHEODNE_OFFSET UNITYSDK_OFFSET(0xC173D00)
#define MEFBMDDEBNB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC173C80)

inline static constexpr unsigned int MEFBMDDEBNB_TypeDefinitionIndex = 74426;

	class MEFBMDDEBNB : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* ODGHHCHLMOP; // 0x10
		::UnityEngine::Animation* NDFKDAAHIBN; // 0x18
		::RPG::GameCore::TurnBasedModifierInstance* KMODPFBDEPE; // 0x20
		::Il2CppArray<::System::String*>* OLNMCMCCNPE; // 0x28
		::UnityEngine::Transform* PAAPGIOKLKO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBMDDEBNB_CTOR_OFFSET))(this);
		}

		::System::Void BPLPBPMEODA(::UnityEngine::Transform* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + MEFBMDDEBNB_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBMDDEBNB_HADOHLNHHGB_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedModifierInstance* GAFBHHEODNE()
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBMDDEBNB_GAFBHHEODNE_OFFSET))(this);
		}

		::UnityEngine::Transform* AAIPDDMMKNJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBMDDEBNB_AAIPDDMMKNJ_OFFSET))(this);
		}

		::System::Void DKKJNPPHDPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFBMDDEBNB_DKKJNPPHDPM_OFFSET))(this);
		}

	};
