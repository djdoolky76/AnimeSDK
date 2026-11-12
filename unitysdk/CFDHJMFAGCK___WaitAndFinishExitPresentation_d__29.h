#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFDHJMFAGCK;
namespace System { class Object; }

#define CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_CTOR_OFFSET UNITYSDK_OFFSET(0xD3742C0)
#define CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD374900)
#define CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD374A60)
#define CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD374AC0)
#define CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD374A70)
#define CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD3748F0)

inline static constexpr unsigned int CFDHJMFAGCK___WaitAndFinishExitPresentation_d__29_TypeDefinitionIndex = 81550;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
	class CFDHJMFAGCK___WaitAndFinishExitPresentation_d__29 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::CFDHJMFAGCK* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Int32 exitFlightVersion; // 0x24
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK___WAITANDFINISHEXITPRESENTATION_D__29_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
