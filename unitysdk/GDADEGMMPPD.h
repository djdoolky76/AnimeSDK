#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDADEGMMPPD;

#define GDADEGMMPPD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19ECBD70)
#define GDADEGMMPPD_CTOR_OFFSET UNITYSDK_OFFSET(0x19ECBDD0)
#define GDADEGMMPPD_GET_SPONSORID_OFFSET UNITYSDK_OFFSET(0x19ECBE30)
#define GDADEGMMPPD_GET_STATEID_OFFSET UNITYSDK_OFFSET(0x19ECBE50)
#define GDADEGMMPPD_IPPLBIIDHLM_OFFSET UNITYSDK_OFFSET(0x19ECBDE0)
#define GDADEGMMPPD_SET_SPONSORID_OFFSET UNITYSDK_OFFSET(0x19ECBE40)
#define GDADEGMMPPD_SET_STATEID_OFFSET UNITYSDK_OFFSET(0x19ECBE60)

inline static constexpr unsigned int GDADEGMMPPD_TypeDefinitionIndex = 83075;

	class GDADEGMMPPD : public ::System::Object
	{
	public:
		::System::UInt32 _StateID_k__BackingField; // 0x10
		::System::UInt32 _SponsorID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDADEGMMPPD_CTOR_OFFSET))(this);
		}

		static ::GDADEGMMPPD* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::GDADEGMMPPD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GDADEGMMPPD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void IPPLBIIDHLM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDADEGMMPPD_IPPLBIIDHLM_OFFSET))(this, a1);
		}

		::System::UInt32 get_SponsorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDADEGMMPPD_GET_SPONSORID_OFFSET))(this);
		}

		::System::Void set_SponsorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDADEGMMPPD_SET_SPONSORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_StateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDADEGMMPPD_GET_STATEID_OFFSET))(this);
		}

		::System::Void set_StateID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDADEGMMPPD_SET_STATEID_OFFSET))(this, a1);
		}

	};
