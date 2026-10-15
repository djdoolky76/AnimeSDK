#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Object; }

#define GPFEAEOEGFA___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15B539B0)
#define GPFEAEOEGFA___C__DISPLAYCLASS12_0__UNSERIALIZEASYNC_B__2_OFFSET UNITYSDK_OFFSET(0x15B53BE0)

	class GPFEAEOEGFA___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::UnityEngine::MeshFilter* mf; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFEAEOEGFA___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void _UnserializeAsync_b__2(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + GPFEAEOEGFA___C__DISPLAYCLASS12_0__UNSERIALIZEASYNC_B__2_OFFSET))(this, a1);
		}

	};
