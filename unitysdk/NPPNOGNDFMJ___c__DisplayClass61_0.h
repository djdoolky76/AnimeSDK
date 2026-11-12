#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudioListenerMode.h"
#include "unitysdk/System/Object.h"
class NPPNOGNDFMJ;
namespace UnityEngine { class Transform; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS61_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC607A50)
#define NPPNOGNDFMJ___C__DISPLAYCLASS61_0___ACQUIREAUDIOLISTENER_B__0_OFFSET UNITYSDK_OFFSET(0xC6110D0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS61_0___ACQUIREAUDIOLISTENER_B__1_OFFSET UNITYSDK_OFFSET(0xC611340)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass61_0_TypeDefinitionIndex = 61883;

	class NPPNOGNDFMJ___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::NPPNOGNDFMJ* __4__this; // 0x10
		::UnityEngine::Transform* target; // 0x18
		::System::Int32 id; // 0x20
		::System::Single maxDistance; // 0x24
		::RPG::Client::AudioListenerMode mode; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS61_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcquireAudioListener_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS61_0___ACQUIREAUDIOLISTENER_B__0_OFFSET))(this);
		}

		::System::Void __AcquireAudioListener_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS61_0___ACQUIREAUDIOLISTENER_B__1_OFFSET))(this);
		}

	};
