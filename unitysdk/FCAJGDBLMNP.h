#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

#define FCAJGDBLMNP_AHMPMJHGIAB_OFFSET UNITYSDK_OFFSET(0x1C007A70)
#define FCAJGDBLMNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C007AC0)
#define FCAJGDBLMNP_KGPHELNAMNL_OFFSET UNITYSDK_OFFSET(0x1C007A20)
#define FCAJGDBLMNP_LCFLBFOHHFE_OFFSET UNITYSDK_OFFSET(0x1C0079A0)

inline static constexpr unsigned int FCAJGDBLMNP_TypeDefinitionIndex = 61353;

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
