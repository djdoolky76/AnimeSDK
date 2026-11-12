#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPPNOGNDFMJ;
class NPPNOGNDFMJ_EGCBFFIPCPJ;
namespace RPG::Client { class AudioManager; }
namespace System { class String; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS59_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC607780)
#define NPPNOGNDFMJ___C__DISPLAYCLASS59_0___ACQUIREAUDIOSTATE_B__0_OFFSET UNITYSDK_OFFSET(0xC610A90)
#define NPPNOGNDFMJ___C__DISPLAYCLASS59_0___ACQUIREAUDIOSTATE_B__1_OFFSET UNITYSDK_OFFSET(0xC610D50)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass59_0_TypeDefinitionIndex = 61882;

	class NPPNOGNDFMJ___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::RPG::Client::AudioManager* audioManager; // 0x10
		::NPPNOGNDFMJ_EGCBFFIPCPJ* entry; // 0x18
		::System::String* stackKey; // 0x20
		::NPPNOGNDFMJ* __4__this; // 0x28
		::System::Boolean acquired; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS59_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcquireAudioState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS59_0___ACQUIREAUDIOSTATE_B__0_OFFSET))(this);
		}

		::System::Void __AcquireAudioState_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS59_0___ACQUIREAUDIOSTATE_B__1_OFFSET))(this);
		}

	};
