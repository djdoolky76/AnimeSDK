#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMONJOAKHD.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class OIDDJJLHGKO;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace UnityEngine { class GameObject; }

#define ONPGIFOLIDF_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xBF605C0)
#define ONPGIFOLIDF_CIPJBBAOLBD_OFFSET UNITYSDK_OFFSET(0xBF604F0)
#define ONPGIFOLIDF_CMPBIBPFODL_OFFSET UNITYSDK_OFFSET(0xBF60550)
#define ONPGIFOLIDF_CTOR_OFFSET UNITYSDK_OFFSET(0xBF60490)
#define ONPGIFOLIDF_FONPNGPBJON_OFFSET UNITYSDK_OFFSET(0xBF60650)
#define ONPGIFOLIDF__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0xBF60920)
#define ONPGIFOLIDF__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0xBF60970)

inline static constexpr unsigned int ONPGIFOLIDF_TypeDefinitionIndex = 73831;

	class ONPGIFOLIDF : public ::GDMONJOAKHD
	{
	public:
		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ONPGIFOLIDF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::HPKACEPPPCA* CIPJBBAOLBD(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::HPKACEPPPCA*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + ONPGIFOLIDF_CIPJBBAOLBD_OFFSET))(this, a1);
		}

		::System::Void CMPBIBPFODL(::APLEMBNFLAA* a1, ::System::Boolean a2, ::System::Single a3, ::OIDDJJLHGKO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + ONPGIFOLIDF_CMPBIBPFODL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ONPGIFOLIDF_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FONPNGPBJON(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::HPKACEPPPCA* a4, ::RPG::Client::OpenWorld::StreamingItemData* a5, ::System::Collections::Generic::KeyValuePair* a6)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::HPKACEPPPCA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + ONPGIFOLIDF_FONPNGPBJON_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _RegisterInstanceToCullingSystem(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + ONPGIFOLIDF__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
		}

		::System::Void _UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + ONPGIFOLIDF__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
		}

	};
