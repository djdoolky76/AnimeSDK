#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/ABA09D021CD08194.h"
#include "unitysdk/B4F12F4802ECF11A_UIIndent.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define ABC_UI_MONOCONTENTPLATFORMADAPTER_CONTENTADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoContentPlatformAdapter_ContentAdapter_TypeDefinitionIndex = 9011;

	class MonoContentPlatformAdapter_ContentAdapter : public ::System::Object
	{
	public:
		::B39AAAD1233537D7::ABA09D021CD08194 Platform; // 0x10
		::System::Boolean ModifyIndent; // 0x14
		::System::Byte _padding0[0x3];
		::B4F12F4802ECF11A_UIIndent Indent; // 0x18
		::System::Boolean ModifyScale; // 0x38
		::System::Byte _padding1[0x3];
		::System::Single Scale; // 0x3C
		::System::Boolean ModifyAnchoredPosition; // 0x40
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector2 AnchoredPosition; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCONTENTPLATFORMADAPTER_CONTENTADAPTER__CTOR_OFFSET))(this);
		}
	};
}
