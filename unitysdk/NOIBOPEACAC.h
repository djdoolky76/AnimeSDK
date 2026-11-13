#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NOIBOPEACAC_CTOR_OFFSET UNITYSDK_OFFSET(0x19CE85B0)
#define NOIBOPEACAC_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x19CE8570)
#define NOIBOPEACAC_GET_NUM_OFFSET UNITYSDK_OFFSET(0x19CE8590)
#define NOIBOPEACAC_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x19CE8580)
#define NOIBOPEACAC_SET_NUM_OFFSET UNITYSDK_OFFSET(0x19CE85A0)

inline static constexpr unsigned int NOIBOPEACAC_TypeDefinitionIndex = 82408;

	class NOIBOPEACAC : public ::System::Object
	{
	public:
		::System::Int32 _Num_k__BackingField; // 0x10
		::System::Boolean _IsActive_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIBOPEACAC_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIBOPEACAC_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOIBOPEACAC_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Int32 get_Num()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIBOPEACAC_GET_NUM_OFFSET))(this);
		}

		::System::Void set_Num(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NOIBOPEACAC_SET_NUM_OFFSET))(this, a1);
		}

	};
