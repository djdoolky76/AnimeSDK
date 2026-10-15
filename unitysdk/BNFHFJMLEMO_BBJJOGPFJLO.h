#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Object; }

#define BNFHFJMLEMO_BBJJOGPFJLO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDCB5D0)

	class BNFHFJMLEMO_BBJJOGPFJLO : public ::System::Object
	{
	public:
		::UnityEngine::Object* PANGKOPAOML; // 0x10
		::System::Int32 GEMJKKCDGID; // 0x18
		::System::Void _ctor(::UnityEngine::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_BBJJOGPFJLO_CTOR_OFFSET))(this, a1, a2);
		}

	};
