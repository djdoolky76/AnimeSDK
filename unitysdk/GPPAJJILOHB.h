#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/TimeRewindView.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TimeRewindMaterialOverlayConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define GPPAJJILOHB_CTOR_OFFSET UNITYSDK_OFFSET(0x15B65B70)
#define GPPAJJILOHB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B65C60)
#define GPPAJJILOHB_DNOPHAKEEIE_OFFSET UNITYSDK_OFFSET(0x15B66D70)
#define GPPAJJILOHB_EGLKDKFFLBN_OFFSET UNITYSDK_OFFSET(0x15B66D20)
#define GPPAJJILOHB_JKDEMMFKOJN_OFFSET UNITYSDK_OFFSET(0x15B66050)
#define GPPAJJILOHB_KMGCNLKPJAI_OFFSET UNITYSDK_OFFSET(0x15B65FE0)
#define GPPAJJILOHB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15B66550)
#define GPPAJJILOHB_PLNCKDADELF_OFFSET UNITYSDK_OFFSET(0x15B66CC0)

inline static constexpr unsigned int GPPAJJILOHB_TypeDefinitionIndex = 60839;

	class GPPAJJILOHB : public ::System::Object
	{
	public:
		::RPG::GameCore::TimeRewindMaterialOverlayConfig* OODHJJMGKMP; // 0x10
		::UnityEngine::GameObject* LNOPCAPDCKM; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TimeRewindView, ::System::Object*>* IOMMOLEMMJI; // 0x20
		::RPG::GameCore::TimeRewindView FGLFCBNJCPA; // 0x28
		::RPG::GameCore::EraStateType HFOLIOPFEGF; // 0x2C
		::System::Single GOAHNHLBFGE; // 0x30
		::System::Single CEFJACGKOLE; // 0x34
		::System::Void _ctor(::RPG::GameCore::TimeRewindMaterialOverlayConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindMaterialOverlayConfig*))((::PBYTE)hIl2Cpp + GPPAJJILOHB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPAJJILOHB_DISPOSE_OFFSET))(this);
		}

		::System::Void KMGCNLKPJAI(::RPG::GameCore::TimeRewindView a1, ::RPG::GameCore::EraStateType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + GPPAJJILOHB_KMGCNLKPJAI_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPPAJJILOHB_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void JKDEMMFKOJN(::RPG::GameCore::TimeRewindView a1, ::RPG::GameCore::EraStateType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindView, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + GPPAJJILOHB_JKDEMMFKOJN_OFFSET))(this, a1, a2);
		}

		::System::Void PLNCKDADELF(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GPPAJJILOHB_PLNCKDADELF_OFFSET))(this, a1);
		}

		::System::Void EGLKDKFFLBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPAJJILOHB_EGLKDKFFLBN_OFFSET))(this);
		}

		::System::Void DNOPHAKEEIE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GPPAJJILOHB_DNOPHAKEEIE_OFFSET))(this, a1, a2);
		}

	};
