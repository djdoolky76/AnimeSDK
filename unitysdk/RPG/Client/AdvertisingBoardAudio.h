#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::GameCore { class AdvertisingBoardConfigRow; }

#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_CTOR_OFFSET UNITYSDK_OFFSET(0xC61B210)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_GJGBMNNGGEP_OFFSET UNITYSDK_OFFSET(0xC61AD60)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_JHFFPLPKOBO_OFFSET UNITYSDK_OFFSET(0xC61B0B0)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_MIOKMJOLOCD_OFFSET UNITYSDK_OFFSET(0xC61B000)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_MLIELMOCNJH_OFFSET UNITYSDK_OFFSET(0xC61AEB0)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_MUTEAUDIO_OFFSET UNITYSDK_OFFSET(0xC61ABF0)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_OGCCBFNCDHE_OFFSET UNITYSDK_OFFSET(0xC61B140)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC61AFB0)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC61AE60)
#define RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC61AD00)

namespace RPG::Client
{
	inline static constexpr unsigned int AdvertisingBoardAudio_TypeDefinitionIndex = 68313;

	class AdvertisingBoardAudio : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 BoardID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::AdvertisingBoardConfigRow* HNNGPBNDKMP; // 0x20
		::System::Single OKCJJFFHHHK; // 0x28
		::System::Boolean DGMLHDIHFKI; // 0x2C
		::System::Byte _padding1[0x3];
		::System::Single JDHDHBFNDPO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_CTOR_OFFSET))(this);
		}

		static ::System::Boolean MuteAudio()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_MUTEAUDIO_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_ONDESTROY_OFFSET))(this);
		}

		::System::Void MIOKMJOLOCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_MIOKMJOLOCD_OFFSET))(this, a1);
		}

		::System::Void JHFFPLPKOBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_JHFFPLPKOBO_OFFSET))(this);
		}

		::System::Void OGCCBFNCDHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_OGCCBFNCDHE_OFFSET))(this);
		}

		::System::Void GJGBMNNGGEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_GJGBMNNGGEP_OFFSET))(this);
		}

		::System::Void MLIELMOCNJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVERTISINGBOARDAUDIO_MLIELMOCNJH_OFFSET))(this);
		}

	};
}
