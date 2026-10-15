#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOOIINCDBFA;
class PEDAPLLONJD;
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMeshPathAsyncOperation; }

#define FOOIINCDBFA___C__DISPLAYCLASS76_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15907440)
#define FOOIINCDBFA___C__DISPLAYCLASS76_0___STARTPATHQUERY_B__0_OFFSET UNITYSDK_OFFSET(0x15908DB0)

	class FOOIINCDBFA___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::UnityEngine::AI::NavMeshPathAsyncOperation* op; // 0x10
		::FOOIINCDBFA* __4__this; // 0x18
		::PEDAPLLONJD* request; // 0x20
		::UnityEngine::AI::NavMeshPath* path; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA___C__DISPLAYCLASS76_0_CTOR_OFFSET))(this);
		}

		::System::Void __StartPathQuery_b__0(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + FOOIINCDBFA___C__DISPLAYCLASS76_0___STARTPATHQUERY_B__0_OFFSET))(this, a1);
		}

	};
