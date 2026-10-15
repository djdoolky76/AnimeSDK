#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GKBBAJNDAMA_CLEAR_OFFSET UNITYSDK_OFFSET(0x15A82E80)
#define GKBBAJNDAMA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A82EE0)

	class GKBBAJNDAMA : public ::System::Object
	{
	public:
		::System::String* KDOLHICFKLL; // 0x10
		::System::Boolean CJGGFJBHOOM; // 0x18
		::System::Boolean AJCHFLNPMCJ; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKBBAJNDAMA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKBBAJNDAMA_CLEAR_OFFSET))(this);
		}

	};
