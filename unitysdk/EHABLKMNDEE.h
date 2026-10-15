#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EHABLKMNDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA21EC0)

inline static constexpr unsigned int EHABLKMNDEE_TypeDefinitionIndex = 42150;

	class EHABLKMNDEE : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 MCLLALGABAB; // 0x10
		::System::Single IEHPFADHJFD; // 0x1C
		::UnityEngine::Vector3 MIAJNJNECOG; // 0x20
		::System::Single BJMAMHMCOEL; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHABLKMNDEE_CTOR_OFFSET))(this);
		}

	};
