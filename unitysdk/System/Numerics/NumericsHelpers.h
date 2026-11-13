#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_NUMERICSHELPERS_ABS_OFFSET UNITYSDK_OFFSET(0x1FC0D500)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_1_OFFSET UNITYSDK_OFFSET(0x1FC1B2B0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_OFFSET UNITYSDK_OFFSET(0x1FC0DA40)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_1_OFFSET UNITYSDK_OFFSET(0x1FC0FCE0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_OFFSET UNITYSDK_OFFSET(0x1FC1B3A0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_DANGEROUSMAKETWOSCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1FC0B240)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEFROMPARTS_OFFSET UNITYSDK_OFFSET(0x1FC126A0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEPARTS_OFFSET UNITYSDK_OFFSET(0x1FC0A7F0)
#define SYSTEM_NUMERICS_NUMERICSHELPERS_MAKEULONG_OFFSET UNITYSDK_OFFSET(0x1FC0FEA0)

namespace System::Numerics
{
	inline static constexpr unsigned int NumericsHelpers_TypeDefinitionIndex = 3844;

	class NumericsHelpers : public ::System::Object
	{
	public:
		static ::System::Void GetDoubleParts(::System::Double a1, ::System::Int32 a2, ::System::Int32 a3, ::System::UInt64 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::System::Double, ::System::Int32, ::System::Int32, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEPARTS_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Double GetDoubleFromParts(::System::Int32 a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::Double(*)(::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_GETDOUBLEFROMPARTS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DangerousMakeTwosComplement(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_DANGEROUSMAKETWOSCOMPLEMENT_OFFSET))(a1);
		}

		static ::System::UInt64 MakeUlong(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt64(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_MAKEULONG_OFFSET))(a1, a2);
		}

		static ::System::UInt32 Abs(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_ABS_OFFSET))(a1);
		}

		static ::System::UInt32 CombineHash(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_OFFSET))(a1, a2);
		}

		static ::System::Int32 CombineHash_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_COMBINEHASH_1_OFFSET))(a1, a2);
		}

		static ::System::Int32 CbitHighZero(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_OFFSET))(a1);
		}

		static ::System::Int32 CbitHighZero_1(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_NUMERICSHELPERS_CBITHIGHZERO_1_OFFSET))(a1);
		}

	};
}
