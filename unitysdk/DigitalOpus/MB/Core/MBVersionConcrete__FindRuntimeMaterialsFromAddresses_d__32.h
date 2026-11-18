#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MB2_TextureBakeResults_CoroutineResult;

#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FBBE050)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FBBE100)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FBBE160)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1FBBE110)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FBBE040)
#define DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBE030)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__32_TypeDefinitionIndex = 96185;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32>
	class MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__32 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MB2_TextureBakeResults_CoroutineResult* isComplete; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MBVERSIONCONCRETE__FINDRUNTIMEMATERIALSFROMADDRESSES_D__32_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
