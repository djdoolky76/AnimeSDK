#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EHABLKMNDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E5C30)

inline static constexpr unsigned int EHABLKMNDEE_TypeDefinitionIndex = 43125;

	class EHABLKMNDEE : public ::System::Object
	{
	public:
		::System::Single IEHPFADHJFD; // 0x10
		::UnityEngine::Vector3 MIAJNJNECOG; // 0x14
		::System::Single BJMAMHMCOEL; // 0x20
		::UnityEngine::Vector3 MCLLALGABAB; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHABLKMNDEE_CTOR_OFFSET))(this);
		}

	};
