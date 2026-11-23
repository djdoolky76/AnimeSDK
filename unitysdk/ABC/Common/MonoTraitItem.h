#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/EADE0CABA1B6337C.h"

class F3B104C23996CE35;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define ABC_COMMON_MONOTRAITITEM_B3A06EC7E30F49FD_OFFSET UNITYSDK_OFFSET(0x1F33590)
#define ABC_COMMON_MONOTRAITITEM_E3D815C5535F6868_OFFSET UNITYSDK_OFFSET(0x1F33980)
#define ABC_COMMON_MONOTRAITITEM_E450BEAFA193ADE5_OFFSET UNITYSDK_OFFSET(0x1F33850)
#define ABC_COMMON_MONOTRAITITEM_E4CA1B4D9B46F1B5_OFFSET UNITYSDK_OFFSET(0x1F33900)
#define ABC_COMMON_MONOTRAITITEM_EBC6939415BCB5E7_OFFSET UNITYSDK_OFFSET(0x1F337A0)
#define ABC_COMMON_MONOTRAITITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::Common
{
	inline static constexpr unsigned int MonoTraitItem_TypeDefinitionIndex = 7639;

	class MonoTraitItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::SmoothMask* TraitIcon; // 0x20
		::UnityEngine::UI::Image* TraitFrameIcon; // 0x28
		::UnityEngine::UI::Image* TraitBGIcon; // 0x30
		::ABC::UI::MonoLocalizedTmp* TraitName; // 0x38
		::ABC::UI::MonoLocalizedTmp* TraitPieceCount; // 0x40
		::ABC::UI::MonoLocalizedTmp* TraitCondition; // 0x48
		::ABC::UI::MonoUIAutoView* IconTraitView; // 0x50
		::ABC::UI::MonoButton* TraitButton; // 0x58
		::UnityEngine::Animation* HintLight; // 0x60
		::UnityEngine::RectTransform* E350E0A63C32EC09; // 0x68
		::UnityEngine::RectTransform* AC10639E17DCE6BF; // 0x70
		::UnityEngine::RectTransform* B44DF8D8112819B9; // 0x78
		::UnityEngine::UI::Image* E9C530B03030B476; // 0x80
		::UnityEngine::UI::Image* F5338D0CDED607AC; // 0x88
		::System::Action* A874C0F1474AD99E; // 0x90

		::System::Void E3D815C5535F6868(::E865F6F8B8B44C1E E7102EB4CD1D28DD, ::AD61077CFCBEFAEA F79B4D487F303AB2, ::System::Int32 A70E5C58B2C7A692, ::System::Int32 F3851C787B08F75B, ::EADE0CABA1B6337C<::F3B104C23996CE35*> A9C76ADE1EA389AB, ::System::Action* EFE7CF398C3781FF)
		{
			return ((::System::Void(*)(::PVOID, ::E865F6F8B8B44C1E, ::AD61077CFCBEFAEA, ::System::Int32, ::System::Int32, ::EADE0CABA1B6337C<::F3B104C23996CE35*>, ::System::Action*))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOTRAITITEM_E3D815C5535F6868_OFFSET))(this, E7102EB4CD1D28DD, F79B4D487F303AB2, A70E5C58B2C7A692, F3851C787B08F75B, A9C76ADE1EA389AB, EFE7CF398C3781FF);
		}

		::System::Void B3A06EC7E30F49FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOTRAITITEM_B3A06EC7E30F49FD_OFFSET))(this);
		}

		::System::Void E4CA1B4D9B46F1B5(::System::Boolean EA07677F93AD775D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOTRAITITEM_E4CA1B4D9B46F1B5_OFFSET))(this, EA07677F93AD775D);
		}

		::System::Void E450BEAFA193ADE5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOTRAITITEM_E450BEAFA193ADE5_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOTRAITITEM__CTOR_OFFSET))(this);
		}

		::System::Void EBC6939415BCB5E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_MONOTRAITITEM_EBC6939415BCB5E7_OFFSET))(this);
		}
	};
}
