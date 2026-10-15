#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define BPDHKJMAPHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A2E90)

	class BPDHKJMAPHD : public ::System::Object
	{
	public:
		::UnityEngine::Collider* BKNFNKPDNPP; // 0x10
		::UnityEngine::Transform* PDIMNOGOPKJ; // 0x18
		::KFELGAIGHAP* BOFJEGFODBF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDHKJMAPHD_CTOR_OFFSET))(this);
		}

	};
