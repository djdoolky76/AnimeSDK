#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/UIStateActionTag.h"
#include "unitysdk/System/Attribute.h"

#define AKJJCDOGBJN_CTOR_OFFSET UNITYSDK_OFFSET(0x19D5DF40)
#define AKJJCDOGBJN_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x19D5DF50)

inline static constexpr unsigned int AKJJCDOGBJN_TypeDefinitionIndex = 76210;

	class AKJJCDOGBJN : public ::System::Attribute
	{
	public:
		::RPG::Client::UI::UIStateCtrl::UIStateActionTag _Tags_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::UI::UIStateCtrl::UIStateActionTag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UI::UIStateCtrl::UIStateActionTag))((::PBYTE)hIl2Cpp + AKJJCDOGBJN_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::UI::UIStateCtrl::UIStateActionTag get_Tags()
		{
			return ((::RPG::Client::UI::UIStateCtrl::UIStateActionTag(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJJCDOGBJN_GET_TAGS_OFFSET))(this);
		}

	};
