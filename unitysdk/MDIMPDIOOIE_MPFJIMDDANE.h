#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDIMPDIOOIE;
class MDIMPDIOOIE_MPFJIMDDANE_PIKAMLDNICD;
class NALGGFHJEBB;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MDIMPDIOOIE_MPFJIMDDANE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C48BE50)
#define MDIMPDIOOIE_MPFJIMDDANE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C48BE20)
#define MDIMPDIOOIE_MPFJIMDDANE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C47CE10)
#define MDIMPDIOOIE_MPFJIMDDANE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C48BFB0)

inline static constexpr unsigned int MDIMPDIOOIE_MPFJIMDDANE_TypeDefinitionIndex = 41556;

	class MDIMPDIOOIE_MPFJIMDDANE : public ::System::Object
	{
	public:
		::MDIMPDIOOIE_MPFJIMDDANE_PIKAMLDNICD* HJLNGDPAMOD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_MPFJIMDDANE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MDIMPDIOOIE* a1, ::System::Int32 a2, ::NALGGFHJEBB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MDIMPDIOOIE*, ::System::Int32, ::NALGGFHJEBB*))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_MPFJIMDDANE_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Int32>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_MPFJIMDDANE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDIMPDIOOIE_MPFJIMDDANE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
