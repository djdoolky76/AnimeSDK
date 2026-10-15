#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMLDGPDNEOA_CTOR_OFFSET UNITYSDK_OFFSET(0xC323C70)
#define PMLDGPDNEOA_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0xC323C50)
#define PMLDGPDNEOA_GET_LIGHTCONEIDS_OFFSET UNITYSDK_OFFSET(0xC323C30)
#define PMLDGPDNEOA_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0xC323C60)
#define PMLDGPDNEOA_SET_LIGHTCONEIDS_OFFSET UNITYSDK_OFFSET(0xC323C40)

	class PMLDGPDNEOA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _LightConeIDs_k__BackingField; // 0x10
		::System::Int64 _ExpireTime_k__BackingField; // 0x18
		::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int64))((::PBYTE)hIl2Cpp + PMLDGPDNEOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LightConeIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLDGPDNEOA_GET_LIGHTCONEIDS_OFFSET))(this);
		}

		::System::Void set_LightConeIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PMLDGPDNEOA_SET_LIGHTCONEIDS_OFFSET))(this, a1);
		}

		::System::Int64 get_ExpireTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLDGPDNEOA_GET_EXPIRETIME_OFFSET))(this);
		}

		::System::Void set_ExpireTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PMLDGPDNEOA_SET_EXPIRETIME_OFFSET))(this, a1);
		}

	};
