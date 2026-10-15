#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_1_CTOR_OFFSET UNITYSDK_OFFSET(0xE21FD40)
#define RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_1__ASYNCAPPLYTEXTLANGUAGE_B__2_OFFSET UNITYSDK_OFFSET(0xE21FDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapDownloadManager___c__DisplayClass39_1_TypeDefinitionIndex = 61249;

	template <typename T>
	class TextmapDownloadManager___c__DisplayClass39_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Boolean valid; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_1_CTOR_OFFSET))(this);
		}

		::System::Void _AsyncApplyTextLanguage_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPDOWNLOADMANAGER___C__DISPLAYCLASS39_1__ASYNCAPPLYTEXTLANGUAGE_B__2_OFFSET))(this);
		}

	};
}
