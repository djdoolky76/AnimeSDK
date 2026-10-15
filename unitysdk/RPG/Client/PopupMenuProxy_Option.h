#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_POPUPMENUPROXY_OPTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDC06150)

namespace RPG::Client
{
	inline static constexpr unsigned int PopupMenuProxy_Option_TypeDefinitionIndex = 72488;

	class PopupMenuProxy_Option : public ::System::Object
	{
	public:
		::System::Action* Callback; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::Client::TextID Label; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POPUPMENUPROXY_OPTION_CTOR_OFFSET))(this);
		}

	};
}
