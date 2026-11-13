#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNNPOLGAAHB;
class OJHMEHAHDNI;
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define OJHMEHAHDNI___C__DISPLAYCLASS37_0_CTOR_OFFSET UNITYSDK_OFFSET(0x194B6FE0)
#define OJHMEHAHDNI___C__DISPLAYCLASS37_0___REQUESTANDAPPLYACTIVITYDATAASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x194B7700)
#define OJHMEHAHDNI___C__DISPLAYCLASS37_0___REQUESTANDAPPLYACTIVITYDATAASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x194B7790)

inline static constexpr unsigned int OJHMEHAHDNI___c__DisplayClass37_0_TypeDefinitionIndex = 84513;

	class OJHMEHAHDNI___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* requestPromise; // 0x10
		::OJHMEHAHDNI* __4__this; // 0x18
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
