#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define RPG_CUSTOMRP_PATHTRACINGDEBUG_DUMPPATH_CTOR_OFFSET UNITYSDK_OFFSET(0xE493D20)

namespace RPG::CustomRP
{
	class PathTracingDebug_DumpPath : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 L; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* Vertices; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PATHTRACINGDEBUG_DUMPPATH_CTOR_OFFSET))(this);
		}

	};
}
