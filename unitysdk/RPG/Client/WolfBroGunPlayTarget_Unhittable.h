#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0xE47AFA0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0xE47ADD0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xE47AD90)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_JMFJILBEPBG_OFFSET UNITYSDK_OFFSET(0xE47AE60)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_MDNCLDAFLLJ_OFFSET UNITYSDK_OFFSET(0xE47AE10)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_Unhittable_TypeDefinitionIndex = 68736;

	class WolfBroGunPlayTarget_Unhittable : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_CTOR_OFFSET))(this);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_ISBOOMABLE_OFFSET))(this);
		}

		::System::Boolean MDNCLDAFLLJ(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_MDNCLDAFLLJ_OFFSET))(this, a1);
		}

		::System::Void JMFJILBEPBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_UNHITTABLE_JMFJILBEPBG_OFFSET))(this);
		}

	};
}
