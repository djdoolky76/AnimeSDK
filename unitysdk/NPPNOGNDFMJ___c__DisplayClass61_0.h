#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AudioListenerMode.h"
#include "unitysdk/System/Object.h"
class NPPNOGNDFMJ;
namespace UnityEngine { class Transform; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS61_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19D133E0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS61_0___ACQUIREAUDIOLISTENER_B__0_OFFSET UNITYSDK_OFFSET(0x19D1CA80)
#define NPPNOGNDFMJ___C__DISPLAYCLASS61_0___ACQUIREAUDIOLISTENER_B__1_OFFSET UNITYSDK_OFFSET(0x19D1CD00)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass61_0_TypeDefinitionIndex = 61883;

	class NPPNOGNDFMJ___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10
		::NPPNOGNDFMJ* __4__this; // 0x18
		::RPG::Client::AudioListenerMode mode; // 0x20
		::System::Single maxDistance; // 0x24
		::System::Int32 id; // 0x28
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
