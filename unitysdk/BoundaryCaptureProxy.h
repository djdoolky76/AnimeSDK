#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BOUNDARYCAPTUREPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0xC1B7270)

	class BoundaryCaptureProxy
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* targetObjects; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOUNDARYCAPTUREPROXY_CTOR_OFFSET))(this);
		}

	};
