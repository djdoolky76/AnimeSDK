#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPLNGDDJINB;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define IJHPDDHMEHA_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1743B640)
#define IJHPDDHMEHA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1743B220)
#define IJHPDDHMEHA_CEOCLJDDFAB_OFFSET UNITYSDK_OFFSET(0x1743BB10)
#define IJHPDDHMEHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1743BBD0)
#define IJHPDDHMEHA_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1743B460)
#define IJHPDDHMEHA_KIFCPJNJLDA_OFFSET UNITYSDK_OFFSET(0x1743B850)
#define IJHPDDHMEHA_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x1743B7D0)
#define IJHPDDHMEHA_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1743B3E0)

inline static constexpr unsigned int IJHPDDHMEHA_TypeDefinitionIndex = 74827;

	class IJHPDDHMEHA : public ::System::Object
	{
	public:
		::System::String* GBFLBJMMPGJ; // 0x10
		::System::String* PJIMDFGEALJ; // 0x18
		::RPG::Client::IAssetOperation* DKCONOOEOBK; // 0x20
		::UnityEngine::GameObject* DIHCNFOOEFF; // 0x28
		::RPG::Client::UIController* CFKHNPGEAJA; // 0x30
		::GPLNGDDJINB* NHNHKBJJKPP; // 0x38
		::RPG::Client::UIFollow3DTarget* KKCNMLOOPHE; // 0x40
		::System::Boolean FIOCJFMLCIB; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPDDHMEHA_CTOR_OFFSET))(this);
		}

		::System::Void BPLPBPMEODA(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IJHPDDHMEHA_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + IJHPDDHMEHA_NKPPGDENJAE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPDDHMEHA_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJHPDDHMEHA_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Boolean KIFCPJNJLDA(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + IJHPDDHMEHA_KIFCPJNJLDA_OFFSET))(this, a1);
		}

		::System::Void CEOCLJDDFAB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IJHPDDHMEHA_CEOCLJDDFAB_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHPDDHMEHA_KANMCJHEFJJ_OFFSET))(this);
		}

	};
