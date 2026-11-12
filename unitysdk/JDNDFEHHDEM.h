#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class FFLFKJJLJEJ;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class SmoothMask; }

#define JDNDFEHHDEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB920300)
#define JDNDFEHHDEM_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB920060)
#define JDNDFEHHDEM_PHIMKHKMNOH_OFFSET UNITYSDK_OFFSET(0xB920180)
#define JDNDFEHHDEM__ONBIND_OFFSET UNITYSDK_OFFSET(0xB91FF00)

inline static constexpr unsigned int JDNDFEHHDEM_TypeDefinitionIndex = 74351;

	class JDNDFEHHDEM : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::SmoothMask* LMAMGADEJDM; // 0x60
		::FFLFKJJLJEJ* AKEKCBLCBEK; // 0x68
		::UnityEngine::Sprite* EKHDCANFFIL; // 0x70
		::RPG::Client::GridFightAugmentConfig* IGHAHBNLIJA; // 0x78
		::RPG::Client::MonoUIColorSwitcher* NFNKELKMJPJ; // 0x80
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
