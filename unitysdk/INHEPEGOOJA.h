#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

#define INHEPEGOOJA_AHMPMJHGIAB_OFFSET UNITYSDK_OFFSET(0x164E1020)
#define INHEPEGOOJA_CTOR_OFFSET UNITYSDK_OFFSET(0x164E1070)
#define INHEPEGOOJA_KGPHELNAMNL_OFFSET UNITYSDK_OFFSET(0x164E0FD0)
#define INHEPEGOOJA_LCFLBFOHHFE_OFFSET UNITYSDK_OFFSET(0x164E0F50)

inline static constexpr unsigned int INHEPEGOOJA_TypeDefinitionIndex = 60067;

	class INHEPEGOOJA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INHEPEGOOJA_CTOR_OFFSET))(this);
		}

		::UnityEngine::Rect LCFLBFOHHFE()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + INHEPEGOOJA_LCFLBFOHHFE_OFFSET))(this);
		}

		::System::Int32 KGPHELNAMNL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INHEPEGOOJA_KGPHELNAMNL_OFFSET))(this);
		}

		::System::Int32 AHMPMJHGIAB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INHEPEGOOJA_AHMPMJHGIAB_OFFSET))(this);
		}

	};
