#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define DLLDHFAAHEP_CTOR_OFFSET UNITYSDK_OFFSET(0x1867A340)
#define DLLDHFAAHEP_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0x1867A2E0)
#define DLLDHFAAHEP_IOICLMIEEDK_OFFSET UNITYSDK_OFFSET(0x1867A290)
#define DLLDHFAAHEP_KLHMDMNOACG_OFFSET UNITYSDK_OFFSET(0x1867A190)
#define DLLDHFAAHEP_NALDJLBEGDI_OFFSET UNITYSDK_OFFSET(0x1867A100)
#define DLLDHFAAHEP_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x18679C00)
#define DLLDHFAAHEP__ONBIND_OFFSET UNITYSDK_OFFSET(0x18679560)

inline static constexpr unsigned int DLLDHFAAHEP_TypeDefinitionIndex = 73288;

	class DLLDHFAAHEP : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* PGMAJHPHIFM; // 0x60
		::UnityEngine::UI::Text* ICGLFOCOEJB; // 0x68
		::UnityEngine::UI::Image* IONEJJPBAHK; // 0x70
		::UnityEngine::UI::Text* CEEHMOEPFMF; // 0x78
		::UnityEngine::Transform* DEJCIGBKEBM; // 0x80
		::UnityEngine::UI::Text* JHBMGKBIPJC; // 0x88
		::UnityEngine::Transform* KDOJNDJJNGM; // 0x90
		::UnityEngine::Animation* OELMLGBIEKF; // 0x98
		::UnityEngine::UI::Text* CPOINHOCHMN; // 0xA0
		::UnityEngine::Transform* LJBBPFPOKDE; // 0xA8
		::UnityEngine::UI::Text* AEJPECICBGN; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLDHFAAHEP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLDHFAAHEP__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + DLLDHFAAHEP_NKPPGDENJAE_OFFSET))(this, a1, a2);
		}

		::System::Void IOICLMIEEDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLDHFAAHEP_IOICLMIEEDK_OFFSET))(this);
		}

		::System::Boolean KLHMDMNOACG(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::StatusRow* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + DLLDHFAAHEP_KLHMDMNOACG_OFFSET))(this, a1, a2);
		}

		::System::Void NALDJLBEGDI(::RPG::GameCore::EnumStatusType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnumStatusType))((::PBYTE)hIl2Cpp + DLLDHFAAHEP_NALDJLBEGDI_OFFSET))(this, a1);
		}

		::UnityEngine::RectTransform* EBHNJMPEILL()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLDHFAAHEP_EBHNJMPEILL_OFFSET))(this);
		}

	};
