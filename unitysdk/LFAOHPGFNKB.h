#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFCMMMMMIIO.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define LFAOHPGFNKB_BOEFIBKPEDC_OFFSET UNITYSDK_OFFSET(0xB65F990)
#define LFAOHPGFNKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB660230)
#define LFAOHPGFNKB_MBOCAJADFOO_OFFSET UNITYSDK_OFFSET(0xB65FDA0)
#define LFAOHPGFNKB_NIBJNBCAAIA_OFFSET UNITYSDK_OFFSET(0xB65FA10)
#define LFAOHPGFNKB_NJEPOLNAFGF_OFFSET UNITYSDK_OFFSET(0xB65FA90)
#define LFAOHPGFNKB_PAHEIGLPKJE_OFFSET UNITYSDK_OFFSET(0xB6601A0)

	class LFAOHPGFNKB : public ::KFCMMMMMIIO
	{
	public:
		::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAOHPGFNKB_CTOR_OFFSET))(this);
		}

		::System::Void BOEFIBKPEDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAOHPGFNKB_BOEFIBKPEDC_OFFSET))(this);
		}

		::System::Void NIBJNBCAAIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAOHPGFNKB_NIBJNBCAAIA_OFFSET))(this);
		}

		::System::Boolean NJEPOLNAFGF(::UnityEngine::Vector2 a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + LFAOHPGFNKB_NJEPOLNAFGF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* MBOCAJADFOO(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFAOHPGFNKB_MBOCAJADFOO_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityHipplenInteractInfoRow* PAHEIGLPKJE()
		{
			return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFAOHPGFNKB_PAHEIGLPKJE_OFFSET))(this);
		}

	};
