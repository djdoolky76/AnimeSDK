#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AudioManager; }
namespace System { class String; }

#define RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS250_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC6F20)
#define RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS250_0__STARTDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x1CAC8E80)
#define RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS250_0__STARTDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0x1CAC8EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager___c__DisplayClass250_0_TypeDefinitionIndex = 61012;

	class AudioManager___c__DisplayClass250_0 : public ::System::Object
	{
	public:
		::RPG::Client::AudioManager* __4__this; // 0x10
		::System::String* languageKey; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS250_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartDownload_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS250_0__STARTDOWNLOAD_B__0_OFFSET))(this);
		}

		::System::Void _StartDownload_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER___C__DISPLAYCLASS250_0__STARTDOWNLOAD_B__1_OFFSET))(this);
		}

	};
}
