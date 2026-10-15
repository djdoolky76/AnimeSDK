#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define IJNBFJJHKPG_CHBGFBCNAHK_OFFSET UNITYSDK_OFFSET(0x1646F580)
#define IJNBFJJHKPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1646FA40)
#define IJNBFJJHKPG_DINPFDEJOPB_OFFSET UNITYSDK_OFFSET(0x1646F360)
#define IJNBFJJHKPG_OGMJLKNDKOD_OFFSET UNITYSDK_OFFSET(0x1646F630)
#define IJNBFJJHKPG_OJLHOKGPGNB_OFFSET UNITYSDK_OFFSET(0x1646F4D0)
#define IJNBFJJHKPG_PECLGBDGJOI_OFFSET UNITYSDK_OFFSET(0x1646F420)

	class IJNBFJJHKPG : public ::System::Object
	{
	public:
		::UnityEngine::Transform* KFJPEAGADMO; // 0x10
		::UnityEngine::Transform* KOGDBMOCMME; // 0x18
		::UnityEngine::Vector3 HBLBDGKJLCG; // 0x20
		::UnityEngine::Vector3 OABMIBCBAKF; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNBFJJHKPG_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 DINPFDEJOPB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNBFJJHKPG_DINPFDEJOPB_OFFSET))(this);
		}

		::System::Void PECLGBDGJOI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IJNBFJJHKPG_PECLGBDGJOI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OJLHOKGPGNB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNBFJJHKPG_OJLHOKGPGNB_OFFSET))(this);
		}

		::System::Void CHBGFBCNAHK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IJNBFJJHKPG_CHBGFBCNAHK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OGMJLKNDKOD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNBFJJHKPG_OGMJLKNDKOD_OFFSET))(this);
		}

	};
