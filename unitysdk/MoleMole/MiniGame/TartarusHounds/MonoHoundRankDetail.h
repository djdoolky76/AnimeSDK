#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_INITNAMEVIEW_OFFSET UNITYSDK_OFFSET(0x1A90FF60)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A910530)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_SWITCHACCOUNTNAMEINFO_OFFSET UNITYSDK_OFFSET(0x1A90FEE0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A910800)

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int MonoHoundRankDetail_TypeDefinitionIndex = 41654;

	class MonoHoundRankDetail : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Extension::UILocalizationText* nameText; // 0x18
		::UnityEngine::UI::Image* pcIcon; // 0x20
		::UnityEngine::UI::Extension::UILocalizationText* consoleNameText; // 0x28
		::UnityEngine::UI::Image* consoleIcon; // 0x30
		::UnityEngine::UI::Extension::UILocalizationText* timeText; // 0x38
		::UnityEngine::GameObject* myRim; // 0x40
		::System::Boolean CMHBOEIKBLG; // 0x48
		::System::Byte _padding0[0x7];
		::UnityEngine::UI::Extension::UILocalizationText* APGMDFGJFAH; // 0x50
		::System::String* NBLAJNHBLCM; // 0x58
		::System::String* LBMKCLOPGDL; // 0x60
		::System::Boolean JBIBFJGINPB; // 0x68
		::System::Byte _padding1[0x7];
		::Foundation::AssetRequestHandle KFIJAKGLEPL; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL__CTOR_OFFSET))(this);
		}

		::System::Void SwitchAccountNameInfo(::System::Boolean BKJMJHPBPKN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_SWITCHACCOUNTNAMEINFO_OFFSET))(this, BKJMJHPBPKN);
		}

		::System::Void InitNameView(::System::String* NBLAJNHBLCM, ::System::String* LBMKCLOPGDL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_INITNAMEVIEW_OFFSET))(this, NBLAJNHBLCM, LBMKCLOPGDL);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_MONOHOUNDRANKDETAIL_ONDESTROY_OFFSET))(this);
		}
	};
}
