#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DLOJKAIBPBI_CTOR_OFFSET UNITYSDK_OFFSET(0xF8BC2C0)

inline static constexpr unsigned int DLOJKAIBPBI_TypeDefinitionIndex = 47393;

	class DLOJKAIBPBI : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 ECKAIJLHEEM; // 0x10
		::UnityEngine::Vector2 COIHCPBGBPA; // 0x18
		::System::Single NIDAPHBEMDE; // 0x20
		::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DLOJKAIBPBI_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
