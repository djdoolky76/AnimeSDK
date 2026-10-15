#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EFEBCLDKMEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA33A30)

inline static constexpr unsigned int EFEBCLDKMEH_TypeDefinitionIndex = 42985;

	class EFEBCLDKMEH : public ::System::Object
	{
	public:
		::System::Single GCJMFBKLGHI; // 0x10
		::UnityEngine::Vector3 LJDHGFECMHJ; // 0x14
		::System::Int32 DMPLCKNNKII; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEBCLDKMEH_CTOR_OFFSET))(this);
		}

	};
