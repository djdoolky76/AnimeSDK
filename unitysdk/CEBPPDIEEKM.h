#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBBCDNAHNMH.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JBACCAGFHON;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CEBPPDIEEKM_CTOR_OFFSET UNITYSDK_OFFSET(0xC77C030)
#define CEBPPDIEEKM_GLLOLGNJBHO_OFFSET UNITYSDK_OFFSET(0xC77C3A0)
#define CEBPPDIEEKM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC77C150)
#define CEBPPDIEEKM_IOBOGHECJNH_OFFSET UNITYSDK_OFFSET(0xC77C1B0)
#define CEBPPDIEEKM_JLFGPMDGLIM_OFFSET UNITYSDK_OFFSET(0xC77C5E0)
#define CEBPPDIEEKM_OLLKIHLLNOO_OFFSET UNITYSDK_OFFSET(0xC77C020)

inline static constexpr unsigned int CEBPPDIEEKM_TypeDefinitionIndex = 78079;

	class CEBPPDIEEKM : public ::HBBCDNAHNMH
	{
	public:
		::RPG::Client::UIPrefabLoader* NJGOCLCBJKI; // 0x18
		::UnityEngine::Transform* CEDODCLEPBC; // 0x20
		::UnityEngine::GameObject* OPKJNAJAGHD; // 0x28
		::System::UInt32 CACOADGJKLA; // 0x30
		::System::Void _ctor(::RPG::Client::UIPrefabLoader* a1, ::UnityEngine::Transform* a2, ::JBACCAGFHON* a3, ::System::UInt32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*, ::JBACCAGFHON*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CEBPPDIEEKM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 OLLKIHLLNOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPPDIEEKM_OLLKIHLLNOO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEBPPDIEEKM_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean IOBOGHECJNH(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CEBPPDIEEKM_IOBOGHECJNH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GLLOLGNJBHO(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CEBPPDIEEKM_GLLOLGNJBHO_OFFSET))(this, a1, a2);
		}

		::System::Void JLFGPMDGLIM(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + CEBPPDIEEKM_JLFGPMDGLIM_OFFSET))(this, a1, a2, a3);
		}

	};
