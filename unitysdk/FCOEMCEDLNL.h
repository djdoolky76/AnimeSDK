#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCOEMCEDLNL_AHCNMIFLNOH_OFFSET UNITYSDK_OFFSET(0x1DD3CBB0)
#define FCOEMCEDLNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3CE00)
#define FCOEMCEDLNL_NOOKHODLNNM_OFFSET UNITYSDK_OFFSET(0x1DD3CAD0)
#define FCOEMCEDLNL_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x1DD3CD40)

	class FCOEMCEDLNL : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* MGAKNNMFPFA; // 0x10
		::System::Int32 PECPBEOHOJC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOEMCEDLNL_CTOR_OFFSET))(this);
		}

		::System::Boolean NOOKHODLNNM(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCOEMCEDLNL_NOOKHODLNNM_OFFSET))(this, a1);
		}

		::System::Void AHCNMIFLNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOEMCEDLNL_AHCNMIFLNOH_OFFSET))(this);
		}

		::System::Boolean PAFCMAMJENB(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCOEMCEDLNL_PAFCMAMJENB_OFFSET))(this, a1);
		}

	};
