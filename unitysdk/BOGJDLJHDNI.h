#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMDAIKOHCAE.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define BOGJDLJHDNI_CTOR_OFFSET UNITYSDK_OFFSET(0xC18FBE0)
#define BOGJDLJHDNI_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC18FA20)

	class BOGJDLJHDNI : public ::JMDAIKOHCAE
	{
	public:
		::System::String* AMLDCHNLCJL; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + BOGJDLJHDNI_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGJDLJHDNI_GET_POSITION_OFFSET))(this);
		}

	};
