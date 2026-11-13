#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class FFLFKJJLJEJ;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class SmoothMask; }

#define JDNDFEHHDEM_CTOR_OFFSET UNITYSDK_OFFSET(0x130203A0)
#define JDNDFEHHDEM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x130200F0)
#define JDNDFEHHDEM_PHIMKHKMNOH_OFFSET UNITYSDK_OFFSET(0x13020210)
#define JDNDFEHHDEM__ONBIND_OFFSET UNITYSDK_OFFSET(0x1301FF90)

inline static constexpr unsigned int JDNDFEHHDEM_TypeDefinitionIndex = 74350;

	class JDNDFEHHDEM : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::SmoothMask* LMAMGADEJDM; // 0x60
		::FFLFKJJLJEJ* AKEKCBLCBEK; // 0x68
		::RPG::Client::GridFightAugmentConfig* IGHAHBNLIJA; // 0x70
		::RPG::Client::MonoUIColorSwitcher* NFNKELKMJPJ; // 0x78
		::UnityEngine::Sprite* EKHDCANFFIL; // 0x80
		::System::Double GBOONBHNDFC; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNDFEHHDEM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNDFEHHDEM__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::FFLFKJJLJEJ* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::FFLFKJJLJEJ*, ::System::Double))((::PBYTE)hIl2Cpp + JDNDFEHHDEM_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void PHIMKHKMNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNDFEHHDEM_PHIMKHKMNOH_OFFSET))(this);
		}

	};
