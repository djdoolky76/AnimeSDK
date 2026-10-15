#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget_CustomEvent_CustomEventMode.h"
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xE477710)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_HLFAPFCOBGJ_OFFSET UNITYSDK_OFFSET(0xE477410)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_JMFJILBEPBG_OFFSET UNITYSDK_OFFSET(0xE477280)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0xE476FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_CustomEvent_TypeDefinitionIndex = 68724;

	class WolfBroGunPlayTarget_CustomEvent : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::String* customString; // 0xD8
		::RPG::Client::WolfBroGunPlayTarget_CustomEvent_CustomEventMode eventMode; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_CTOR_OFFSET))(this);
		}

		::System::Void ShowScore(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_SHOWSCORE_OFFSET))(this, a1, a2);
		}

		::System::Void JMFJILBEPBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_JMFJILBEPBG_OFFSET))(this);
		}

		::System::Void HLFAPFCOBGJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CUSTOMEVENT_HLFAPFCOBGJ_OFFSET))(this, a1);
		}

	};
}
