#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EFEBCLDKMEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF7280)

inline static constexpr unsigned int EFEBCLDKMEH_TypeDefinitionIndex = 43966;

	class EFEBCLDKMEH : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 LJDHGFECMHJ; // 0x10
		::System::Int32 DMPLCKNNKII; // 0x1C
		::System::Single GCJMFBKLGHI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEBCLDKMEH_CTOR_OFFSET))(this);
		}

	};
