#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapRightListRowNormalContext_EBgMode.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x113665F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowNormalContext_TypeDefinitionIndex = 48164;

	class UIUrbanMapRightListRowNormalContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_1<::System::String*>* RawDescText; // 0x28
		::Foundation::AssetPath IconTextIcon; // 0x30
		::System::String* RightRawText; // 0x40
		::System::String* IconTextNum; // 0x48
		::UnityEngine::Events::UnityAction* OnClick; // 0x50
		::System::String* RightTextKey; // 0x58
		::Foundation::AssetPath DescIcon; // 0x60
		::System::String* ProgressFormat; // 0x70
		::System::String* Title; // 0x78
		::System::Func_1<::System::String*>* DescText; // 0x80
		::Foundation::AssetPath ProgressIcon; // 0x88
		::System::Int32 ProgressLeft; // 0x98
		::System::Boolean ProgressShowKMB; // 0x9C
		::System::Boolean ShowConsolePanel; // 0x9D
		::System::Boolean ZenkovTargetHideText; // 0x9E
		::System::Boolean ZenkovTargetShowBlink; // 0x9F
		::System::Int32 ProgressShowKMBDecimalPlaces; // 0xA0
		::UnityEngine::Color DescIconColor; // 0xA4
		::System::Byte _padding0[0x4];
		::System::Int64 TimeOut; // 0xB8
		::UnityEngine::Color ProgressLeftColor; // 0xC0
		::System::Boolean IconDisabled; // 0xD0
		::System::Boolean ZenkovTargetShowIcon; // 0xD1
		::System::Boolean QuestIconActive; // 0xD2
		::System::Byte _padding1[0x1];
		::System::UInt32 ZenkovTargetTimeMs; // 0xD4
		::System::Boolean ShowIconText; // 0xD8
		::System::Boolean ZenkovTargetShowLock; // 0xD9
		::System::Byte _padding2[0x6];
		::System::Int64 TimeCountDown; // 0xE0
		::System::Int32 ProgressRight; // 0xE8
		::MoleMole::UIUrbanMapRightListRowNormalContext_EBgMode BgMode; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWNORMALCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
