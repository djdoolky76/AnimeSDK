#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }

#define HGAAAOGMIJB___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8E9E0)
#define HGAAAOGMIJB___C__DISPLAYCLASS4_0___PLAYSTORY_B__1_OFFSET UNITYSDK_OFFSET(0x15C8EBC0)
#define HGAAAOGMIJB___C__DISPLAYCLASS4_0___PLAYSTORY_B__2_OFFSET UNITYSDK_OFFSET(0x15C8ED00)
#define HGAAAOGMIJB___C__DISPLAYCLASS4_0___PLAYSTORY_B__3_OFFSET UNITYSDK_OFFSET(0x15C8ED20)

inline static constexpr unsigned int HGAAAOGMIJB___c__DisplayClass4_0_TypeDefinitionIndex = 67401;

	class HGAAAOGMIJB___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::UInt32 storyId; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAAOGMIJB___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __PlayStory_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAAOGMIJB___C__DISPLAYCLASS4_0___PLAYSTORY_B__1_OFFSET))(this);
		}

		::System::Void __PlayStory_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAAOGMIJB___C__DISPLAYCLASS4_0___PLAYSTORY_B__2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __PlayStory_b__3()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAAOGMIJB___C__DISPLAYCLASS4_0___PLAYSTORY_B__3_OFFSET))(this);
		}

	};
