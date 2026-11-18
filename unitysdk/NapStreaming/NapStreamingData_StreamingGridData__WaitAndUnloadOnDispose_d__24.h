#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NapStreaming { class NapStreamingData_StreamingGridData; }

#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xEEB3320)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEEB3500)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEEB3560)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xEEB3510)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEEB3310)
#define NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB3300)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingData_StreamingGridData__WaitAndUnloadOnDispose_d__24_TypeDefinitionIndex = 60757;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
	class NapStreamingData_StreamingGridData__WaitAndUnloadOnDispose_d__24 : public ::System::Object
	{
	public:
		::NapStreaming::NapStreamingData_StreamingGridData* __4__this; // 0x10
		::System::Single __2__current; // 0x18
		::System::Int32 __1__state; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGDATA_STREAMINGGRIDDATA__WAITANDUNLOADONDISPOSE_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
