#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCOEMCEDLNL_AHCNMIFLNOH_OFFSET UNITYSDK_OFFSET(0x179B2F90)
#define FCOEMCEDLNL_CTOR_OFFSET UNITYSDK_OFFSET(0x179B31E0)
#define FCOEMCEDLNL_NOOKHODLNNM_OFFSET UNITYSDK_OFFSET(0x179B2EB0)
#define FCOEMCEDLNL_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x179B3120)

inline static constexpr unsigned int FCOEMCEDLNL_TypeDefinitionIndex = 6343;

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
