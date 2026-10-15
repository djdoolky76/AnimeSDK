#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PMOMFDCLALP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C544430)
#define PMOMFDCLALP_GET_INCREASEPERCENT_OFFSET UNITYSDK_OFFSET(0x1C54FBD0)
#define PMOMFDCLALP_GET_PARTNERACTORID_OFFSET UNITYSDK_OFFSET(0x1C54FBB0)
#define PMOMFDCLALP_SET_INCREASEPERCENT_OFFSET UNITYSDK_OFFSET(0x1C54FBE0)
#define PMOMFDCLALP_SET_PARTNERACTORID_OFFSET UNITYSDK_OFFSET(0x1C54FBC0)

inline static constexpr unsigned int PMOMFDCLALP_TypeDefinitionIndex = 41874;

	class PMOMFDCLALP : public ::System::Object
	{
	public:
		::System::UInt32 _PartnerActorID_k__BackingField; // 0x10
		::System::Int32 _IncreasePercent_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMFDCLALP_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PartnerActorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMFDCLALP_GET_PARTNERACTORID_OFFSET))(this);
		}

		::System::Void set_PartnerActorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMOMFDCLALP_SET_PARTNERACTORID_OFFSET))(this, a1);
		}

		::System::Int32 get_IncreasePercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMOMFDCLALP_GET_INCREASEPERCENT_OFFSET))(this);
		}

		::System::Void set_IncreasePercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PMOMFDCLALP_SET_INCREASEPERCENT_OFFSET))(this, a1);
		}

	};
