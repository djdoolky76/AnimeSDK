#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RecordPropertyType.h"
#include "unitysdk/System/Object.h"
class BHNGBMGOPIA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }

#define KOAIODKBPJG_CTOR_OFFSET UNITYSDK_OFFSET(0xB58F430)
#define KOAIODKBPJG_DBNCJFBIHAL_OFFSET UNITYSDK_OFFSET(0xB58F500)
#define KOAIODKBPJG_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0xB58F970)
#define KOAIODKBPJG_KEDKMLMOPDB_OFFSET UNITYSDK_OFFSET(0xB58F4B0)
#define KOAIODKBPJG_OOOAAALPEGJ_OFFSET UNITYSDK_OFFSET(0xB58F550)
#define KOAIODKBPJG_PFMHCPFPMIM_OFFSET UNITYSDK_OFFSET(0xB58F710)

inline static constexpr unsigned int KOAIODKBPJG_TypeDefinitionIndex = 72630;

	class KOAIODKBPJG : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* GGOPIDNLIJJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::RecordPropertyType, ::BHNGBMGOPIA*>* OLLHMJJAMCK; // 0x18
		::UnityEngine::Behaviour* EOIJBPGPNAE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIODKBPJG_CTOR_OFFSET))(this);
		}

		::System::Void KEDKMLMOPDB(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KOAIODKBPJG_KEDKMLMOPDB_OFFSET))(this, a1);
		}

		::System::Void DBNCJFBIHAL(::UnityEngine::Behaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + KOAIODKBPJG_DBNCJFBIHAL_OFFSET))(this, a1);
		}

		::System::Void OOOAAALPEGJ(::RPG::Client::RecordPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RecordPropertyType))((::PBYTE)hIl2Cpp + KOAIODKBPJG_OOOAAALPEGJ_OFFSET))(this, a1);
		}

		::System::Void PFMHCPFPMIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIODKBPJG_PFMHCPFPMIM_OFFSET))(this);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOAIODKBPJG_JNACBACPDEM_OFFSET))(this);
		}

	};
