#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define HEOLCLACIEI_ALKENBJJKDN_OFFSET UNITYSDK_OFFSET(0x15C56E80)
#define HEOLCLACIEI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C56EF0)
#define HEOLCLACIEI_JLGGIPKJJJA_OFFSET UNITYSDK_OFFSET(0x15C56AA0)
#define HEOLCLACIEI_MMHBFLPJDBP_OFFSET UNITYSDK_OFFSET(0x15C56A40)
#define HEOLCLACIEI_MMJJJLEPKBD_OFFSET UNITYSDK_OFFSET(0x15C56C10)
#define HEOLCLACIEI_OJEAGJFIDED_OFFSET UNITYSDK_OFFSET(0x15C56D60)
#define HEOLCLACIEI_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15C56970)
#define HEOLCLACIEI_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15C569C0)
#define HEOLCLACIEI__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15C56A00)

inline static constexpr unsigned int HEOLCLACIEI_TypeDefinitionIndex = 71797;

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
