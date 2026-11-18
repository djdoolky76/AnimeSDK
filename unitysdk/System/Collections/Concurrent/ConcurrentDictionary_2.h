#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentDictionary_2_TypeDefinitionIndex = 1499;

	template <typename T1, typename T2>
	class ConcurrentDictionary_2 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_s_isValueWriteAtomic()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConcurrentDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Object* _tables; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T1>* _comparer; // 0x0
		::System::Boolean _growLockArray; // 0x0
		::System::Int32 _budget; // 0x0
	};
}
