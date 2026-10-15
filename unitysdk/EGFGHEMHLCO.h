#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EGFGHEMHLCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA50330)

inline static constexpr unsigned int EGFGHEMHLCO_TypeDefinitionIndex = 43782;

	class EGFGHEMHLCO : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 EHGJNIENHPP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGFGHEMHLCO_CTOR_OFFSET))(this);
		}

	};
