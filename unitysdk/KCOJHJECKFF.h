#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KCOJHJECKFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB832F0)

inline static constexpr unsigned int KCOJHJECKFF_TypeDefinitionIndex = 42977;

	class KCOJHJECKFF : public ::System::Object
	{
	public:
		::System::Boolean DFLENFKEMPM; // 0x10
		::System::Boolean AAPINKPIOID; // 0x11
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 DFHKJKKIIFP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOJHJECKFF_CTOR_OFFSET))(this);
		}

	};
