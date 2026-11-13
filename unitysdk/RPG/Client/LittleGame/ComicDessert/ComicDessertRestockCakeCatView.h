#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDeviceView.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_AEIBEKDMDNO_OFFSET UNITYSDK_OFFSET(0x1E1520F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E152940)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_NMGIJPPGODI_OFFSET UNITYSDK_OFFSET(0x1E152860)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_PLAYCLICKBOUNCE_OFFSET UNITYSDK_OFFSET(0x1E151F40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_PLAYRESTOCKANIM_OFFSET UNITYSDK_OFFSET(0x1E152640)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E152160)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_SETFROZEN_OFFSET UNITYSDK_OFFSET(0x1E1521C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_SETRESTOCKLINEBOXACTIVE_OFFSET UNITYSDK_OFFSET(0x1E1527F0)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertRestockCakeCatView_TypeDefinitionIndex = 80094;

	class ComicDessertRestockCakeCatView : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView
	{
	public:
		::UnityEngine::Animator* _Animator; // 0xA8
		::UnityEngine::Transform* _RestockLineBox; // 0xB0
		::System::String* _ChangeModeParam; // 0xB8
		::System::String* _RestockParam; // 0xC0
		::System::Boolean IBABIJBHEAB; // 0xC8
		::System::Boolean OKPFKHJALOH; // 0xC9
		::System::Byte _padding0[0x6];
		::UnityEngine::Material* ODNNNDCPFIF; // 0xD0
		// static const ::System::String* JMAPHMONEBA; // 0x0
		// static const ::System::String* DONPGCAPCAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_CTOR_OFFSET))(this);
		}

		::System::Void PlayClickBounce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_PLAYCLICKBOUNCE_OFFSET))(this);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Void PlayRestockAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_PLAYRESTOCKANIM_OFFSET))(this);
		}

		::System::Void AEIBEKDMDNO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_AEIBEKDMDNO_OFFSET))(this, a1);
		}

		::System::Void SetRestockLineBoxActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_SETRESTOCKLINEBOXACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetFrozen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_SETFROZEN_OFFSET))(this, a1);
		}

		::UnityEngine::Material* NMGIJPPGODI()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTRESTOCKCAKECATVIEW_NMGIJPPGODI_OFFSET))(this);
		}

	};
}
