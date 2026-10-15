#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNNPOLGAAHB;
class OJHMEHAHDNI;
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define OJHMEHAHDNI___C__DISPLAYCLASS37_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB9940)
#define OJHMEHAHDNI___C__DISPLAYCLASS37_0___REQUESTANDAPPLYACTIVITYDATAASYNC_B__0_OFFSET UNITYSDK_OFFSET(0xBEBA060)
#define OJHMEHAHDNI___C__DISPLAYCLASS37_0___REQUESTANDAPPLYACTIVITYDATAASYNC_B__1_OFFSET UNITYSDK_OFFSET(0xBEBA0F0)

inline static constexpr unsigned int OJHMEHAHDNI___c__DisplayClass37_0_TypeDefinitionIndex = 81733;

	class OJHMEHAHDNI___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::OJHMEHAHDNI* __4__this; // 0x10
		::RPG::Client::Promises::Promise* requestPromise; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI___C__DISPLAYCLASS37_0_CTOR_OFFSET))(this);
		}

		::System::Void __RequestAndApplyActivityDataAsync_b__0(::JNNPOLGAAHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNNPOLGAAHB*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI___C__DISPLAYCLASS37_0___REQUESTANDAPPLYACTIVITYDATAASYNC_B__0_OFFSET))(this, a1);
		}

		::System::Void __RequestAndApplyActivityDataAsync_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI___C__DISPLAYCLASS37_0___REQUESTANDAPPLYACTIVITYDATAASYNC_B__1_OFFSET))(this, a1);
		}

	};
