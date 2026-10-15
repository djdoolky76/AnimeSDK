#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Security::Claims { class Claim; }
namespace System::Security::Claims { class ClaimsIdentity; }

#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_CTOR_OFFSET UNITYSDK_OFFSET(0x1C324600)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C326120)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_SECURITY_CLAIMS_CLAIM__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C326680)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SECURITY_CLAIMS_CLAIM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C326610)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C326700)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C326670)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C326620)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C326000)
#define SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1C326020)

namespace System::Security::Claims
{
	inline static constexpr unsigned int ClaimsIdentity__get_Claims_d__51_TypeDefinitionIndex = 993;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51>
	class ClaimsIdentity__get_Claims_d__51 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>* __7__wrap1; // 0x10
		::System::Security::Claims::ClaimsIdentity* __4__this; // 0x18
		::System::Security::Claims::Claim* __2__current; // 0x20
		::System::Int32 _i_5__1; // 0x28
		::System::Int32 __l__initialThreadId; // 0x2C
		::System::Int32 _j_5__2; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51___M__FINALLY1_OFFSET))(this);
		}

		::System::Security::Claims::Claim* System_Collections_Generic_IEnumerator_System_Security_Claims_Claim__get_Current()
		{
			return ((::System::Security::Claims::Claim*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SECURITY_CLAIMS_CLAIM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>* System_Collections_Generic_IEnumerable_System_Security_Claims_Claim__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Security::Claims::Claim*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_SECURITY_CLAIMS_CLAIM__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY__GET_CLAIMS_D__51_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
