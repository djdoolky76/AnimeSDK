#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/System/Object.h"
class AIBOPLOBAFN;
class JPBFLGOGDIO;
class LEKNHIPIKCF;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define JPBFLGOGDIO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B4EAEC0)
#define JPBFLGOGDIO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B4EB1D0)
#define JPBFLGOGDIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EB220)
#define JPBFLGOGDIO_DIGPJGDGLPB_OFFSET UNITYSDK_OFFSET(0x1B4EAF30)
#define JPBFLGOGDIO_DJPHNOJOGII_OFFSET UNITYSDK_OFFSET(0x1B4EB050)
#define JPBFLGOGDIO_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1B4EAE80)
#define JPBFLGOGDIO_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1B4EAEA0)
#define JPBFLGOGDIO_MLALEMMAIFE_OFFSET UNITYSDK_OFFSET(0x1B4EAFB0)
#define JPBFLGOGDIO_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x1B4EB140)
#define JPBFLGOGDIO_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x1B4EB0B0)
#define JPBFLGOGDIO_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1B4EAE90)
#define JPBFLGOGDIO_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1B4EAEB0)
#define JPBFLGOGDIO_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1B4EB190)

inline static constexpr unsigned int JPBFLGOGDIO_TypeDefinitionIndex = 60657;

	class JPBFLGOGDIO : public ::System::Object
	{
	public:
		::System::Action_2<::UnityEngine::GameObject*, ::LEKNHIPIKCF*>* GPOMBCJHLDP; // 0x10
		::System::Action_1<::UnityEngine::GameObject*>* IMDLGFPMPEK; // 0x18
		::AIBOPLOBAFN* _Owner_k__BackingField; // 0x20
		::RPG::Client::GameObjectSpawnPriority _Priority_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_CTOR_OFFSET))(this);
		}

		::AIBOPLOBAFN* get_Owner()
		{
			return ((::AIBOPLOBAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::AIBOPLOBAFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_SET_OWNER_OFFSET))(this, a1);
		}

		::RPG::Client::GameObjectSpawnPriority get_Priority()
		{
			return ((::RPG::Client::GameObjectSpawnPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::RPG::Client::GameObjectSpawnPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectSpawnPriority))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_SET_PRIORITY_OFFSET))(this, a1);
		}

		static ::JPBFLGOGDIO* BPLPBPMEODA(::System::Action_1<::UnityEngine::GameObject*>* a1, ::RPG::Client::GameObjectSpawnPriority a2)
		{
			return ((::JPBFLGOGDIO*(*)(::System::Action_1<::UnityEngine::GameObject*>*, ::RPG::Client::GameObjectSpawnPriority))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::JPBFLGOGDIO* DIGPJGDGLPB(::System::Action_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::JPBFLGOGDIO*(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_DIGPJGDGLPB_OFFSET))(this, a1);
		}

		::JPBFLGOGDIO* MLALEMMAIFE(::System::Action_2<::UnityEngine::GameObject*, ::LEKNHIPIKCF*>* a1)
		{
			return ((::JPBFLGOGDIO*(*)(::PVOID, ::System::Action_2<::UnityEngine::GameObject*, ::LEKNHIPIKCF*>*))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_MLALEMMAIFE_OFFSET))(this, a1);
		}

		::System::Void DJPHNOJOGII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_DJPHNOJOGII_OFFSET))(this);
		}

		::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_ONSPAWNASYNC_OFFSET))(this, a1);
		}

		::System::Void OnCancelSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_ONCANCELSPAWN_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFLGOGDIO_CLEAR_OFFSET))(this);
		}

	};
