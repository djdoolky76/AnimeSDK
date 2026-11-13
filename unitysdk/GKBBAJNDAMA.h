#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GKBBAJNDAMA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A8BE4F0)
#define GKBBAJNDAMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8BE550)

inline static constexpr unsigned int GKBBAJNDAMA_TypeDefinitionIndex = 59869;

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
