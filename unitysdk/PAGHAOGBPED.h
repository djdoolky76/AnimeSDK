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

#define PAGHAOGBPED_ALGIMKIAJMM_OFFSET UNITYSDK_OFFSET(0xBFC9560)
#define PAGHAOGBPED_CKGPHKHDGKD_OFFSET UNITYSDK_OFFSET(0xBFC93C0)
#define PAGHAOGBPED_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC9240)
#define PAGHAOGBPED_GLLOLGNJBHO_OFFSET UNITYSDK_OFFSET(0xBFC9830)
#define PAGHAOGBPED_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBFC94E0)
#define PAGHAOGBPED_IOBOGHECJNH_OFFSET UNITYSDK_OFFSET(0xBFC95C0)
#define PAGHAOGBPED_JLFGPMDGLIM_OFFSET UNITYSDK_OFFSET(0xBFC9960)
#define PAGHAOGBPED_OLLKIHLLNOO_OFFSET UNITYSDK_OFFSET(0xBFC9230)
#define PAGHAOGBPED_PFKOMBMKDKN_OFFSET UNITYSDK_OFFSET(0xBFC96D0)

	class PAGHAOGBPED : public ::HBBCDNAHNMH
	{
	public:
		::RPG::Client::UIPrefabLoader* NJGOCLCBJKI; // 0x18
		::UnityEngine::Transform* CEDODCLEPBC; // 0x20
		::UnityEngine::GameObject* OPKJNAJAGHD; // 0x28
		::System::Single COAELIHGAHH; // 0x30
		// static const ::System::String* LHMEGMLGNBD; // 0x0
		// static const ::System::String* OJKLNGPKPBB; // 0x0
		::System::Void _ctor(::RPG::Client::UIPrefabLoader* a1, ::UnityEngine::Transform* a2, ::JBACCAGFHON* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + PAGHAOGBPED_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 OLLKIHLLNOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGHAOGBPED_OLLKIHLLNOO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGHAOGBPED_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean IOBOGHECJNH(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + PAGHAOGBPED_IOBOGHECJNH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GLLOLGNJBHO(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + PAGHAOGBPED_GLLOLGNJBHO_OFFSET))(this, a1, a2);
		}

		::System::Void JLFGPMDGLIM(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + PAGHAOGBPED_JLFGPMDGLIM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PFKOMBMKDKN(::UnityEngine::Vector2 a1, ::System::Boolean a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PAGHAOGBPED_PFKOMBMKDKN_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* CKGPHKHDGKD(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PAGHAOGBPED_CKGPHKHDGKD_OFFSET))(this, a1);
		}

		::System::Void ALGIMKIAJMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGHAOGBPED_ALGIMKIAJMM_OFFSET))(this);
		}

	};
