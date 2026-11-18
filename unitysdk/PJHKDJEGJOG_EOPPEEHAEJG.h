#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PJHKDJEGJOG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJHKDJEGJOG_EOPPEEHAEJG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1556DA90)
#define PJHKDJEGJOG_EOPPEEHAEJG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1556FBD0)
#define PJHKDJEGJOG_EOPPEEHAEJG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1556FC30)
#define PJHKDJEGJOG_EOPPEEHAEJG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1556FBE0)
#define PJHKDJEGJOG_EOPPEEHAEJG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1556DA80)
#define PJHKDJEGJOG_EOPPEEHAEJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1556DA70)

inline static constexpr unsigned int PJHKDJEGJOG_EOPPEEHAEJG_TypeDefinitionIndex = 67870;

class PJHKDJEGJOG_EOPPEEHAEJG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EBMHLJOPFDC; // 0x10
	::System::Action* OGILJFEMDMD; // 0x18
	::PJHKDJEGJOG* KLHPEBKNIFB; // 0x20
	::System::Int32 DODPEAHGLIH; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x2C
	::System::Single IDBEJJEKGDI; // 0x30

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_EOPPEEHAEJG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_EOPPEEHAEJG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_EOPPEEHAEJG_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_EOPPEEHAEJG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_EOPPEEHAEJG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHKDJEGJOG_EOPPEEHAEJG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
