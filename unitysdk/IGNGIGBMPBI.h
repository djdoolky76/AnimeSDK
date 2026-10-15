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

#define IGNGIGBMPBI_ALGIMKIAJMM_OFFSET UNITYSDK_OFFSET(0x164146E0)
#define IGNGIGBMPBI_BEKIFJAHMDI_OFFSET UNITYSDK_OFFSET(0x16414790)
#define IGNGIGBMPBI_CKGPHKHDGKD_OFFSET UNITYSDK_OFFSET(0x16414510)
#define IGNGIGBMPBI_CTOR_OFFSET UNITYSDK_OFFSET(0x164144B0)
#define IGNGIGBMPBI_GLLOLGNJBHO_OFFSET UNITYSDK_OFFSET(0x164149E0)
#define IGNGIGBMPBI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16414660)
#define IGNGIGBMPBI_IOBOGHECJNH_OFFSET UNITYSDK_OFFSET(0x16414870)
#define IGNGIGBMPBI_JLFGPMDGLIM_OFFSET UNITYSDK_OFFSET(0x16414B90)
#define IGNGIGBMPBI_KCNHDABIJHI_OFFSET UNITYSDK_OFFSET(0x16414E80)
#define IGNGIGBMPBI_OBJDDAIFHAI_OFFSET UNITYSDK_OFFSET(0x16414740)
#define IGNGIGBMPBI_OLLKIHLLNOO_OFFSET UNITYSDK_OFFSET(0x164144A0)

	class IGNGIGBMPBI : public ::HBBCDNAHNMH
	{
	public:
		::UnityEngine::GameObject* OPKJNAJAGHD; // 0x18
		::RPG::Client::UIPrefabLoader* NJGOCLCBJKI; // 0x20
		::UnityEngine::Transform* CEDODCLEPBC; // 0x28
		::System::Boolean LOCKEDLOMKA; // 0x30
		// static const ::System::String* LHMEGMLGNBD; // 0x0
		// static const ::System::String* GNBBMHEKKPE; // 0x0
		::System::Void _ctor(::RPG::Client::UIPrefabLoader* a1, ::UnityEngine::Transform* a2, ::JBACCAGFHON* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPrefabLoader*, ::UnityEngine::Transform*, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + IGNGIGBMPBI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 OLLKIHLLNOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNGIGBMPBI_OLLKIHLLNOO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNGIGBMPBI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void OBJDDAIFHAI(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IGNGIGBMPBI_OBJDDAIFHAI_OFFSET))(this, a1);
		}

		::System::Boolean IOBOGHECJNH(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + IGNGIGBMPBI_IOBOGHECJNH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GLLOLGNJBHO(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + IGNGIGBMPBI_GLLOLGNJBHO_OFFSET))(this, a1, a2);
		}

		::System::Void JLFGPMDGLIM(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + IGNGIGBMPBI_JLFGPMDGLIM_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* CKGPHKHDGKD(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IGNGIGBMPBI_CKGPHKHDGKD_OFFSET))(this, a1);
		}

		::System::Void ALGIMKIAJMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNGIGBMPBI_ALGIMKIAJMM_OFFSET))(this);
		}

		::System::Void BEKIFJAHMDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNGIGBMPBI_BEKIFJAHMDI_OFFSET))(this);
		}

		::System::Boolean KCNHDABIJHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNGIGBMPBI_KCNHDABIJHI_OFFSET))(this);
		}

	};
