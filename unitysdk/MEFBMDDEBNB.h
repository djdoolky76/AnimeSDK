#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MEFBMDDEBNB_AAIPDDMMKNJ_OFFSET UNITYSDK_OFFSET(0xB8BC1E0)
#define MEFBMDDEBNB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8BBB50)
#define MEFBMDDEBNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BC2C0)
#define MEFBMDDEBNB_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xB8BC220)
#define MEFBMDDEBNB_GAFBHHEODNE_OFFSET UNITYSDK_OFFSET(0xB8BC1A0)
#define MEFBMDDEBNB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB8BC120)

inline static constexpr unsigned int MEFBMDDEBNB_TypeDefinitionIndex = 72346;

	class MEFBMDDEBNB : public ::System::Object
	{
	public:
		::UnityEngine::Transform* PAAPGIOKLKO; // 0x10
		::UnityEngine::GameObject* ODGHHCHLMOP; // 0x18
		::UnityEngine::Animation* NDFKDAAHIBN; // 0x20
		::RPG::GameCore::TurnBasedModifierInstance* KMODPFBDEPE; // 0x28
		::Il2CppArray<::System::String*>* OLNMCMCCNPE; // 0x30
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
