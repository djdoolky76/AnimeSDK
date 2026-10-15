#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

#define FCAJGDBLMNP_AHMPMJHGIAB_OFFSET UNITYSDK_OFFSET(0x156AF0E0)
#define FCAJGDBLMNP_CTOR_OFFSET UNITYSDK_OFFSET(0x156AF130)
#define FCAJGDBLMNP_KGPHELNAMNL_OFFSET UNITYSDK_OFFSET(0x156AF090)
#define FCAJGDBLMNP_LCFLBFOHHFE_OFFSET UNITYSDK_OFFSET(0x156AF010)

inline static constexpr unsigned int FCAJGDBLMNP_TypeDefinitionIndex = 60069;

	class FCAJGDBLMNP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAJGDBLMNP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Rect LCFLBFOHHFE()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAJGDBLMNP_LCFLBFOHHFE_OFFSET))(this);
		}

		::System::Int32 KGPHELNAMNL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAJGDBLMNP_KGPHELNAMNL_OFFSET))(this);
		}

		::System::Int32 AHMPMJHGIAB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAJGDBLMNP_AHMPMJHGIAB_OFFSET))(this);
		}

	};
