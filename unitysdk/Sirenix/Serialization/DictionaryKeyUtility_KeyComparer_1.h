#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DictionaryKeyUtility_KeyComparer_1_TypeDefinitionIndex = 7578;

	template <typename T>
	class DictionaryKeyUtility_KeyComparer_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_Default()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility_KeyComparer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::IComparer_1<T>* actualComparer; // 0x0
	};
}
