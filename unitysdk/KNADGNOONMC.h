#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KNADGNOONMC_CTOR_OFFSET UNITYSDK_OFFSET(0xB575CA0)
#define KNADGNOONMC_GET_ID_OFFSET UNITYSDK_OFFSET(0xB575C60)
#define KNADGNOONMC_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB575C80)
#define KNADGNOONMC_SET_ID_OFFSET UNITYSDK_OFFSET(0xB575C70)
#define KNADGNOONMC_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB575C90)

inline static constexpr unsigned int KNADGNOONMC_TypeDefinitionIndex = 63843;

	class KNADGNOONMC : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::UInt32 _StageID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADGNOONMC_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADGNOONMC_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNADGNOONMC_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADGNOONMC_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNADGNOONMC_SET_STAGEID_OFFSET))(this, a1);
		}

	};
