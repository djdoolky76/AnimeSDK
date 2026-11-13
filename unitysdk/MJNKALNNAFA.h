#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Transform; }

#define MJNKALNNAFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B1960)

inline static constexpr unsigned int MJNKALNNAFA_TypeDefinitionIndex = 66565;

	class MJNKALNNAFA : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DICDJJOJKGF; // 0x10
		::System::UInt32 JCMHOLDHPPH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKALNNAFA_CTOR_OFFSET))(this);
		}

	};
