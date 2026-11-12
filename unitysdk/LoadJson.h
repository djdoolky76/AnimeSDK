#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }

#define LOADJSON_CTOR_OFFSET UNITYSDK_OFFSET(0xC099940)

inline static constexpr unsigned int LoadJson_TypeDefinitionIndex = 48621;

	class LoadJson : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* path; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOADJSON_CTOR_OFFSET))(this);
		}

	};
