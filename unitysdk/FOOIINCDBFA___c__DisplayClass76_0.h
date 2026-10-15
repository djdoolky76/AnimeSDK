#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOOIINCDBFA;
class PEDAPLLONJD;
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMeshPathAsyncOperation; }

#define FOOIINCDBFA___C__DISPLAYCLASS76_0_CTOR_OFFSET UNITYSDK_OFFSET(0x158FC400)
#define FOOIINCDBFA___C__DISPLAYCLASS76_0___STARTPATHQUERY_B__0_OFFSET UNITYSDK_OFFSET(0x158FDDB0)

inline static constexpr unsigned int FOOIINCDBFA___c__DisplayClass76_0_TypeDefinitionIndex = 57122;

	class FOOIINCDBFA___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::FOOIINCDBFA* __4__this; // 0x10
		::UnityEngine::AI::NavMeshPath* path; // 0x18
		::UnityEngine::AI::NavMeshPathAsyncOperation* op; // 0x20
		::PEDAPLLONJD* request; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOIINCDBFA___C__DISPLAYCLASS76_0_CTOR_OFFSET))(this);
		}

		::System::Void __StartPathQuery_b__0(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + FOOIINCDBFA___C__DISPLAYCLASS76_0___STARTPATHQUERY_B__0_OFFSET))(this, a1);
		}

	};
