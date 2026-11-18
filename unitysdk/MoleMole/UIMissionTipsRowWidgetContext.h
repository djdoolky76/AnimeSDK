#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/GMKCJDDMMNN.h"
#include "unitysdk/JFGALOFBHDC.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16750100)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsRowWidgetContext_TypeDefinitionIndex = 76285;

	class UIMissionTipsRowWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TextMapKey; // 0x28
		::System::Func_1<::System::String*>* TextFunc; // 0x30
		::System::String* SubTextMapKey; // 0x38
		::Foundation::AssetPath IconPath; // 0x40
		::System::Int32 MultiQuestCount; // 0x50
		::JFGALOFBHDC QuestIconType; // 0x54
		::GMKCJDDMMNN TipType; // 0x58
		::System::Nullable_1<::UnityEngine::Color> TextColor; // 0x5C
		::System::Byte _padding0[0xC];
		::System::UInt32 GroupId; // 0x70
		::System::Int32 QuestID; // 0x74
		::System::Int32 QuestIconIndex; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSROWWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
