#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define HEOLCLACIEI_ALKENBJJKDN_OFFSET UNITYSDK_OFFSET(0x15C63C60)
#define HEOLCLACIEI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C63CD0)
#define HEOLCLACIEI_JLGGIPKJJJA_OFFSET UNITYSDK_OFFSET(0x15C63880)
#define HEOLCLACIEI_MMHBFLPJDBP_OFFSET UNITYSDK_OFFSET(0x15C63820)
#define HEOLCLACIEI_MMJJJLEPKBD_OFFSET UNITYSDK_OFFSET(0x15C639F0)
#define HEOLCLACIEI_OJEAGJFIDED_OFFSET UNITYSDK_OFFSET(0x15C63B40)
#define HEOLCLACIEI_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15C63750)
#define HEOLCLACIEI_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15C637A0)
#define HEOLCLACIEI__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15C637E0)

	class HEOLCLACIEI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* GGADAPDEIAD; // 0x60
		::UnityEngine::RectTransform* JAKMENOCECF; // 0x68
		::System::Single KOLOABGLOFA; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOLCLACIEI_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HEOLCLACIEI_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOLCLACIEI_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOLCLACIEI__ONDISPOSE_OFFSET))(this);
		}

		::System::Void MMHBFLPJDBP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEOLCLACIEI_MMHBFLPJDBP_OFFSET))(this, a1);
		}

		::System::Void JLGGIPKJJJA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEOLCLACIEI_JLGGIPKJJJA_OFFSET))(this, a1);
		}

		::System::Void OJEAGJFIDED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEOLCLACIEI_OJEAGJFIDED_OFFSET))(this, a1);
		}

		::System::Void MMJJJLEPKBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOLCLACIEI_MMJJJLEPKBD_OFFSET))(this);
		}

		::System::Boolean ALKENBJJKDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEOLCLACIEI_ALKENBJJKDN_OFFSET))(this);
		}

	};
