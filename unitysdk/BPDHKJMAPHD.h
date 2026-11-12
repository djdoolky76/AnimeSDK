#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define BPDHKJMAPHD_CTOR_OFFSET UNITYSDK_OFFSET(0xCB43990)

inline static constexpr unsigned int BPDHKJMAPHD_TypeDefinitionIndex = 58620;

	class BPDHKJMAPHD : public ::System::Object
	{
	public:
		::UnityEngine::Transform* PDIMNOGOPKJ; // 0x10
		::UnityEngine::Collider* BKNFNKPDNPP; // 0x18
		::KFELGAIGHAP* BOFJEGFODBF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDHKJMAPHD_CTOR_OFFSET))(this);
		}

	};
