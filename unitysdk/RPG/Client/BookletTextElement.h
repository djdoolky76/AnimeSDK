#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BOOKLETTEXTELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD21B110)
#define RPG_CLIENT_BOOKLETTEXTELEMENT_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xD21B0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletTextElement_TypeDefinitionIndex = 74473;

	class BookletTextElement
	{
	public:
		::UnityEngine::UI::Text* Content; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETTEXTELEMENT_CTOR_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETTEXTELEMENT_REFRESHVIEW_OFFSET))(this);
		}

	};
}
