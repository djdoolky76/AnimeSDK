#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_CDHHGNIFAJO_OFFSET UNITYSDK_OFFSET(0xC9C36E0)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xC9C3760)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_CTOR_OFFSET UNITYSDK_OFFSET(0xC9C3CB0)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_HFMEMMMIJIO_OFFSET UNITYSDK_OFFSET(0xC9C3970)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_JNENJMLGBKI_OFFSET UNITYSDK_OFFSET(0xC9C3B00)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC9C3630)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_MPPDMGJGEML_OFFSET UNITYSDK_OFFSET(0xC9C3C30)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_OAPCACCPAPD_OFFSET UNITYSDK_OFFSET(0xC9C3A20)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_OLHINJGDHIP_OFFSET UNITYSDK_OFFSET(0xC9C35E0)
#define RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_TICK_OFFSET UNITYSDK_OFFSET(0xC9C37B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CharaEyeBlinkStateRandom_TypeDefinitionIndex = 68376;

	class CharaEyeBlinkStateRandom : public ::System::Object
	{
	public:
		::System::Single KeepOnProbability; // 0x10
		::UnityEngine::Vector2 KeepOnDuration; // 0x14
		::System::Single KeepOnCoolDown; // 0x1C
		::UnityEngine::Vector2 OnDuration; // 0x20
		::UnityEngine::Vector2 OffDuration; // 0x28
		::System::Single OnValue; // 0x30
		::System::Single OffValue; // 0x34
		::System::Boolean Lerp; // 0x38
		::System::Boolean _IsOn; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single _ChangeTimer; // 0x3C
		::System::Single _KeepTimer; // 0x40
		::System::Single _KeepCd; // 0x44
		::System::Single _LerpTimer; // 0x48
		::System::Single _LerpDuration; // 0x4C
		::System::Single _LerpTargetEyeIntensity; // 0x50
		::System::Single _EyeIntensity; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_CTOR_OFFSET))(this);
		}

		::System::Single OLHINJGDHIP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_OLHINJGDHIP_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_TICK_OFFSET))(this, a1);
		}

		::System::Boolean OAPCACCPAPD(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_OAPCACCPAPD_OFFSET))(this, a1);
		}

		::System::Void JNENJMLGBKI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_JNENJMLGBKI_OFFSET))(this, a1);
		}

		::System::Void HFMEMMMIJIO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_HFMEMMMIJIO_OFFSET))(this, a1);
		}

		::System::Void CDHHGNIFAJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_CDHHGNIFAJO_OFFSET))(this);
		}

		::System::Void MPPDMGJGEML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARAEYEBLINKSTATERANDOM_MPPDMGJGEML_OFFSET))(this);
		}

	};
}
