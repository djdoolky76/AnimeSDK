#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
namespace System { class String; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_CTOR_OFFSET UNITYSDK_OFFSET(0xE46B8A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_HLFAPFCOBGJ_OFFSET UNITYSDK_OFFSET(0xE46B7A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_JMFJILBEPBG_OFFSET UNITYSDK_OFFSET(0xE46B650)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Boom_TypeDefinitionIndex = 68722;

	class WolfBroGunPlayTarget_Boom : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::Single radius; // 0xD8
		::System::Byte _padding0[0x4];
		::System::String* onBoomCustomString; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_CTOR_OFFSET))(this);
		}

		::System::Void JMFJILBEPBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_JMFJILBEPBG_OFFSET))(this);
		}

		::System::Void HLFAPFCOBGJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_BOOM_HLFAPFCOBGJ_OFFSET))(this, a1);
		}

	};
}
